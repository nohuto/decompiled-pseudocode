/*
 * XREFs of ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140019168
 * Callers:
 *     ??$emplace_front@AEAPEAVCAPOProcessingHostObject@@@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCAPOProcessingHostObject@@@Z @ 0x140018D28 (--$emplace_front@AEAPEAVCAPOProcessingHostObject@@@-$forward_list@V-$com_ptr_t@VCAPOProcessingHo.c)
 *     ??$emplace@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140018F34 (--$emplace@AEAPEAUIAudioProcessingObject@@AEAV-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_return.c)
 *     ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140028F50 (-OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?NewNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@PEAV312@1@Z @ 0x14002921C (-NewNode@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140045DD4 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ?RemoveHead@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAA?AV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1400561D4 (-RemoveHead@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x14005DDBC (-RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObj.c)
 *     ?CreateExclusiveModeStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006DFA0 (-CreateExclusiveModeStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUD.c)
 *     ?DestroyExclusiveModeStream@CStreamGroup@@UEAAJ_K@Z @ 0x14006E220 (-DestroyExclusiveModeStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z @ 0x14006E8C0 (-DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
