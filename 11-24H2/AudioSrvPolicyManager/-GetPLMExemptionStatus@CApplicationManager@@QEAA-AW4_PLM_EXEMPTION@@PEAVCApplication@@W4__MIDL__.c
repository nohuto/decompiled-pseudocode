/*
 * XREFs of ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CF20
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D120 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D260 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012580 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetPLMExemptionStatus(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  int v6; // ebx
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r14d
  _QWORD *v14; // rdx
  __int64 v15; // r8

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *(_DWORD *)(a2 + 640) )
  {
    v7 = *(_DWORD *)(a2 + 644);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
    v6 = 4;
    if ( *(_DWORD *)(a2 + 612) )
    {
      v6 = *(_DWORD *)(a2 + 616);
    }
    else
    {
      v9 = *(_QWORD **)(a2 + 72);
      while ( v9 )
      {
        v10 = v9[2];
        v9 = (_QWORD *)*v9;
        if ( !*(_DWORD *)(v10 + 416) || *(_QWORD *)(v10 + 360) )
        {
          v11 = *(_DWORD *)(v10 + 480);
          v12 = v11 ? *(_DWORD *)(v10 + 484) : *(_DWORD *)(v10 + 312);
          if ( v12 < v6 )
          {
            if ( v11 )
              v6 = *(_DWORD *)(v10 + 484);
            else
              v6 = *(_DWORD *)(v10 + 312);
          }
        }
      }
    }
    if ( a2 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
    if ( dword_1800534C0[v6] && (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)a2) )
      goto LABEL_28;
    v7 = 1;
    if ( a3 )
    {
      if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable((CApplication *)a2)
        && !(unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)a2) )
      {
        goto LABEL_28;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
      v13 = 0;
      v14 = *(_QWORD **)(a2 + 72);
      while ( v14 )
      {
        v15 = v14[2];
        v14 = (_QWORD *)*v14;
        if ( !*(_DWORD *)(v15 + 416) && *(_DWORD *)(v15 + 440) )
        {
          v13 = 1;
          break;
        }
      }
      if ( a2 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
      if ( v13 )
LABEL_28:
        v7 = 2;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v7;
}
