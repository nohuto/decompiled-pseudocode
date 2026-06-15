/*
 * XREFs of ??0?$list@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x140016E58
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@1@AEBV?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x140016DEC (--0-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostObject@@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>::list<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
