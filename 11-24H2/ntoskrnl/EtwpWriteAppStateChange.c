/*
 * XREFs of EtwpWriteAppStateChange @ 0x1408F1C20
 * Callers:
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwpWriteAppStateChange(__int64 a1)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v4; // [rsp+58h] [rbp-28h]
  int v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+64h] [rbp-1Ch]
  __int64 v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_140E09160 > 5
    && (qword_140E09170 & 0x200000000001LL) != 0
    && (qword_140E09178 & 0x200000000001LL) == qword_140E09178 )
  {
    v9 = 0;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E09168;
    v7 = a1;
    EventDescriptor.Keyword = 0x200000000001LL;
    v8 = 98;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = (unsigned __int16)*off_140E09168;
    v4 = &unk_1400535D0;
    UserData.Reserved = 2;
    v5 = 319;
    v6 = 1;
    EtwWriteTransfer(qword_140E09180, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
