/*
 * XREFs of ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001F798
 * Callers:
 *     ?UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ @ 0x18001F280 (-UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ.c)
 *     ?BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x18001F6F0 (-BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x18041D740 (-BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180424A10 (-UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // ecx
  _DWORD v5[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  _DWORD *v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  v2 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = *a1;
    v13 = 0;
    EventDescriptor.Keyword = 0LL;
    v11 = v5;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v2 + 1);
    v5[0] = v3;
    v12 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v8 = &unk_1807F7A56;
    UserData.Reserved = 2;
    v9 = 39;
    v10 = 1;
    v5[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v2 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v2;
}
