/*
 * XREFs of ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x1800B07D0
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800AFB9C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800342C0 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B1538 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        bool a5,
        bool a6,
        bool a7)
{
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  const struct _tlgProvider_t *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  const GUID *v16; // r9
  const GUID *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // eax
  bool v22; // [rsp+30h] [rbp-D0h] BYREF
  bool v23; // [rsp+31h] [rbp-CFh] BYREF
  bool v24; // [rsp+32h] [rbp-CEh] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v30; // [rsp+70h] [rbp-90h]
  int v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+7Ch] [rbp-84h]
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  _DWORD *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  const unsigned __int16 *v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  int *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  bool *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  bool *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  bool *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v12 = SingleViewExperienceLogging::Provider(v11);
  v13 = v12;
  if ( *(_DWORD *)v12 > 5u
    && (*((_QWORD *)v12 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v12 + 3) & 0x200000000000LL) == *((_QWORD *)v12 + 3) )
  {
    v22 = a7;
    v23 = a6;
    v24 = a5;
    v25 = a4;
    v27 = 0x1000000LL;
    v26[0] = GetCurrentThreadId();
    v14 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v15 = *((_QWORD *)this + 34);
    v16 = (const GUID *)v14;
    v44 = 4LL;
    v50 = 1LL;
    v49 = &v22;
    v17 = (const GUID *)(v15 + 8);
    v48 = 1LL;
    v47 = &v23;
    v46 = 1LL;
    v45 = &v24;
    v43 = &v25;
    v18 = -1LL;
    if ( a3 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a3[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      a3 = &pvData;
      v20 = 2;
    }
    v40 = a3;
    v41 = v20;
    v42 = 0;
    if ( a2 )
    {
      do
        ++v18;
      while ( a2[v18] );
      v21 = 2 * v18 + 2;
    }
    else
    {
      a2 = &pvData;
      v21 = 2;
    }
    v38 = v21;
    v39 = 0;
    v35 = v26;
    v37 = a2;
    v33 = &v27;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v13 + 1);
    v36 = 4LL;
    v34 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v30 = &unk_18081E338;
    UserData.Reserved = 2;
    v31 = 182;
    v32 = 1;
    v26[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v13 + 4), &EventDescriptor, v17, v16, 0xAu, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
