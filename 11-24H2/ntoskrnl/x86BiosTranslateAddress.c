/*
 * XREFs of x86BiosTranslateAddress @ 0x140469260
 * Callers:
 *     x86BiosReadMemory @ 0x140468070 (x86BiosReadMemory.c)
 *     XmPopStack @ 0x140468128 (XmPopStack.c)
 *     XmGetStringAddressRange @ 0x140468728 (XmGetStringAddressRange.c)
 *     XmPushStack @ 0x140468C28 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x140468D7C (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140469218 (XmGetCodeByte.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     x86BiosWriteMemory @ 0x140546880 (x86BiosWriteMemory.c)
 *     XmEmulateInterrupt @ 0x14055EA70 (XmEmulateInterrupt.c)
 *     XmInitializeEmulator @ 0x14055EB08 (XmInitializeEmulator.c)
 *     XmGetLongImmediate @ 0x14056C8F0 (XmGetLongImmediate.c)
 *     XmIntOp @ 0x1405767F0 (XmIntOp.c)
 *     XmGetOffsetAddress @ 0x140577894 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405778DC (XmGetStringAddress.c)
 * Callees:
 *     <none>
 */

int *__fastcall x86BiosTranslateAddress(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned int v5; // r8d
  char *v6; // rcx
  unsigned int v7; // r8d

  _mm_lfence();
  v2 = (a2 + 16 * a1) & 0xFFFFF;
  if ( v2 > 0x8FFFF && v2 - 655360 > 0x1FFFF )
    return (int *)(x86BiosIoMemory + v2);
  if ( v2 >= 0xA0000 )
  {
    v4 = x86BiosFrameBuffer;
    v6 = (char *)v2;
    if ( !x86BiosFrameBuffer )
      v4 = x86BiosIoMemory;
    return (int *)&v6[v4];
  }
  v4 = (unsigned __int16)(a2 + 16 * a1);
  v5 = HIWORD(v2);
  if ( !v5 )
  {
    if ( (unsigned int)v4 <= 0x800 )
    {
      v6 = (char *)&x86BiosLowMemory;
      return (int *)&v6[v4];
    }
    goto LABEL_13;
  }
  v7 = v5 - 1;
  if ( !v7 || v7 - 1 >= 2 || (unsigned int)v4 >= x86BiosTransferLength )
  {
LABEL_13:
    x86BiosScratchMemory = 0;
    return &x86BiosScratchMemory;
  }
  return (int *)(x86BiosTransferMemory + v4);
}
