/*
 * XREFs of MmDeleteProcessor @ 0x1407E8154
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  _QWORD **v1; // rbx

  v1 = *(_QWORD ***)(a1 + 34872);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140E37568, v1[42], 1u);
    MiDeleteUltraThreadContext((__int64)(v1 + 1));
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 34872) = 0LL;
  }
}
