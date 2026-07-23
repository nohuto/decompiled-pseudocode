/*
 * XREFs of CmpGetVirtualizationIDFromFullVirtualPath @ 0x1408E24B0
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x1408E1EAC (CmpGetCmHiveFromVirtualPath.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408E2144 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetVirtualizationIDFromFullVirtualPath(_OWORD *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r9
  int v3; // r10d
  __int64 *v4; // r8
  _WORD *v5; // rax
  __int16 v7; // ax
  __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  unsigned __int16 i; // r8
  unsigned __int64 v13; // rax

  v2 = 0;
  *(_OWORD *)a2 = *a1;
  v3 = 3;
  while ( 1 )
  {
    v4 = (__int64 *)(a2 + 4);
    v5 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( *v5 == 92 && !--v3 )
      break;
    ++v2;
    *v4 = (__int64)(v5 + 1);
    if ( 2 * (unsigned __int64)v2 >= *a2 )
      return 3221225485LL;
  }
  v7 = *a2;
  *(_DWORD *)a2 = 0;
  *v4 += 2LL;
  v8 = *v4;
  v9 = (unsigned __int16)(v7 - 2 * v2 - 2);
  v10 = 0;
  v11 = -1073741811;
  for ( i = 0; ; *a2 = i )
  {
    v13 = 2LL * v10;
    if ( v13 >= v9 )
      break;
    if ( *(_WORD *)(v13 + v8) == 92 )
      return 0;
    ++v10;
    i += 2;
  }
  return v11;
}
