/*
 * XREFs of MmDeleteProcessor @ 0x1407D8294
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 **v1; // rbx

  v1 = *(unsigned __int64 ***)(a1 + 34872);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_140E37328, v1[42], 1u);
    MiDeleteUltraThreadContext((__int64)(v1 + 1));
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 34872) = 0LL;
  }
}
