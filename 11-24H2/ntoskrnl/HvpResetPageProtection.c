/*
 * XREFs of HvpResetPageProtection @ 0x140967690
 * Callers:
 *     HvResetDirtyData @ 0x140967654 (HvResetDirtyData.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x14042AD00 (RtlFindNextForwardRunSet.c)
 *     HvpSetRangeProtection @ 0x140887154 (HvpSetRangeProtection.c)
 */

_UNKNOWN **__fastcall HvpResetPageProtection(ULONG_PTR BugCheckParameter2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // ebp
  unsigned int v4; // edx
  int v5; // r15d
  int v6; // esi
  unsigned int v7; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v9 = 0;
  v3 = *(_DWORD *)(BugCheckParameter2 + 88);
  v4 = 0;
  v5 = *(_DWORD *)(BugCheckParameter2 + 104);
  do
  {
    if ( v4 >= v3 )
      break;
    result = (_UNKNOWN **)RtlFindNextForwardRunSet(BugCheckParameter2 + 88, v4, &v9);
    v6 = (int)result;
    if ( !(_DWORD)result )
      break;
    v7 = v9;
    result = (_UNKNOWN **)HvpSetRangeProtection(BugCheckParameter2, v9 << 9, (_DWORD)result << 9, 2);
    v4 = v6 + v7;
    v5 -= v6;
  }
  while ( v5 );
  return result;
}
