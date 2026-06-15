/*
 * XREFs of ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D120
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CF20 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000D2E0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180037A04 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CApplication::IsUnrestrictedBackgroundAudioCapable(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebx
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // r8

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v5 + 416) && *(_DWORD *)(v5 + 432) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !v3 )
    return 0LL;
  EnterCriticalSection(v2);
  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v8 )
  {
    v9 = v8[2];
    v8 = (_QWORD *)*v8;
    if ( !*(_DWORD *)(v9 + 416) && *(_DWORD *)(v9 + 436) )
    {
      v7 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v7 )
    return 0LL;
  EnterCriticalSection(v2);
  v10 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v10 )
  {
    v11 = v10[2];
    v10 = (_QWORD *)*v10;
    if ( !*(_DWORD *)(v11 + 416) && *(_DWORD *)(v11 + 500) )
    {
      v7 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7 != 0;
}
