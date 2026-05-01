/*
 * XREFs of ?StopTracking@AppUsageTracker@@UEAAXXZ @ 0x1805717F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppUsageTracker::StopTracking(RTL_SRWLOCK *this)
{
  unsigned int Ptr; // edi
  PVOID v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v7, this + 7);
  Ptr = (unsigned int)this[8].Ptr;
  LODWORD(this[8].Ptr) = 0;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  v3 = this[9].Ptr;
  if ( v3 )
  {
    if ( Ptr )
    {
      v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, Ptr);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6D,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
          (const char *)(unsigned int)v4,
          v5);
    }
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[10].Ptr + 32LL))(this[10].Ptr);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[11].Ptr + 32LL))(this[11].Ptr);
}
