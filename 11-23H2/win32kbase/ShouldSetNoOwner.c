/*
 * XREFs of ShouldSetNoOwner @ 0x1C00A0B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldSetNoOwner(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // edx

  if ( (*(_DWORD *)(a1 + 824) & 0x30) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v2 = *(_QWORD *)(a2 + 24);
  if ( a2 == *(_QWORD *)(v2 + 104) )
    return 0LL;
  if ( a2 == *(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL) )
    return 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL);
  result = 1LL;
  if ( (unsigned int)(v4 - 1) <= 1 || v4 == 16 )
    return 0LL;
  return result;
}
