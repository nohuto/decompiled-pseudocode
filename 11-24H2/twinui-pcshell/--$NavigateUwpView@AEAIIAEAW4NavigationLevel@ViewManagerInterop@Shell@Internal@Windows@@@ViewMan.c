/*
 * XREFs of ??$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAI$$QEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020474
 * Callers:
 *     _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x18001FB28 (_lambda_39a728035cbc11bf105c92e6056dabb4_--operator().c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTelemetry::NavigateUwpView<unsigned int &,unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
        _DWORD *a1,
        int *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v8; // [rsp+38h] [rbp-49h] BYREF
  int v9; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v11; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v14; // [rsp+78h] [rbp-9h]
  int v15; // [rsp+80h] [rbp-1h]
  int v16; // [rsp+84h] [rbp+3h]
  _DWORD *v17; // [rsp+88h] [rbp+7h]
  __int64 v18; // [rsp+90h] [rbp+Fh]
  int *v19; // [rsp+98h] [rbp+17h]
  __int64 v20; // [rsp+A0h] [rbp+1Fh]
  int *v21; // [rsp+A8h] [rbp+27h]
  __int64 v22; // [rsp+B0h] [rbp+2Fh]
  __int64 *v23; // [rsp+B8h] [rbp+37h]
  __int64 v24; // [rsp+C0h] [rbp+3Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v8 = *a3;
    v9 = *a2;
    v10[0] = *a1;
    v23 = &v11;
    v21 = &v8;
    v19 = &v9;
    v17 = v10;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v6 + 1);
    EventDescriptor.Keyword = 0x200000000000LL;
    v11 = 0x1000000LL;
    v24 = 8LL;
    v22 = 4LL;
    v20 = 4LL;
    v18 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v14 = &unk_1807F89A9;
    UserData.Reserved = 2;
    v15 = 78;
    v16 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v6;
}
