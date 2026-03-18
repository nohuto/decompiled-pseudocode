/*
 * XREFs of PopPepUnregisterDevice @ 0x140A74D78
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A74BB4 (PopFxUnregisterDevice.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140315390 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopPepRemoveDevice @ 0x1404C0148 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x1404FACDC (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopPepUnregisterDevice(char *P)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", P);
  v2 = 0;
  PopPepProcessEvent((__int64)P, 0LL, 6LL, 5LL, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(P + 40, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)P);
  PopPepRemoveDevice((__int64 *)P);
  v3 = *((int *)P + 42);
  v4 = 0;
  if ( (_DWORD)v3 != 4 )
    v4 = *(_DWORD *)&P[4 * v3 + 140];
  PopPepUpdateIdleStateRefCount(v4, 0, 0, (volatile signed __int32 *)P + 46);
  if ( *((_DWORD *)P + 45) )
  {
    do
    {
      PopPepUpdateIdleStateRefCount(
        *(_DWORD *)(*(_QWORD *)&P[208 * v2 + 392] + 16LL),
        0,
        0,
        (volatile signed __int32 *)&P[208 * v2 + 384]);
      ++v2;
    }
    while ( v2 < *((_DWORD *)P + 45) );
  }
  ExFreePoolWithTag(P, 0x54706550u);
}
