/*
 * XREFs of ??$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18001F88C
 * Callers:
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001D870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180424F90 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowAdded<unsigned short const *,unsigned int>(
        const WCHAR **a1,
        _DWORD *a2)
{
  const struct _tlgProvider_t *v4; // rax
  const struct _tlgProvider_t *v5; // r10
  const WCHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _DWORD v10[2]; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  const WCHAR *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  _DWORD *v19; // [rsp+80h] [rbp+37h]
  __int64 v20; // [rsp+88h] [rbp+3Fh]

  v4 = ViewManagerInteropLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *a1;
    v10[0] = *a2;
    v19 = v10;
    v20 = 4LL;
    if ( v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      v6 = &pvData;
      v8 = 2;
    }
    v17 = v8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v5 + 1);
    v16 = v6;
    v18 = 0;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v13 = &unk_1807F792F;
    UserData.Reserved = 2;
    v14 = 65;
    v15 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
