/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180085630
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     WPP_SF_qdg @ 0x1800736B8 (WPP_SF_qdg.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevel(CVolumeControlBase *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // esi
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  int v9; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-35h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h]
  unsigned __int16 *v13; // [rsp+50h] [rbp-19h]
  int v14; // [rsp+58h] [rbp-11h]
  int v15; // [rsp+5Ch] [rbp-Dh]
  void *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  const char *v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  _DWORD *v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  int *v23; // [rsp+90h] [rbp+27h]
  __int64 v24; // [rsp+98h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v5 = -2147467261;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( a2 )
  {
    v6 = *((unsigned int *)this + 28);
    if ( v6 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    *a2 = fmaxf(
            fminf(
              *(float *)(*((_QWORD *)this + 10) + (v6 << 6) + 4),
              *(float *)(*((_QWORD *)this + 10) + (v6 << 6) + 12)),
            *(float *)(*((_QWORD *)this + 10) + (v6 << 6) + 8));
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
        this,
        *((_DWORD *)this + 28),
        *a2);
    }
    v5 = 0;
  }
  else
  {
    v7 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v7 > 4u )
    {
      v9 = -2147467261;
      v12 = 0LL;
      v23 = &v9;
      v10[0] = 507;
      v21 = v10;
      v24 = 4LL;
      v19 = "CVolumeControlBase::GetMasterVolumeLevel";
      v11[1] = 4;
      v13 = *(unsigned __int16 **)(v7 + 8);
      v22 = 4LL;
      v20 = 41LL;
      v11[0] = 184549376;
      v14 = *v13;
      v16 = &unk_1801AB1CE;
      v15 = 2;
      v17 = 35;
      v18 = 1;
      v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v7 + 32), v11, 0LL, 0LL);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
