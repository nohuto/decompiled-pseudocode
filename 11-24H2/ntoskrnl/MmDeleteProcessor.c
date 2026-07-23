/*
 * XREFs of MmDeleteProcessor @ 0x1407E8724
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  _QWORD **v1; // rbx

  v1 = *(_QWORD ***)(a1 + 34872);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140E376A8, v1[42], 1u);
    MiDeleteUltraThreadContext((__int64)(v1 + 1));
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 34872) = 0LL;
  }
}
