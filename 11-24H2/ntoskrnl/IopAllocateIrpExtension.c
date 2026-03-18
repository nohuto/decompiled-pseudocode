/*
 * XREFs of IopAllocateIrpExtension @ 0x140375A80
 * Callers:
 *     IoPropagateIrpExtensionEx @ 0x1403756E0 (IoPropagateIrpExtensionEx.c)
 *     IoSetFsTrackOffsetState @ 0x1403759C0 (IoSetFsTrackOffsetState.c)
 *     IopSetCopyInformationExtension @ 0x140375A3C (IopSetCopyInformationExtension.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140401030 (IopAllocateAndPopulateWriteIrp.c)
 *     IopPerfCallDriver @ 0x14049F664 (IopPerfCallDriver.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140597410 (IoClearAdapterCryptoEngineExtension.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x1405974E0 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140597580 (IoSetFsZeroingOffsetRequired.c)
 *     ViGetContextPointer @ 0x140B848F8 (ViGetContextPointer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateIrpExtension(__int64 a1, int a2)
{
  __int64 result; // rax
  char v3; // di
  char v5; // cl

  result = *(_QWORD *)(a1 + 200);
  v3 = a2;
  if ( result )
  {
    if ( *(char *)(a1 + 71) >= 0 )
    {
      *(_WORD *)(result + 2) |= 1 << a2;
      return result;
    }
    if ( a2 != 2 )
    {
      result = ExAllocatePool2(0x40uLL);
      if ( result )
      {
        *(_WORD *)(result + 2) = (1 << (v3 & 0xF)) | 4;
        *(_DWORD *)(result + 4) = *(_DWORD *)(a1 + 200);
        v5 = *(_BYTE *)(a1 + 71);
        *(_QWORD *)(a1 + 200) = result;
        *(_BYTE *)(a1 + 71) = v5 & 0x3F | 0x40;
        *(_WORD *)result |= 1u;
      }
      return result;
    }
    return a1 + 196;
  }
  if ( a2 == 2 )
  {
    *(_BYTE *)(a1 + 71) |= 0x80u;
    return a1 + 196;
  }
  result = ExAllocatePool2(0x40uLL);
  if ( result )
  {
    *(_WORD *)(result + 2) = 1 << v3;
    *(_BYTE *)(a1 + 71) |= 0x40u;
    *(_QWORD *)(a1 + 200) = result;
    *(_WORD *)result |= 1u;
  }
  return result;
}
