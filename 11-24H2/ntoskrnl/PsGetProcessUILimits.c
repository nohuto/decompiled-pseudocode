/*
 * XREFs of PsGetProcessUILimits @ 0x140777480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessUILimits(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 672);
  result = 0LL;
  while ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 1552) & 0x10) != 0 )
      result = *(_DWORD *)(v1 + 544) | (unsigned int)result;
    v1 = *(_QWORD *)(v1 + 1304);
  }
  return result;
}
