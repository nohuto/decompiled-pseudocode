/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E4F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Do_call @ 0x180035160 (std--_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180008220 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180019E40 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x18001A150 (-ClearSmtcSubscriptions@CProcess@@QEAAXXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A3B0 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C4F4 (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     __std_find_trivial_4 @ 0x18001FC10 (__std_find_trivial_4.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180031734 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180031B88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180031CA4 (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180033010 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800338E0 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800339A0 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180034D48 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x180038DA4 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18003F7E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18003FE78 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x1800400EC (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // r14
  struct CApplication *v5; // r13
  DWORD v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  CApplicationManager *v11; // rbx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  CApplication *v15; // rcx
  struct TSSession *v17; // rbx
  __int64 trivial_4; // rdi
  __int64 v19; // rbx
  struct TSSession *v20[13]; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  CApplicationManager *v22; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+10h]
  CApplicationManager *v24; // [rsp+B0h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp+20h]

  v22 = this;
  v3 = g_ApplicationManager;
  v24 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      39LL,
      &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids,
      *((unsigned int *)a2 + 40));
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  v20[1] = (CApplicationManager *)((char *)v3 + 32);
  v5 = (struct CApplication *)*((_QWORD *)a2 + 28);
  LODWORD(v22) = 0;
  CProcess::MarkAsTerminated(a2);
  v23 = *((_DWORD *)a2 + 40);
  v6 = *((_DWORD *)a2 + 41);
  v7 = HIBYTE(v6);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v20[2] = (struct TSSession *)lpCriticalSection;
  v20[0] = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v8 = *(_QWORD *)(qword_180064AB8
                 + 16
                 * (qword_180064AD0 & (0x100000001B3LL
                                     * (v7 ^ (0x100000001B3LL
                                            * (BYTE2(v6) ^ (0x100000001B3LL
                                                          * (BYTE1(v6) ^ (0x100000001B3LL
                                                                        * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL)))))))))
                 + 8);
  if ( v8 == qword_180064AA8 )
  {
LABEL_6:
    v8 = 0LL;
  }
  else
  {
    while ( v6 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == *(_QWORD *)(qword_180064AB8
                           + 16
                           * (qword_180064AD0 & (0x100000001B3LL
                                               * (v7 ^ (0x100000001B3LL
                                                      * (BYTE2(v6) ^ (0x100000001B3LL
                                                                    * (BYTE1(v6) ^ (0x100000001B3LL
                                                                                  * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_6;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  v9 = qword_180064AA8;
  if ( v8 )
    v9 = v8;
  if ( v9 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    v10 = TsSessionCreate(v6, v20);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_16;
    }
    v17 = v20[0];
  }
  else
  {
    v17 = *(struct TSSession **)(v9 + 24);
    LeaveCriticalSection(&stru_180064A78);
  }
  trivial_4 = _std_find_trivial_4(*((_QWORD *)v17 + 123), *((_QWORD *)v17 + 124), v23);
  v19 = *((_QWORD *)v17 + 124);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( trivial_4 != v19 )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), 0, 1.0, (int *)&v22);
    if ( (_DWORD)v22 )
    {
      v11 = v24;
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v24, *((_DWORD *)a2 + 41), 3);
      goto LABEL_17;
    }
  }
LABEL_16:
  v11 = v24;
LABEL_17:
  if ( v5 && TsSessionIsActiveMediaApplication(v5) )
    CApplicationManager::ReevaluateActiveMediaAppStatusForApplication(v11, v5);
  if ( (*((_BYTE *)a2 + 448) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications(a2, 0LL, 0xFFFFFFFFLL);
  if ( *((_DWORD *)a2 + 124) )
  {
    CProcess::ClearSmtcSubscriptions(a2);
    if ( v5 )
      CApplication::OnSmtcSubscriptionChanged(v5);
  }
  if ( (*((_DWORD *)a2 + 112) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications(a2, 0LL, 0xFFFFFFFFLL);
  if ( *((_DWORD *)a2 + 113) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 113) = 0;
  }
  if ( *((_DWORD *)a2 + 114) )
    *((_DWORD *)a2 + 114) = 0;
  *((_DWORD *)a2 + 122) = 0;
  v12 = *((_DWORD *)a2 + 127);
  if ( v12 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 28), -v12);
    *((_DWORD *)a2 + 127) = 0;
  }
  v13 = *((_DWORD *)a2 + 128);
  if ( v13 > 0 )
  {
    CApplication::VoipCallStateChanged(*((CApplication **)a2 + 28), -v13);
    *((_DWORD *)a2 + 128) = 0;
  }
  v14 = *((_DWORD *)a2 + 129);
  if ( v14 > 0 )
  {
    CApplication::DialogSessionStateChanged(*((CApplication **)a2 + 28), -v14);
    *((_DWORD *)a2 + 129) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  EnterCriticalSection(v4);
  v22 = (CApplicationManager *)v4;
  if ( (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v15 = (CApplication *)*((_QWORD *)a2 + 28);
    if ( v15 )
      CApplication::DelinkProcess(v15, a2);
    CApplicationManager::RemoveProcess(v11, a2);
  }
  if ( v4 )
  {
    LeaveCriticalSection(v4);
    LeaveCriticalSection(v4);
  }
  return 0LL;
}
