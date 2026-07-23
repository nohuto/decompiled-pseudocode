/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x140C5CAB4
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  int v0; // ebx
  unsigned int v1; // edi
  __int64 *v2; // r12
  struct _KTHREAD *Lock; // rsi
  PVOID *i; // rax
  PVOID v5; // rcx
  PVOID *j; // rbx
  __int64 *k; // rbx
  unsigned __int64 *v8; // r14
  unsigned int v9; // r13d
  ULONG v10; // ebp
  unsigned __int64 v11; // rsi
  __int64 *v12; // rcx
  ULONG m; // r15d
  unsigned __int64 v14; // r8
  __int64 *DataTableEntryByAddress; // rax
  __int64 v16; // r11
  int v17; // edx
  _QWORD *Pool; // rcx
  __int64 v19; // rdx
  __int64 *v20; // r8
  PVOID v21; // rcx
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF
  struct _KTHREAD *v24; // [rsp+68h] [rbp+10h]
  __int64 *v25; // [rsp+70h] [rbp+18h]

  Size = 0;
  v0 = 0;
  v25 = 0LL;
  v1 = 0;
  v2 = 0LL;
  Lock = MiAcquireLoadLock(1);
  v24 = Lock;
  for ( i = (PVOID *)PsLoadedModuleList; ; i = (PVOID *)*i )
  {
    if ( i == &PsLoadedModuleList )
    {
LABEL_10:
      v1 = -1073741275;
LABEL_11:
      for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      {
        *((_DWORD *)j + 46) &= ~0x100000u;
        j[30] = 0LL;
        v21 = j[17];
        if ( v21 != (PVOID)1 && v21 != (PVOID)-2LL && ((unsigned __int8)v21 & 1) == 0 )
          ExFreePoolWithTag(v21, 0);
        j[17] = (PVOID)1;
        *((_WORD *)j + 54) = 1;
      }
      goto LABEL_59;
    }
    v5 = i[6];
    if ( PsNtosImageBase == v5 )
    {
      v2 = (__int64 *)i;
    }
    else
    {
      if ( PsHalImageBase != v5 )
        goto LABEL_7;
      v25 = (__int64 *)i;
    }
    ++v0;
LABEL_7:
    if ( v0 == 2 )
      break;
  }
  for ( k = (__int64 *)PsLoadedModuleList; k != (__int64 *)&PsLoadedModuleList; k = (__int64 *)*k )
  {
    v8 = (unsigned __int64 *)RtlImageDirectoryEntryToData((PVOID)k[6], 1u, 0xCu, &Size);
    if ( v8 )
    {
      v9 = 0;
      v10 = Size >> 3;
      v11 = 0LL;
      v12 = 0LL;
      Size >>= 3;
      for ( m = 0; m < v10; ++m )
      {
        if ( !v12 || (v14 = v12[6], *v8 < v14) || *v8 >= v14 + *((unsigned int *)v12 + 16) )
        {
          DataTableEntryByAddress = MmFindDataTableEntryByAddress(*v8);
          v12 = DataTableEntryByAddress;
          if ( DataTableEntryByAddress )
          {
            v17 = *((_DWORD *)DataTableEntryByAddress + 46);
            if ( (v17 & 0x100000) == 0
              && DataTableEntryByAddress != v2
              && DataTableEntryByAddress != v25
              && DataTableEntryByAddress != k )
            {
              if ( (v17 & 0x80u) != 0 || _bittest16((const signed __int16 *)DataTableEntryByAddress + 55, 9u) )
              {
                v1 = -1073740608;
LABEL_48:
                Lock = v24;
                goto LABEL_11;
              }
              if ( (*((_DWORD *)k + 46) & 0x80u) == 0 && !_bittest16((const signed __int16 *)k + 55, 9u)
                || (__int64 *)k[31] != DataTableEntryByAddress )
              {
                *((_DWORD *)DataTableEntryByAddress + 46) = v17 | 0x100000;
                ++v9;
                DataTableEntryByAddress[30] = v11;
                v11 = (unsigned __int64)DataTableEntryByAddress;
              }
            }
          }
          else if ( v16 && (*((_DWORD *)k + 46) & 0x80u) == 0 && !_bittest16((const signed __int16 *)k + 55, 9u) )
          {
            Lock = v24;
            goto LABEL_10;
          }
        }
        ++v8;
      }
      if ( !v11 )
        goto LABEL_45;
      Pool = 0LL;
      if ( v9 > 1 )
      {
        Pool = (_QWORD *)MiAllocatePool(0x100uLL, 8LL * (v9 - 1) + 16, 1413770573);
        if ( !Pool )
        {
          v1 = -1073741670;
          goto LABEL_48;
        }
        *Pool = v9;
        k[17] = (__int64)Pool;
      }
      v19 = 0LL;
      do
      {
        v20 = *(__int64 **)(v11 + 240);
        *(_QWORD *)(v11 + 240) = 0LL;
        *(_DWORD *)(v11 + 184) &= ~0x100000u;
        ++*(_WORD *)(v11 + 108);
        if ( v9 == 1 )
        {
          k[17] = v11 | 1;
        }
        else
        {
          Pool[v19 + 1] = v11;
          v19 = (unsigned int)(v19 + 1);
        }
        v11 = (unsigned __int64)v20;
      }
      while ( v20 );
    }
    else
    {
LABEL_45:
      k[17] = -2LL;
    }
  }
  Lock = v24;
LABEL_59:
  MmReleaseLoadLock(Lock);
  return v1;
}
