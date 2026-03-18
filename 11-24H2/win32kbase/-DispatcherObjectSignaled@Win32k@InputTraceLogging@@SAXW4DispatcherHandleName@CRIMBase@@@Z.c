/*
 * XREFs of ?DispatcherObjectSignaled@Win32k@InputTraceLogging@@SAXW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E21C4
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB910 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1400E22EC (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void InputTraceLogging::Win32k::DispatcherObjectSignaled()
{
  _BYTE *v0; // rax
  ULONGLONG v1; // r8
  __int64 v2; // rcx
  int v3; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  _BYTE *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 2) != 0 && (qword_14029AE48 & 2) == qword_14029AE48 )
  {
    v0 = (_BYTE *)InputTraceLogging::DispatcherHandleNameToString();
    if ( v0 )
    {
      v2 = -1LL;
      do
        ++v2;
      while ( v0[v2] );
      v3 = v2 + 1;
    }
    else
    {
      v0 = &unk_14025D828;
      v3 = v1 - 1;
    }
    v11 = 0;
    v9 = v0;
    v10 = v3;
    UserData.Ptr = (ULONGLONG)off_14029AE38;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = v1;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029AE38;
    v6 = &unk_14027D13B;
    UserData.Reserved = v1;
    v8 = v1 - 1;
    v7 = 48;
    EtwWriteTransfer(qword_14029AE50, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
