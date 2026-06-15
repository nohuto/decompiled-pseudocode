/*
 * XREFs of ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180004070
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180004230 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180004650 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 * Callees:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180005980 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180005BA0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::RecalculateVolume(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *(_QWORD **)(a1 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( !*(_DWORD *)(v6 + 416) )
      CProcess::RecalculateVolume(v6, a2);
  }
  CApplication::NotifyVolumePolicyChange((CApplication *)a1);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
