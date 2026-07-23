/*
 * XREFs of MiReturnPfnReferenceCount @ 0x1403F02E4
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x1403F0B48 (MiInitializeNewImageSectionProtos.c)
 *     MiDeleteImageCreationMdls @ 0x14098FC88 (MiDeleteImageCreationMdls.c)
 * Callees:
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
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
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
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
