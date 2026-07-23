/*
 * XREFs of PopPepUnregisterDevice @ 0x140A6F098
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A6EB0 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x1404BB678 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x1404F85BC (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopPepUnregisterDevice(char *P)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", P);
  v2 = 0;
  PopPepProcessEvent((__int64)P, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
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
