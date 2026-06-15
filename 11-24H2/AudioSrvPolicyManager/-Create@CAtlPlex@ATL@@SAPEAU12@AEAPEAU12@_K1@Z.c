/*
 * XREFs of ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18001E6C8
 * Callers:
 *     ?NewNode@?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAUIAudioAppVolumePolicyChange@@PEAV312@1@Z @ 0x18001E330 (-NewNode@-$CAtlList@PEAUIAudioAppVolumePolicyChange@@V-$CElementTraits@PEAUIAudioAppVolumePolicy.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180032F10 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x18003A484 (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 * Callees:
 *     <none>
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlPlex::Create(
        struct ATL::CAtlPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  struct ATL::CAtlPlex *result; // rax

  v3 = a2;
  if ( a2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a3 )
      return 0LL;
    v3 = a3 * a2;
    if ( ~(a3 * a2) < 8 )
      return 0LL;
  }
  result = (struct ATL::CAtlPlex *)malloc(v3 + 8);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = *a1;
  *a1 = result;
  return result;
}
