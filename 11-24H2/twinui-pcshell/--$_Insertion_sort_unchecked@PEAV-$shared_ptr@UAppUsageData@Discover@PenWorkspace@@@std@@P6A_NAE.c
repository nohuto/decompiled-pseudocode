/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@QEAV10@0P6A_NAEAV10@1@Z@Z @ 0x1801FA17C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1802BFC00 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
std::_Ref_count_base **__fastcall std::_Insertion_sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        std::_Ref_count_base **a1,
        std::_Ref_count_base **a2,
        unsigned __int8 (__fastcall *a3)(std::_Ref_count_base **, __int64 *))
{
  std::_Ref_count_base **i; // rbx
  _QWORD *v7; // r14
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rax
  std::_Ref_count_base *v14; // rdx
  std::_Ref_count_base *v15; // rcx
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v17[0] = *i;
      v17[1] = i[1];
      *i = 0LL;
      i[1] = 0LL;
      v8 = (__int64 *)i;
      if ( a3(v17, (__int64 *)a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v9 = v8;
            v8 -= 2;
            std::shared_ptr<KBViewInfo>::operator=(v9, v8);
          }
          while ( v8 != (__int64 *)a1 );
        }
        std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)v17);
      }
      else
      {
        while ( 1 )
        {
          v8 -= 2;
          if ( !a3(v17, v8) )
            break;
          v10 = *v8;
          v11 = v8[1];
          *v8 = 0LL;
          v8[1] = 0LL;
          *v7 = v10;
          v12 = (std::_Ref_count_base *)v7[1];
          v7[1] = v11;
          if ( v12 )
            std::_Ref_count_base::_Decref(v12);
          v7 = v8;
        }
        v13 = v17[0];
        v14 = v17[1];
        *(_OWORD *)v17 = 0LL;
        *v7 = v13;
        v15 = (std::_Ref_count_base *)v7[1];
        v7[1] = v14;
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
      }
      if ( v17[1] )
        std::_Ref_count_base::_Decref(v17[1]);
    }
  }
  return a2;
}
