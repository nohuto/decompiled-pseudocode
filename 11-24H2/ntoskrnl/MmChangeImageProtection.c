/*
 * XREFs of MmChangeImageProtection @ 0x140A3BAE0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402BBA7C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiSetImageProtection @ 0x14042896C (MiSetImageProtection.c)
 *     VslValidateDynamicCodePages @ 0x140A3BD6C (VslValidateDynamicCodePages.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // eax
  _QWORD *v20; // r15
  __int64 i; // r14
  ULONG_PTR v22; // rcx
  __int64 v23; // rdi
  _DWORD v24[14]; // [rsp+20h] [rbp-38h] BYREF

  v24[0] = 0;
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  v7 = a3;
  if ( a3 != (unsigned int)a3 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 10) & 7) != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 44) )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 40);
  if ( (v8 & 0xFFF) != 0 )
    return 3221225485LL;
  v9 = v8 >> 12;
  v10 = MiLockLoadedDataTableEntryIfNecessary(*(_QWORD *)(a1 + 32), v24);
  v11 = v10;
  if ( v10 )
  {
    v16 = *(_QWORD *)(v10 + 48);
    v17 = a2 + a3;
    v18 = v16 + *(unsigned int *)(v10 + 64);
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v18
      || a2 < v16
      || v17 > v18
      || v17 - 1 < a2 )
    {
      v12 = -1073741800;
    }
    else
    {
      v19 = *(_DWORD *)(v11 + 104);
      if ( (v19 & 0x80000) != 0 )
      {
        v12 = -1073741757;
      }
      else
      {
        v12 = 0;
        *(_DWORD *)(v11 + 104) = v19 | 0x80000;
        if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v16) )
        {
LABEL_34:
          v12 = -1073741800;
        }
        else
        {
          v20 = (_QWORD *)(a1 + 48);
          for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
          {
            v22 = 48LL * v20[i] - 0x220000000000LL;
            if ( *(__int64 *)(v22 + 40) < 0 )
              goto LABEL_34;
            if ( (MiGetPagePrivilege(v22, 0, 0LL) & 0x40) != 0 )
            {
              v12 = -1073741755;
              goto LABEL_11;
            }
          }
          MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
          if ( a4 == 1 )
          {
            if ( (MiFlags & 0x4000) == 0 || (v12 = VslValidateDynamicCodePages(a1, a2, v7), v12 >= 0) )
            {
              MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
              v12 = 0;
            }
          }
          else if ( (MiFlags & 0x8000) != 0 && v9 )
          {
            v23 = v9;
            do
            {
              MiClearPfnImageVerified(48LL * *v20++ - 0x220000000000LL, 9LL, v13, v14);
              --v23;
            }
            while ( v23 );
          }
        }
LABEL_11:
        *(_DWORD *)(v11 + 104) &= ~0x80000u;
      }
    }
    if ( v24[0] )
      MmUnlockLoadedDataTableEntry(v11);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v12;
}
