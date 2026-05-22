/*
 * XREFs of ??0?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1800A4440
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800A4F20 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@.c)
 * Callees:
 *     ??0test_state@tip2@@QEAA@XZ @ 0x1800A467C (--0test_state@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-30h]

  *(_QWORD *)&v3 = 0xC10003611D37LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Devices::Lights::Internal::AmbientManager *,Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs *>::`vftable';
  *(_QWORD *)(a1 + 8) = a1;
  *((_QWORD *)&v3 + 1) = "ISMSessionMonitorCreationTipTest";
  tip2::test_state::test_state((tip2::test_state *)(a1 + 16));
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 40) = 1uLL;
  *(_OWORD *)(a1 + 56) = 0uLL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  *(_WORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1;
  return result;
}
