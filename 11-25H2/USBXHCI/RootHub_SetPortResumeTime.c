/*
 * XREFs of RootHub_SetPortResumeTime @ 0x14004A0F4
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003BBF8 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x140008750 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 */

__int64 __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, __int16 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbx

  v3 = a2 - 1;
  v6 = *(_QWORD *)(a1 + 48) + 120LL * (unsigned int)(a2 - 1);
  RootHub_AcquireReadModifyWriteLock(a1, a2 - 1);
  ++*(_DWORD *)(v6 + 48);
  *(_WORD *)(v6 + 52) = a3;
  return RootHub_ReleaseReadModifyWriteLock(a1, v3);
}
