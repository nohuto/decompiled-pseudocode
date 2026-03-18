/*
 * XREFs of ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140B9F7D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 ViRlrsMmProbeAndLockProcessPages_Entry()
{
  __int64 result; // rax

  result = VfFaultsInjectResourceFailure(0);
  if ( (_DWORD)result == 1 )
    RtlRaiseStatus(-1073741663);
  return result;
}
