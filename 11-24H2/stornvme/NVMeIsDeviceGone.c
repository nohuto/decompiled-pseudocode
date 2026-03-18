/*
 * XREFs of NVMeIsDeviceGone @ 0x140017120
 * Callers:
 *     NVMeControllerPreparePLDR @ 0x14001D3BC (NVMeControllerPreparePLDR.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 * Callees:
 *     NVMeReadRegisterUlong64 @ 0x140017158 (NVMeReadRegisterUlong64.c)
 */

char __fastcall NVMeIsDeviceGone(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( NVMeReadRegisterUlong64(a1, *(_QWORD *)(a1 + 176) + 40LL, a3) != -1 )
    return 0;
  *(_DWORD *)(v3 + 24) |= 0x1000000u;
  return 1;
}
