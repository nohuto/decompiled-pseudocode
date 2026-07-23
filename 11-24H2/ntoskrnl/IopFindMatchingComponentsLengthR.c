/*
 * XREFs of IopFindMatchingComponentsLengthR @ 0x140712DD4
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140A2F13C (IopSymlinkProcessReparse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopFindMatchingComponentsLengthR(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r11
  __int64 v3; // rax
  _WORD *v4; // rcx
  unsigned __int64 v5; // r10
  _WORD *v6; // rax
  _WORD *v7; // r8
  _WORD *v8; // rdx

  v2 = *((_QWORD *)a1 + 1);
  v3 = *a1;
  v4 = 0LL;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_WORD *)(v2 + v3);
  v7 = v6;
  if ( (unsigned __int64)v6 < v2 )
    return 0LL;
  v8 = (_WORD *)(v5 + *a2);
  do
  {
    if ( (unsigned __int64)v8 < v5 || *v7 != *v8 )
      break;
    if ( *v7 == 92 )
      v4 = v7;
    --v7;
    --v8;
  }
  while ( (unsigned __int64)v7 >= v2 );
  if ( v4 )
    return v6 - v4;
  else
    return 0LL;
}
