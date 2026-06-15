/*
 * XREFs of ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034710
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140032CF4 (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140033590 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140033B34 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140033CF8 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCAPOProcessingHost@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAPOProcessingHost@@@12@XZ @ 0x140034B28 (--$Make@VCAPOProcessingHost@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCAPOProcessingHost@@@12@X.c)
 *     atexit @ 0x140059194 (atexit.c)
 *     _Init_thread_footer @ 0x140059338 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400593A0 (_Init_thread_header.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAPOProcessingHostInstance(struct IAPOProcessingHost **a1)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( dword_1400C5818 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_1400C5818);
    if ( dword_1400C5818 == -1 )
    {
      v3 = (__int64 *)Microsoft::WRL::Details::Make<CAPOProcessingHost,>(&v7);
      v4 = *v3;
      *v3 = 0LL;
      qword_1400C5820 = v4;
      v5 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      atexit(GetAPOProcessingHostInstance_::_2_::_dynamic_atexit_destructor_for__pAPOProcessingHost__);
      Init_thread_footer(&dword_1400C5818);
    }
  }
  if ( qword_1400C5820 )
  {
    *a1 = (struct IAPOProcessingHost *)qword_1400C5820;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1400C5820 + 8LL))(qword_1400C5820);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
