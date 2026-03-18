/*
 * XREFs of MiReturnPfnReferenceCount @ 0x140311244
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x140312D98 (MiInitializeNewImageSectionProtos.c)
 *     MiDeleteImageCreationMdls @ 0x140945F4C (MiDeleteImageCreationMdls.c)
 * Callees:
 *     MiReturnPfnReferenceCountAtDpc @ 0x1402E6850 (MiReturnPfnReferenceCountAtDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // edi

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v7 = MiReturnPfnReferenceCountAtDpc(v3, v5, a3);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(CurrentIrql);
  return v7;
}
