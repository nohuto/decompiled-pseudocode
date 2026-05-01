/*
 * XREFs of _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x1805E17A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_::Run @ 0x1805E45A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__-_--Run.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1802E6D38 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x1805E1970 (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x1805E1D2C (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z @ 0x1805E5360 (-UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator()(JointResize **a1)
{
  JointResize *v2; // rcx
  _QWORD *v4; // rax
  JointResize *v5; // rcx
  JointResize::SecondaryViewInfo *v6; // rsi
  JointResize::SecondaryViewInfo *i; // rdi
  struct tagRECT v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  if ( !*((_BYTE *)v2 + 256) )
    return 2147947423LL;
  v4 = (_QWORD *)JointResize::CalculatePointFromRect(v2, &v8);
  v5 = *a1;
  *((_QWORD *)v5 + 36) = *v4;
  JointResize::DestroyGhostDivider(v5);
  v6 = (JointResize::SecondaryViewInfo *)*((_QWORD *)*a1 + 26);
  for ( i = (JointResize::SecondaryViewInfo *)*((_QWORD *)*a1 + 25);
        i != v6;
        i = (JointResize::SecondaryViewInfo *)((char *)i + 96) )
  {
    JointResize::SecondaryViewInfo::UpdateSizeConstraints(i, *((struct IImmersiveMonitor **)*a1 + 23));
  }
  JointResize::ApplySizeConstraints(*a1);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 29) + 24LL))(*((_QWORD *)*a1 + 29));
  return 0LL;
}
