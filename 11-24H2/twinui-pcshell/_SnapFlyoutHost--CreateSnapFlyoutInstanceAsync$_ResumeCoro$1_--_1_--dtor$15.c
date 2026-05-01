/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$15 @ 0x1806F765D
 * Callers:
 *     <none>
 * Callees:
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1801BC9C4 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 824) = *(_QWORD *)(a2 + 1312) + 256LL;
  SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord(*(SnapFlyoutHost::FlyoutInstanceRecord **)(a2 + 824));
}
