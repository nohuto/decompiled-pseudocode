/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001E3D8
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180013B70 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18002B774 (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@PEA.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$5 @ 0x180049BD0 (_CDuckingManager--OnStateChanged_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x10);
}
