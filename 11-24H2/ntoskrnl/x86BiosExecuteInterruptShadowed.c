/*
 * XREFs of x86BiosExecuteInterruptShadowed @ 0x140543D38
 * Callers:
 *     x86BiosCall @ 0x1405399B0 (x86BiosCall.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     XmEmulateInterrupt @ 0x14055C6A0 (XmEmulateInterrupt.c)
 */

__int64 __fastcall x86BiosExecuteInterruptShadowed(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  if ( !x86BiosInitialized )
    return 4LL;
  if ( HalpIoMemoryBase )
    x86BiosIoMemory = (__int64)HalpIoMemoryBase;
  if ( HalpFrameBufferBase )
    x86BiosFrameBuffer = HalpFrameBufferBase;
  v3 = XmEmulateInterrupt(a1, a2, HalpIoMemoryBase);
  v4 = v3;
  if ( v3 != 1 )
    DbgPrint("HAL: Interrupt emulation failed, status %lx\n", v3);
  return v4;
}
