/*
 * XREFs of ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012160
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000BDB0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18000CA20 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001E320 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180033C10 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800356A8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18003B680 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18003BF48 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

__int64 __fastcall CProcess::RegisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  CApplicationManager *v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int Application; // ebx
  struct CApplication *v8; // r15
  int v9; // [rsp+78h] [rbp+10h] BYREF
  struct CApplication *v10; // [rsp+80h] [rbp+18h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  Application = 0;
  v10 = 0LL;
  v9 = 0;
  EnterCriticalSection(v6);
  if ( !*((_QWORD *)this + 28) )
  {
    Application = CApplicationManager::GetApplication(
                    v5,
                    *((const unsigned __int16 **)this + 22),
                    *((_QWORD *)this + 26),
                    *((_DWORD *)this + 41),
                    &v10,
                    1,
                    &v9);
    if ( Application < 0 || (v8 = v10, Application = CApplication::LinkProcess(v10, this), Application < 0) )
    {
      if ( v9 )
        CApplicationManager::RemoveApplication(v5, &v10);
      if ( Application < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            16LL,
            &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
            (unsigned int)Application);
        }
        AudPolicyLogError("CApplicationManager::Register", 697, Application);
      }
    }
    else if ( TsSessionIdIsMuted(*((_DWORD *)this + 41)) && !*((_DWORD *)v8 + 164) )
    {
      CApplicationManager::SilenceAndRevokePLMExemption(v5, v8);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( Application < 0 )
    goto LABEL_22;
  Application = CProcess::AddSession(this, a2);
  if ( Application < 0 )
  {
    CApplicationManager::Unregister(v5, this);
LABEL_22:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
        (unsigned int)Application);
    }
    AudPolicyLogError("CApplicationManager::RegisterSession", 445, Application);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)Application;
}
