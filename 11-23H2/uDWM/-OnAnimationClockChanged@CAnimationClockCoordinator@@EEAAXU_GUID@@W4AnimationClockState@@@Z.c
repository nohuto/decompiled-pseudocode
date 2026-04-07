/*
 * XREFs of ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800130B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180012F28 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnAnimationClockChanged(__int64 a1, __int128 *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 (__fastcall ***v7)(_QWORD, __int128 *, _QWORD); // rdi
  __int64 (__fastcall **v8)(_QWORD, __int128 *, _QWORD); // rax
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int128 *, _QWORD))(a1 + 48);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  v8 = *v7;
  v10 = *a2;
  result = (*v8)(v7, &v10, a3);
  if ( a3 == 7 )
  {
    v11 = v3;
    EnterCriticalSection(v3);
    CAnimationClockCoordinator::_ClearExpiredAnimationClocks((CAnimationClockCoordinator *)a1);
    return CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  }
  return result;
}
