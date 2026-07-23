/*
 * XREFs of ValidateStringParameter @ 0x1800E254C
 * Callers:
 *     RtlCreateProcessParametersInternal @ 0x1800E1EE0 (RtlCreateProcessParametersInternal.c)
 *     ValidateOptionalString @ 0x1800E241C (ValidateOptionalString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStringParameter(__int64 a1)
{
  if ( !a1 || *(_WORD *)(a1 + 2) < *(_WORD *)a1 )
    return 3221225485LL;
  if ( *(_WORD *)a1 )
    return *(_QWORD *)(a1 + 8) == 0LL ? 0xC000000D : 0;
  return 0LL;
}
