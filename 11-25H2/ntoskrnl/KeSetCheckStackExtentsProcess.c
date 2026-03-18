/*
 * XREFs of KeSetCheckStackExtentsProcess @ 0x140A615F8
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetCheckStackExtentsProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 5u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 5u);
}
