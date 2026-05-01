/*
 * XREFs of ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801A82FC
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18046D77C (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ??$_Assign_counted_range@PEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@_K@Z @ 0x1801A8444 (--$_Assign_counted_range@PEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::HideAllInputViews(RTL_SRWLOCK *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  __int64 i; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v2 = 0LL;
  v6 = 0LL;
  v3 = this + 53;
  AcquireSRWLockShared(this + 53);
  if ( &v5 != (__int128 *)&this[54] )
  {
    std::vector<std::shared_ptr<KBViewInfo>>::_Assign_counted_range<std::shared_ptr<KBViewInfo> *>(
      &v5,
      this[54].Ptr,
      ((char *)this[55].Ptr - (char *)this[54].Ptr) >> 4);
    v2 = v6;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  for ( i = v5; i != *((_QWORD *)&v5 + 1); i += 16LL )
  {
    if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)i + 34LL) )
      TouchKeyboardExperienceManager::HideInputView(
        (TouchKeyboardExperienceManager *)this,
        *(unsigned int *)(*(_QWORD *)i + 104LL),
        1);
  }
  if ( (_QWORD)v5 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v5, *((__int64 *)&v5 + 1));
    std::_Deallocate<16,0>((void *)v5, (const struct std::nothrow_t *)((v2 - v5) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
