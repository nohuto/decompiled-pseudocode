/*
 * XREFs of ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029BE44
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802338D0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18029BCF0 (-StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805A7500 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180091F74 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18028C6B4 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88A8 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??$_Emplace_back_internal@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEAUCRect@Geometry@@@Z @ 0x1805A4D4C (--$_Emplace_back_internal@AEAUCRect@Geometry@@@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@s.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805A8AC0 (-start@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
        RTL_SRWLOCK *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  unsigned __int64 Ptr; // r8
  char *v7; // rdx
  char *i; // rdx
  int v10; // edi
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  CSnapAssistControllerBase::EndGuidedSnapAssist((__int64)a1, 0, (__int64)&v11);
  AcquireSRWLockExclusive(a1 + 21);
  v14 = a1 + 21;
  Ptr = (unsigned __int64)a1[25].Ptr;
  v7 = (char *)a1[26].Ptr + Ptr;
  while ( 1 )
  {
    if ( (char *)Ptr == v7 )
    {
      while ( a2 != a3 )
        std::deque<tagRECT>::_Emplace_back_internal<Geometry::CRect &>(&a1[22], a2++);
      goto LABEL_12;
    }
    if ( a2 == a3 )
      break;
    *(_OWORD *)*((_QWORD *)a1[23].Ptr + (Ptr++ & ((unsigned __int64)a1[24].Ptr - 1))) = *a2++;
  }
  for ( i = &v7[-Ptr]; i; --i )
  {
    if ( a1[26].Ptr-- == (PVOID)1 )
      a1[25].Ptr = 0LL;
  }
LABEL_12:
  v10 = (int)a1[26].Ptr;
  if ( v10 )
  {
    tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::start(
      &a1[30],
      &v11);
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                   (__int64)&a1[30],
                   &v13)
              + 272) = v10;
    tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v13);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
  }
  else if ( a1 != (RTL_SRWLOCK *)-168LL )
  {
    ReleaseSRWLockExclusive(a1 + 21);
  }
}
