/*
 * XREFs of IovInitializeIrp @ 0x140BAB428
 * Callers:
 *     IoInitializeIrpPriv @ 0x1404325B0 (IoInitializeIrpPriv.c)
 *     IoInitializeIrp @ 0x140435540 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x140BA86E4 (VfIoInitializeIrp.c)
 */

void __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  if ( !VfIoDisabled )
    VfIoInitializeIrp(a1, a4, 0);
}
