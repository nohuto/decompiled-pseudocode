/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000277C
 * Callers:
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x18001D5F0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 * Callees:
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800032A4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180017CF0 (-OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x18001C73C (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x18003A53C (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  CHostedAppInteractivityManager *v8; // rcx
  int CumulativeHostedAppInteractivity; // ebx
  CHostedAppInteractivityManager *v10; // rcx
  int v11; // edi
  int v13; // [rsp+30h] [rbp-38h] BYREF
  CHostedAppInteractivity *v14[3]; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+74h] [rbp+Ch]

  v16 = HIDWORD(this);
  v14[0] = 0LL;
  v13 = 0;
  v15 = 0;
  EnterCriticalSection(&CriticalSection);
  v14[1] = (CHostedAppInteractivity *)&CriticalSection;
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v8,
                                       a2,
                                       a3,
                                       a4,
                                       v14);
  if ( CumulativeHostedAppInteractivity < 0
    || (CHostedAppInteractivity::OnInteractivityNotification(v14[0], a5, &v13, &v15), v11 = v15, v13)
    && (CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                             v10,
                                             a2,
                                             a3,
                                             a4,
                                             v15),
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
  else if ( !v11 )
  {
    CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v10, v14[0]);
  }
  LeaveCriticalSection(&CriticalSection);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
