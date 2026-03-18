/*
 * XREFs of ?WakeMit@Win32k@InputTraceLogging@@SAXK@Z @ 0x1400EC09C
 * Callers:
 *     HandleMITWakeSignal @ 0x1400EFF98 (HandleMITWakeSignal.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Win32k::WakeMit(int a1)
{
  int v1; // ecx
  const char *v2; // rcx
  __int64 v3; // rax
  int v4; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+64h] [rbp-1Ch]
  const char *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 2) != 0 && (qword_14029AE48 & 2) == qword_14029AE48 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v4 = v1 - 1;
      if ( v4 )
      {
        if ( v4 == 2 )
          v2 = "MouseInterceptCallout";
        else
          v2 = "UNKNOWN";
      }
      else
      {
        v2 = "InputSinkFromPoint";
      }
    }
    else
    {
      v2 = "Mouse";
    }
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    v12 = 0;
    v10 = v2;
    v11 = v3 + 1;
    UserData.Ptr = (ULONGLONG)off_14029AE38;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 2LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029AE38;
    v7 = &unk_14027DE83;
    UserData.Reserved = 2;
    v8 = 31;
    v9 = 1;
    EtwWriteTransfer(qword_14029AE50, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
