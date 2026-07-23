/*
 * XREFs of PiDmaGuardProcessNewDeviceNode @ 0x140982310
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PipDmgInitializeIommuExtension @ 0x14072FD98 (PipDmgInitializeIommuExtension.c)
 *     PiIommuPutInterface @ 0x140733F4C (PiIommuPutInterface.c)
 *     PipDmgDestroyIommuExtension @ 0x14098237C (PipDmgDestroyIommuExtension.c)
 *     PiIommuGetInterface @ 0x1409823B0 (PiIommuGetInterface.c)
 */

__int64 __fastcall PiDmaGuardProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v5, 0, 0x50uLL);
  PipDmgDestroyIommuExtension(BugCheckParameter2);
  v2 = 0;
  if ( (int)PiIommuGetInterface(*(_QWORD *)(BugCheckParameter2 + 32)) >= 0 )
  {
    v2 = PipDmgInitializeIommuExtension(BugCheckParameter2, (__int64)v5);
    PiIommuPutInterface((__int64)v5, v4);
  }
  return v2;
}
