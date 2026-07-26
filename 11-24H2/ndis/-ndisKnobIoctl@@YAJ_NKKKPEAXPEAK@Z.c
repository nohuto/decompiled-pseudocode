/*
 * XREFs of ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x140139484
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140149100 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 */

__int64 __fastcall ndisKnobIoctl(
        bool a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  return KnobNamespace::Ioctl(a1, a2, a3, a4, a5, a5, a6);
}
