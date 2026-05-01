/*
 * XREFs of ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x180023AFC
 * Callers:
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1800B30D4 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x1800B33F0 (-UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x180207D6C (_lambda_a7f15287e5878abd1220aaf01e051b7a_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800252B8 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
        const WCHAR **a1,
        const WCHAR **a2,
        _DWORD *a3,
        char *a4,
        int *a5,
        char *a6)
{
  __int64 v10; // rax
  __int64 v11; // r10
  const WCHAR *v12; // r8
  const WCHAR *v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  char v20; // [rsp+38h] [rbp-69h] BYREF
  char v21; // [rsp+39h] [rbp-68h] BYREF
  int v22; // [rsp+3Ch] [rbp-65h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  void *v26; // [rsp+68h] [rbp-39h]
  int v27; // [rsp+70h] [rbp-31h]
  int v28; // [rsp+74h] [rbp-2Dh]
  const WCHAR *v29; // [rsp+78h] [rbp-29h]
  int v30; // [rsp+80h] [rbp-21h]
  int v31; // [rsp+84h] [rbp-1Dh]
  const WCHAR *v32; // [rsp+88h] [rbp-19h]
  int v33; // [rsp+90h] [rbp-11h]
  int v34; // [rsp+94h] [rbp-Dh]
  _DWORD *v35; // [rsp+98h] [rbp-9h]
  __int64 v36; // [rsp+A0h] [rbp-1h]
  char *v37; // [rsp+A8h] [rbp+7h]
  __int64 v38; // [rsp+B0h] [rbp+Fh]
  int *v39; // [rsp+B8h] [rbp+17h]
  __int64 v40; // [rsp+C0h] [rbp+1Fh]
  char *v41; // [rsp+C8h] [rbp+27h]
  __int64 v42; // [rsp+D0h] [rbp+2Fh]

  v10 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
          a1,
          _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v11 = *(_QWORD *)(v10 + 8);
  if ( *(_DWORD *)v11 > 5u && (*(_QWORD *)(v11 + 16) & 0x200000000000LL) != 0 )
  {
    v10 = *(_QWORD *)(v11 + 24) & 0x200000000000LL;
    if ( v10 == *(_QWORD *)(v11 + 24) )
    {
      v12 = *a2;
      v13 = *a1;
      v40 = 4LL;
      v20 = *a6;
      v36 = 4LL;
      v14 = *a5;
      v21 = *a4;
      v23[0] = *a3;
      v41 = &v20;
      v39 = &v22;
      v37 = &v21;
      v22 = v14;
      v35 = v23;
      v15 = -1LL;
      v42 = 1LL;
      v38 = 1LL;
      if ( v12 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( v12[v16] );
        v17 = 2 * v16 + 2;
      }
      else
      {
        v12 = &pvData;
        v17 = 2;
      }
      v32 = v12;
      v33 = v17;
      v34 = 0;
      if ( v13 )
      {
        do
          ++v15;
        while ( v13[v15] );
        v18 = 2 * v15 + 2;
      }
      else
      {
        v13 = &pvData;
        v18 = 2;
      }
      v30 = v18;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v11 + 8);
      v29 = v13;
      v31 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v26 = &unk_18081D5D9;
      UserData.Reserved = 2;
      v27 = 154;
      v28 = 1;
      v23[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v10) = EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
  }
  return v10;
}
