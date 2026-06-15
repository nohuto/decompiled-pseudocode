/*
 * XREFs of ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x18001D4C0
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003CBE4 (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000ACF4 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPickerHostContext::RevokeInteractivityFromApps(CPickerHostContext *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  int v3; // eax
  int v4; // edi

  v1 = *(_QWORD **)this;
  while ( v1 )
  {
    v2 = v1[2];
    v1 = (_QWORD *)*v1;
    v3 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = 0;
    if ( v3 )
    {
      v4 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
             this,
             *(const unsigned __int16 **)v2,
             *(_QWORD *)(v2 + 16),
             *(_DWORD *)(v2 + 8),
             0);
      if ( v4 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            14LL,
            &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
            (unsigned int)v4);
        }
        AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 288, v4);
      }
    }
  }
}
