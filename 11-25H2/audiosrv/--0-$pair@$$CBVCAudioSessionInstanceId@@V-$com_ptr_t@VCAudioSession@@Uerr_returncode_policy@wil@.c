/*
 * XREFs of ??0?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@AEBU01@@Z @ 0x18002CC30
 * Callers:
 *     ??$construct@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@AEBU12@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@AEBU31@@Z @ 0x1800A6ADC (--$construct@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uer_ea_1800A6ADC.c)
 *     ?DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C6FD0 (-DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x18002C47C (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionInstanceId *__fastcall std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
        CAudioSessionInstanceId *a1,
        const struct CAudioSessionInstanceId *a2)
{
  __int64 v4; // rcx

  CAudioSessionInstanceId::CAudioSessionInstanceId(a1, a2);
  v4 = *((_QWORD *)a2 + 10);
  *((_QWORD *)a1 + 10) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
