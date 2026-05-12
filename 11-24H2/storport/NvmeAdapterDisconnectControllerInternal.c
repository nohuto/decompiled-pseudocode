/*
 * XREFs of NvmeAdapterDisconnectControllerInternal @ 0x1400CF800
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 * Callees:
 *     McTemplateK0qjzsh_EtwWriteTransfer @ 0x1400CBD40 (McTemplateK0qjzsh_EtwWriteTransfer.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 */

__int64 __fastcall NvmeAdapterDisconnectControllerInternal(__int64 a1, __int64 a2, const char *a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a2;
  if ( (byte_14017146A & 2) != 0 )
    McTemplateK0qjzsh_EtwWriteTransfer(
      a1,
      &EventNVMeoFDisconnectController,
      (__int64)a3,
      *(_DWORD *)(a1 + 56),
      a1 + 1032,
      *(const wchar_t **)(a1 + 1016),
      a3,
      *(_WORD *)(a2 + 4));
  NvmeAdapterStopFabricNvmeControllerOperations(v5, 0LL);
  NvmeAdapterCleanupFabricNvmeController(v5);
  v6 = *(_QWORD *)(v5 + 1664);
  if ( v6 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 16));
    *(_QWORD *)(v5 + 1664) = 0LL;
    v5 = v8;
  }
  result = *(_QWORD *)(v5 + 1672);
  if ( result )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 16));
    *(_QWORD *)(v5 + 1672) = 0LL;
  }
  if ( a4 )
    return NvmeAdapterDeleteNvmeController(&v8);
  return result;
}
