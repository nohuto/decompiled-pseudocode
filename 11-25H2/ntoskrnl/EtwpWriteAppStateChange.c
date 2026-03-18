/*
 * XREFs of EtwpWriteAppStateChange @ 0x1409209CC
 * Callers:
 *     EtwTraceAppStateChange @ 0x14091FF00 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x140920FCC (EtwTraceProcess.c)
 * Callees:
 *     EtwWriteTransfer @ 0x14041EDF0 (EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall EtwpWriteAppStateChange(__int64 a1)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v4; // [rsp+58h] [rbp-28h]
  int v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+64h] [rbp-1Ch]
  __int64 v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_140E09010 > 5
    && (qword_140E09020 & 0x200000000001LL) != 0
    && (qword_140E09028 & 0x200000000001LL) == qword_140E09028 )
  {
    v9 = 0;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E09018;
    v7 = a1;
    EventDescriptor.Keyword = 0x200000000001LL;
    v8 = 98;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09018;
    v4 = word_140050F42;
    UserData.Reserved = 2;
    v5 = 319;
    v6 = 1;
    EtwWriteTransfer(qword_140E09030, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
