/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x140C49598
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  int v0; // ebx
  unsigned int v1; // edi
  __int64 *v2; // r12
  struct _KTHREAD *Lock; // rsi
  PVOID *i; // rax
  PVOID v5; // rcx
  PVOID v6; // rt0
  PVOID *j; // rbx
  __int64 *k; // rbx
  unsigned __int64 *v9; // r14
  unsigned int v10; // r13d
  ULONG v11; // ebp
  unsigned __int64 v12; // rsi
  __int64 *v13; // rcx
  ULONG m; // r15d
  unsigned __int64 v15; // r8
  __int64 *DataTableEntryByAddress; // rax
  __int64 v17; // r11
  int v18; // edx
  _QWORD *Pool; // rcx
  __int64 v20; // rdx
  __int64 *v21; // r8
  PVOID v22; // rcx
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF
  struct _KTHREAD *v25; // [rsp+68h] [rbp+10h]
  __int64 *v26; // [rsp+70h] [rbp+18h]

  Size = 0;
  v0 = 0;
  v26 = 0LL;
  v1 = 0;
  v2 = 0LL;
  Lock = MiAcquireLoadLock(1);
  v25 = Lock;
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
        v22 = j[17];
        if ( v22 != (PVOID)1 && v22 != (PVOID)-2LL && ((unsigned __int8)v22 & 1) == 0 )
          ExFreePoolWithTag(v22, 0);
        j[17] = (PVOID)1;
        *((_WORD *)j + 54) = 1;
      }
      goto LABEL_59;
    }
    v5 = i[6];
    v6 = *(PVOID *)&KeNumberProcessorsGroup0[9];
    if ( v6 == v5 )
    {
      v2 = (__int64 *)i;
    }
    else
    {
      if ( PsHalImageBase != v5 )
        goto LABEL_7;
      v26 = (__int64 *)i;
    }
    ++v0;
LABEL_7:
    if ( v0 == 2 )
      break;
  }
  for ( k = (__int64 *)PsLoadedModuleList; k != (__int64 *)&PsLoadedModuleList; k = (__int64 *)*k )
  {
    v9 = (unsigned __int64 *)RtlImageDirectoryEntryToData((PVOID)k[6], 1u, 0xCu, &Size);
    if ( v9 )
    {
      v10 = 0;
      v11 = Size >> 3;
      v12 = 0LL;
      v13 = 0LL;
      Size >>= 3;
      for ( m = 0; m < v11; ++m )
      {
        if ( !v13 || (v15 = v13[6], *v9 < v15) || *v9 >= v15 + *((unsigned int *)v13 + 16) )
        {
          DataTableEntryByAddress = MmFindDataTableEntryByAddress(*v9);
          v13 = DataTableEntryByAddress;
          if ( DataTableEntryByAddress )
          {
            v18 = *((_DWORD *)DataTableEntryByAddress + 46);
            if ( (v18 & 0x100000) == 0
              && DataTableEntryByAddress != v2
              && DataTableEntryByAddress != v26
              && DataTableEntryByAddress != k )
            {
              if ( (v18 & 0x80u) != 0 || _bittest16((const signed __int16 *)DataTableEntryByAddress + 55, 9u) )
              {
                v1 = -1073740608;
LABEL_48:
                Lock = v25;
                goto LABEL_11;
              }
              if ( (*((_DWORD *)k + 46) & 0x80u) == 0 && !_bittest16((const signed __int16 *)k + 55, 9u)
                || (__int64 *)k[31] != DataTableEntryByAddress )
              {
                *((_DWORD *)DataTableEntryByAddress + 46) = v18 | 0x100000;
                ++v10;
                DataTableEntryByAddress[30] = v12;
                v12 = (unsigned __int64)DataTableEntryByAddress;
              }
            }
          }
          else if ( v17 && (*((_DWORD *)k + 46) & 0x80u) == 0 && !_bittest16((const signed __int16 *)k + 55, 9u) )
          {
            Lock = v25;
            goto LABEL_10;
          }
        }
        ++v9;
      }
      if ( !v12 )
        goto LABEL_45;
      Pool = 0LL;
      if ( v10 > 1 )
      {
        Pool = (_QWORD *)MiAllocatePool(0x100uLL, 8LL * (v10 - 1) + 16, 1413770573);
        if ( !Pool )
        {
          v1 = -1073741670;
          goto LABEL_48;
        }
        *Pool = v10;
        k[17] = (__int64)Pool;
      }
      v20 = 0LL;
      do
      {
        v21 = *(__int64 **)(v12 + 240);
        *(_QWORD *)(v12 + 240) = 0LL;
        *(_DWORD *)(v12 + 184) &= ~0x100000u;
        ++*(_WORD *)(v12 + 108);
        if ( v10 == 1 )
        {
          k[17] = v12 | 1;
        }
        else
        {
          Pool[v20 + 1] = v12;
          v20 = (unsigned int)(v20 + 1);
        }
        v12 = (unsigned __int64)v21;
      }
      while ( v21 );
    }
    else
    {
LABEL_45:
      k[17] = -2LL;
    }
  }
  Lock = v25;
LABEL_59:
  MmReleaseLoadLock(Lock);
  return v1;
}
