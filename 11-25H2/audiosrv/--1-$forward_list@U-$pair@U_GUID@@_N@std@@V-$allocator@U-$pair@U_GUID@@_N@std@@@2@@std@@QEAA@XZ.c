/*
 * XREFs of ??1?$forward_list@U?$pair@U_GUID@@_N@std@@V?$allocator@U?$pair@U_GUID@@_N@std@@@2@@std@@QEAA@XZ @ 0x180086050
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<std::pair<_GUID,bool>>::~forward_list<std::pair<_GUID,bool>>(char **a1)
{
  char *v1; // rax
  char *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = *(char **)v1;
      std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x20);
      v1 = v2;
    }
    while ( v2 );
  }
}
