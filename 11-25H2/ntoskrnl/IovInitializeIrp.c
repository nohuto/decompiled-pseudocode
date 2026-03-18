/*
 * XREFs of IovInitializeIrp @ 0x140B99448
 * Callers:
 *     IoInitializeIrpPriv @ 0x14043DBB0 (IoInitializeIrpPriv.c)
 *     IoInitializeIrp @ 0x14043ECB0 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x140B96704 (VfIoInitializeIrp.c)
 */

void __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  if ( !VfIoDisabled )
    VfIoInitializeIrp(a1, a4, 0);
}
