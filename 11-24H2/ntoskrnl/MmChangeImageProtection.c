/*
 * XREFs of MmChangeImageProtection @ 0x140A45E20
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiSetImageProtection @ 0x140435EEC (MiSetImageProtection.c)
 *     VslValidateDynamicCodePages @ 0x140A460AC (VslValidateDynamicCodePages.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ebx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // r15
  __int64 i; // r14
  ULONG_PTR v20; // rcx
  __int64 v21; // rdi
  _DWORD v22[14]; // [rsp+20h] [rbp-38h] BYREF

  v22[0] = 0;
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
  v10 = MiLockLoadedDataTableEntryIfNecessary(*(_QWORD *)(a1 + 32), v22);
  v11 = v10;
  if ( v10 )
  {
    v14 = *(_QWORD *)(v10 + 48);
    v15 = a2 + a3;
    v16 = v14 + *(unsigned int *)(v10 + 64);
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v16
      || a2 < v14
      || v15 > v16
      || v15 - 1 < a2 )
    {
      v12 = -1073741800;
    }
    else
    {
      v17 = *(_DWORD *)(v11 + 104);
      if ( (v17 & 0x80000) != 0 )
      {
        v12 = -1073741757;
      }
      else
      {
        v12 = 0;
        *(_DWORD *)(v11 + 104) = v17 | 0x80000;
        if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v14) )
        {
LABEL_34:
          v12 = -1073741800;
        }
        else
        {
          v18 = (_QWORD *)(a1 + 48);
          for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
          {
            v20 = 48LL * v18[i] - 0x220000000000LL;
            if ( *(__int64 *)(v20 + 40) < 0 )
              goto LABEL_34;
            if ( (MiGetPagePrivilege(v20, 0, 0LL) & 0x40) != 0 )
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
            v21 = v9;
            do
            {
              MiClearPfnImageVerified(48LL * *v18++ - 0x220000000000LL, 9);
              --v21;
            }
            while ( v21 );
          }
        }
LABEL_11:
        *(_DWORD *)(v11 + 104) &= ~0x80000u;
      }
    }
    if ( v22[0] )
      MmUnlockLoadedDataTableEntry(v11);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v12;
}
