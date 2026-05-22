/*
 * XREFs of ?EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z @ 0x1801C6070
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180019040 (-clear@-$_Hash@V-$_Umap_traits@KGV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$allo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchInfoAdapter::EndCurrentSession(TouchInfoAdapter *this)
{
  char *v1; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = (char *)this + 112;
  *((_WORD *)this + 57) |= 4u;
  v3 = 0LL;
  if ( *((_BYTE *)this + 135) )
  {
    do
    {
      v4 = 56LL * (unsigned int)v3;
      v3 = (unsigned int)(v3 + 1);
      *(_WORD *)&v1[v4 + 26] = (v1[v4 + 26] & 3) != 0 ? 4 : 0;
    }
    while ( (unsigned int)v3 < (unsigned __int8)v1[23] );
  }
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v1, v3);
  ++*((_DWORD *)this + 26);
  *((_BYTE *)this + 696) = 0;
  *((_WORD *)this + 54) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::clear((unsigned __int64 *)this + 5);
  return 0LL;
}
