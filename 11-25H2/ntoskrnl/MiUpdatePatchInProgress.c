/*
 * XREFs of MiUpdatePatchInProgress @ 0x140672094
 * Callers:
 *     MiLinkHotPatchToBase @ 0x1406719B0 (MiLinkHotPatchToBase.c)
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    qword_140E37260 = 0LL;
    qword_140E37258 = 0LL;
  }
  else
  {
    qword_140E37260 = a1;
    qword_140E37258 = a2;
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
