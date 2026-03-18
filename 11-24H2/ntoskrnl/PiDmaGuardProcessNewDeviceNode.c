/*
 * XREFs of PiDmaGuardProcessNewDeviceNode @ 0x1409C455C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PipDmgInitializeIommuExtension @ 0x140731D88 (PipDmgInitializeIommuExtension.c)
 *     PiIommuPutInterface @ 0x14073601C (PiIommuPutInterface.c)
 *     PipDmgDestroyIommuExtension @ 0x1409C45C8 (PipDmgDestroyIommuExtension.c)
 *     PiIommuGetInterface @ 0x1409C45FC (PiIommuGetInterface.c)
 */

__int64 __fastcall PiDmaGuardProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v7[88]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v7, 0, 0x50uLL);
  PipDmgDestroyIommuExtension(BugCheckParameter2);
  v2 = 0;
  if ( (int)PiIommuGetInterface(*(_QWORD *)(BugCheckParameter2 + 32)) >= 0 )
  {
    v2 = PipDmgInitializeIommuExtension(BugCheckParameter2, (__int64)v7);
    PiIommuPutInterface((__int64)v7, v4, v5, v6);
  }
  return v2;
}
