/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x18009ACA0
 * Callers:
 *     ?Lookup@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAI@Z @ 0x18009ABA0 (-Lookup@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Wind.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  int v6; // r9d
  unsigned int v7; // r15d
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r8
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  v8 = 0;
  v9 = 0LL;
  while ( v6 >= 0 )
  {
    if ( (unsigned int)v9 >= v7 )
      goto LABEL_9;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v9 + 16);
    v14 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v14);
    v6 = v11;
    if ( v11 >= 0 )
    {
      if ( a2 == v14 )
      {
        v8 = 1;
        v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v10 + 56LL))(
               v10,
               a3,
               v12,
               (unsigned int)v11);
        if ( v6 < 0 )
          break;
LABEL_9:
        if ( v8 )
          return (unsigned int)v6;
        v6 = -2147483637;
        break;
      }
      v8 = 0;
      v6 = 0;
    }
    v9 = (unsigned int)(v9 + 1);
  }
  *a3 = 0;
  return (unsigned int)v6;
}
