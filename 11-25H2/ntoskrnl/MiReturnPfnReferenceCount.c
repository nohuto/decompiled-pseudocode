/*
 * XREFs of MiReturnPfnReferenceCount @ 0x14045416C
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x1404536FC (MiInitializeNewImageSectionProtos.c)
 *     MiDeleteImageCreationMdls @ 0x140A2AA8C (MiDeleteImageCreationMdls.c)
 * Callees:
 *     MiReturnPfnReferenceCountAtDpc @ 0x14033BC20 (MiReturnPfnReferenceCountAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // edi

  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v8 = MiReturnPfnReferenceCountAtDpc(v4, v6, a3, a4);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  return v8;
}
