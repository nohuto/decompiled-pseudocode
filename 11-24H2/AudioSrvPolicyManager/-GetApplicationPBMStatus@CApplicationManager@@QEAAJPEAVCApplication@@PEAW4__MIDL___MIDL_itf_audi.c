/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000D2E0
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180033FE4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D120 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D260 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000D520 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000D5F0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012580 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180037A04 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x1800397B4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x180039CC0 (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        struct CApplication *a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a4,
        enum _PLM_EXEMPTION *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned int SoundLevel; // eax
  unsigned int v11; // r15d
  int v12; // r14d
  const wchar_t *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  const wchar_t *v18; // r10
  __int64 v19; // r11

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  SoundLevel = CApplicationManager::GetSoundLevel(this, a2, 0LL);
  v11 = SoundLevel;
  if ( a3 )
    *(_DWORD *)a3 = SoundLevel;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 156) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 157);
    else
      *(_DWORD *)a4 = SoundLevel;
  }
  if ( a5 )
  {
    EnterCriticalSection(v9);
    if ( *((_DWORD *)a2 + 160) )
    {
      v12 = *((_DWORD *)a2 + 161);
    }
    else if ( dword_1800534C0[(int)CApplication::Category(a2)]
           && (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2) )
    {
      v12 = 2;
    }
    else if ( v11
           && (CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
            && !(unsigned int)CApplication::HasBackgroundAudioTask(a2)
            || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2)) )
    {
      v12 = 2;
    }
    else
    {
      v12 = 1;
    }
    if ( v9 )
      LeaveCriticalSection(v9);
    *(_DWORD *)a5 = v12;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v13 = L"(override)";
    if ( !*((_DWORD *)a2 + 160) )
      v13 = L" ";
    if ( a4 )
      SoundLevelToString(*(unsigned int *)a4);
    v14 = SoundLevelToString(v11);
    if ( !*((_DWORD *)a2 + 158) )
      v18 = L" ";
    WPP_SF_SSSSSSS(*(_QWORD *)(v15 + 16), v15, v16, *((_QWORD *)a2 + 3), v14, (__int64)v18, v19, v17, v16, (__int64)v13);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
