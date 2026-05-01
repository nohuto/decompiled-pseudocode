/*
 * XREFs of ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x180412FE0
 * Callers:
 *     wil::details::lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___::_lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___ @ 0x18040FB98 (wil--details--lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___--_lambda_call__lambda_6b2d.c)
 *     _lambda_fc6cce9727cf9f8deae1663544b26742_::operator() @ 0x18040FF54 (_lambda_fc6cce9727cf9f8deae1663544b26742_--operator().c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180412280 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801C3264 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1804139A0 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePaneViewInfoForContactId(RTL_SRWLOCK *this, char *a2)
{
  char **Ptr; // rdi
  RTL_SRWLOCK *v5; // rsi
  char **i; // rbx
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v7, this + 16);
  Ptr = (char **)this[18].Ptr;
  v5 = this + 17;
  for ( i = (char **)this[17].Ptr; i != Ptr && (*((_DWORD *)*i + 15) || (unsigned int)std::wstring::compare(*i, a2)); i += 2 )
    ;
  if ( i != Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(v5, &v8, i);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
