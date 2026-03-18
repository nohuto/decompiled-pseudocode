/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1401A2BF8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(
        MenuStateOwnerLockxxxUnlock *this,
        __int64 a2)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(__int64); // rax

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this, a2) + 48) + 1576LL);
    if ( v3 )
      v3(v2);
  }
}
