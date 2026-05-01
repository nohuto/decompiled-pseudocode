/*
 * XREFs of ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@PEBG@Z @ 0x180087708
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180086980 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032AC4 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800342C0 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180174550 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::StartActivity(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        const WCHAR *a5)
{
  const struct _tlgProvider_t *v9; // rax
  const struct _tlgProvider_t *v10; // rdi
  __int64 v11; // rax
  const WCHAR *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+30h] [rbp-91h] BYREF
  int v18; // [rsp+34h] [rbp-8Dh] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-89h] BYREF
  __int64 v20; // [rsp+40h] [rbp-81h] BYREF
  __int64 v21; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-61h] BYREF
  void *v24; // [rsp+70h] [rbp-51h]
  int v25; // [rsp+78h] [rbp-49h]
  int v26; // [rsp+7Ch] [rbp-45h]
  __int64 *v27; // [rsp+80h] [rbp-41h]
  __int64 v28; // [rsp+88h] [rbp-39h]
  _DWORD *v29; // [rsp+90h] [rbp-31h]
  __int64 v30; // [rsp+98h] [rbp-29h]
  int *v31; // [rsp+A0h] [rbp-21h]
  __int64 v32; // [rsp+A8h] [rbp-19h]
  __int64 *v33; // [rsp+B0h] [rbp-11h]
  __int64 v34; // [rsp+B8h] [rbp-9h]
  int *v35; // [rsp+C0h] [rbp-1h]
  __int64 v36; // [rsp+C8h] [rbp+7h]
  const WCHAR *v37; // [rsp+D0h] [rbp+Fh]
  int v38; // [rsp+D8h] [rbp+17h]
  int v39; // [rsp+DCh] [rbp+1Bh]

  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = CAppManagerLogging::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
  {
    v17 = a4;
    v20 = a3;
    v18 = a2;
    v21 = 0x1000000LL;
    v19[0] = GetCurrentThreadId();
    v11 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v12 = a5;
    v13 = (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL);
    v14 = (const GUID *)v11;
    if ( a5 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a5[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v12 = &pvData;
      v16 = 2;
    }
    v38 = v16;
    v35 = &v17;
    v33 = &v20;
    v31 = &v18;
    v29 = v19;
    v27 = &v21;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v10 + 1);
    v37 = v12;
    v39 = 0;
    v36 = 4LL;
    v34 = 8LL;
    v32 = 4LL;
    v30 = 4LL;
    v28 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v24 = &unk_1807E3A97;
    UserData.Reserved = 2;
    v25 = 106;
    v26 = 1;
    v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v10 + 4), &EventDescriptor, v13, v14, 8u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
