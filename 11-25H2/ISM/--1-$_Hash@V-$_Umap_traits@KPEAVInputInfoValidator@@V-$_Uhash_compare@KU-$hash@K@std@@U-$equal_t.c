/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800EE328
 * Callers:
 *     ??1?$unordered_map@KPEAVInputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@@std@@QEAA@XZ @ 0x1800EE5BC (--1-$unordered_map@KPEAVInputInfoValidator@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800EE5F0 (--1Win32kInterop@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>(
        __int64 a1)
{
  char *v2; // rcx
  __int64 v3; // rcx
  char *v4; // rcx
  char *v5; // rbx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 8);
  **(_QWORD **)(v3 + 8) = 0LL;
  v4 = *(char **)v3;
  if ( v4 )
  {
    do
    {
      v5 = *(char **)v4;
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x20);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*(char **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
