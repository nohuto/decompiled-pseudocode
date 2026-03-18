/*
 * XREFs of MiUpdatePatchInProgress @ 0x14067D8A4
 * Callers:
 *     MiLinkHotPatchToBase @ 0x14067D1C4 (MiLinkHotPatchToBase.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiUpdatePatchInProgress(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 result; // rax

  if ( (a3 & 2) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( (a3 & 1) != 0 )
  {
    qword_140E374A0 = 0LL;
    qword_140E37498 = 0LL;
  }
  else
  {
    qword_140E374A0 = a1;
    qword_140E37498 = a2;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
