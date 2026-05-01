/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801FBE84
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C2930 (--1-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compare@PEAUHWND__@@U-$has.c)
 *     ??1?$list@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@2@@std@@QEAA@XZ @ 0x1801FBE58 (--1-$list@U-$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@V-$allocator@U-.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1803486C4 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18057D680 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18065E8D8 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compare@PEAUH.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 );
  }
}
