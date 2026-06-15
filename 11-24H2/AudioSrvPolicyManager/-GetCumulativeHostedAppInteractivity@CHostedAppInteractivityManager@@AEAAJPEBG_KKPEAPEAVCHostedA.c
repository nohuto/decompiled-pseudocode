/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800032A4
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000277C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180002F00 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180018D34 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001F3C4 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18003A2CC (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct CHostedAppInteractivity **a5)
{
  int v6; // ebx
  _QWORD *v7; // rcx
  CHostedAppInteractivity *v8; // rdx
  CHostedAppInteractivity *v9; // rcx
  __int64 result; // rax
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  CHostedAppInteractivity *v13; // [rsp+20h] [rbp-18h] BYREF
  ATL::CAtlException *v14; // [rsp+28h] [rbp-10h] BYREF
  int v15; // [rsp+40h] [rbp+8h]

  v6 = 0;
  v13 = 0LL;
  v7 = (_QWORD *)qword_180064A48;
  while ( v7 )
  {
    v8 = (CHostedAppInteractivity *)v7[2];
    v7 = (_QWORD *)*v7;
    v13 = v8;
    if ( *((_DWORD *)v8 + 2) == a4 && *((_QWORD *)v8 + 2) == a3 )
      goto LABEL_9;
  }
  v6 = CHostedAppInteractivity::CreateInstance(a2, a3, a4, &v13);
  if ( v6 < 0 )
    goto LABEL_10;
  try
  {
    v6 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      &qword_180064A48,
      &v13);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v8 = (CHostedAppInteractivity *)&v12;
    v11 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v11;
    v6 = *(_DWORD *)v11;
    if ( v15 >= 0 )
      goto LABEL_9;
LABEL_10:
    v9 = v13;
LABEL_11:
    if ( v9 )
      CHostedAppInteractivity::`scalar deleting destructor'(v9, (unsigned int)v8);
    if ( v6 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17LL,
          &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
          (unsigned int)v6);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 457, v6);
    }
    result = (unsigned int)v6;
  }
LABEL_9:
  *a5 = v13;
  v9 = 0LL;
  goto LABEL_11;
}
