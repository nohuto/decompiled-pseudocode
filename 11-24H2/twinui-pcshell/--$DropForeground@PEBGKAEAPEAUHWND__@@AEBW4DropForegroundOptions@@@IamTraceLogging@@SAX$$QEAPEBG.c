/*
 * XREFs of ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x1801BA098
 * Callers:
 *     _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x1801B9FF0 (_lambda_6bdb0a767824ae94d9b9ef25c3406932_--operator().c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032AC4 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
        const WCHAR **a1,
        int *a2,
        __int64 *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  const struct _tlgProvider_t *v9; // r10
  __int64 v10; // r8
  int v11; // edx
  const WCHAR *v12; // rcx
  int v13; // r9d
  __int64 v14; // rax
  int v15; // eax
  int v17; // [rsp+38h] [rbp-49h] BYREF
  _DWORD v18[3]; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v19; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  const WCHAR *v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]
  _DWORD *v28; // [rsp+98h] [rbp+17h]
  __int64 v29; // [rsp+A0h] [rbp+1Fh]
  __int64 *v30; // [rsp+A8h] [rbp+27h]
  __int64 v31; // [rsp+B0h] [rbp+2Fh]
  int *v32; // [rsp+B8h] [rbp+37h]
  __int64 v33; // [rsp+C0h] [rbp+3Fh]

  v8 = CAppManagerLogging::Provider();
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    v10 = *a3;
    v11 = *a2;
    v12 = *a1;
    v13 = *a4;
    v32 = &v17;
    v19 = v10;
    v30 = &v19;
    v18[0] = v11;
    v28 = v18;
    v17 = v13;
    v33 = 4LL;
    v31 = 8LL;
    v29 = 4LL;
    if ( v12 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v12 = &pvData;
      v15 = 2;
    }
    v26 = v15;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v9 + 1);
    v25 = v12;
    v27 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v22 = &unk_1807E3C5A;
    UserData.Reserved = 2;
    v23 = 57;
    v24 = 1;
    v18[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v8;
}
