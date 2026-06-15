/*
 * XREFs of ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C730
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x18000C7D0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::RecalculateVolume(__int64 a1, int a2)
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
