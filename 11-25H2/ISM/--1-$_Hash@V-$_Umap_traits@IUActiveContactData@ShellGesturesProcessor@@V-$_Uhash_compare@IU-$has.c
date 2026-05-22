/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180196D58
 * Callers:
 *     ??1ShellGesturesProcessor@@UEAA@XZ @ 0x180197230 (--1ShellGesturesProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180156D3C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUActiveContactData@ShellGesturesProces.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,ShellGesturesProcessor::ActiveContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>,0>>::~_Hash<std::_Umap_traits<unsigned int,ShellGesturesProcessor::ActiveContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>,0>>(
        __int64 *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((char *)a1[1], (const struct std::nothrow_t *)0x80);
}
