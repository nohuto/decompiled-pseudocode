/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18000B440
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000AB30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000B6A0 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000B7E4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180014E54 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180017BC0 (-OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x18001C60C (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x18003CD58 (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        CHostedAppInteractivity *a3,
        unsigned int a4,
        int a5)
{
  int v8; // r12d
  int result; // eax
  int CumulativeHostedAppInteractivity; // ebx
  int v11; // r9d
  int v12; // ecx
  const struct _tlgProvider_t *v13; // rax
  int v14; // r8d
  int v15; // r9d
  CHostedAppInteractivityManager *v16; // rcx
  struct CHostedAppInteractivity *v17; // r13
  CHostedAppInteractivityManager *v18; // rcx
  int v19; // r12d
  int v20[2]; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+48h] [rbp-18h] BYREF
  CHostedAppInteractivity *v22[2]; // [rsp+50h] [rbp-10h] BYREF

  v22[0] = 0LL;
  v20[0] = 0;
  v8 = 0;
  v21 = 0;
  result = CPickerHostContext::GetHostedAppInteractivity(a1, a2, (unsigned __int64)a3, a4, v22);
  CumulativeHostedAppInteractivity = result;
  if ( result < 0 )
    goto LABEL_21;
  if ( a5 == 1 )
  {
    v12 = *((_DWORD *)v22[0] + 3);
    *((_DWORD *)v22[0] + 3) = 0;
    v11 = v12 != 0;
  }
  else
  {
    if ( (unsigned int)(a5 - 2) > 1 )
      return result;
    CHostedAppInteractivity::OnInteractivityNotification(v22[0], a5 == 2, v20, &v21);
    v11 = v20[0];
    v8 = v21;
  }
  if ( v11 )
  {
    v13 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v13 > 4u )
    {
      v21 = a5 == 2;
      v22[0] = a3;
      *(_QWORD *)v20 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (_DWORD)v13,
        (unsigned int)&unk_18005AC7D,
        v14,
        v15,
        (__int64)v20,
        (__int64)v22,
        (__int64)&v21);
    }
    v22[0] = 0LL;
    v20[0] = 0;
    v21 = 0;
    EnterCriticalSection(&CriticalSection);
    v22[1] = (CHostedAppInteractivity *)&CriticalSection;
    CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                         v16,
                                         a2,
                                         (unsigned __int64)a3,
                                         a4,
                                         v22);
    if ( CumulativeHostedAppInteractivity < 0
      || (v17 = v22[0], CHostedAppInteractivity::OnInteractivityNotification(v22[0], v8, v20, &v21), v19 = v21, v20[0])
      && (CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                               v18,
                                               a2,
                                               (unsigned __int64)a3,
                                               a4,
                                               v21),
          CumulativeHostedAppInteractivity < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          16LL,
          &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
          (unsigned int)CumulativeHostedAppInteractivity);
      }
      AudPolicyLogError(
        "CHostedAppInteractivityManager::AddHostedAppInteractivityNotification",
        411,
        CumulativeHostedAppInteractivity);
    }
    else if ( !v19 )
    {
      CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v18, v17);
    }
    LeaveCriticalSection(&CriticalSection);
    if ( CumulativeHostedAppInteractivity < 0 )
    {
LABEL_21:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
          (unsigned int)CumulativeHostedAppInteractivity);
      }
      AudPolicyLogError(
        "CPickerHostContext::AddHostedAppInteractivityNotification",
        205,
        CumulativeHostedAppInteractivity);
    }
  }
  return CumulativeHostedAppInteractivity;
}
