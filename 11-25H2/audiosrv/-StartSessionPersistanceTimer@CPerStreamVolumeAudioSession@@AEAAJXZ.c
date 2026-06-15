/*
 * XREFs of ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001DE30
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x18001E0F0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800821C0 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C3F60 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800C41A0 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001CE00 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x1800A370C (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2f71773eb55b8c5eae8b38deeb9c8e3a__0_ @ 0x1800C1DF8 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_2f71773eb55b8c5eae8b38de.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[64]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+88h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 920) || !*((_QWORD *)this + 116) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 936);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 936));
  v11 = v2;
  if ( *((_QWORD *)this + 123)
    || (GetSerialWorkQueue(),
        v3 = wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(&v12, this),
        v4 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_2f71773eb55b8c5eae8b38deeb9c8e3a__0_(
               v9,
               v3),
        v6 = CSerialWorkQueue::QueueRecurringItem(v5, 0x1388u, v5, v4, (char *)this + 984),
        v7 = v6,
        v6 >= 0) )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10A8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v6);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
