/*
 * XREFs of ?UnregisterAPOFromProcessingHost@CAPOProcessingHost@@UEAAXPEAUIAudioProcessingObject@@@Z @ 0x140018410
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase@PEAUIAudioProcessingObject@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KAEBQEAUIAudioProcessingObject@@@Z @ 0x140018470 (--$_Erase@PEAUIAudioProcessingObject@@@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$co.c)
 */

void __fastcall CAPOProcessingHost::UnregisterAPOFromProcessingHost(
        CAPOProcessingHost *this,
        struct IAudioProcessingObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct IAudioProcessingObject *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::_Erase<IAudioProcessingObject *>(
    (char *)this + 184,
    &v4);
  if ( v2 )
    LeaveCriticalSection(v2);
}
