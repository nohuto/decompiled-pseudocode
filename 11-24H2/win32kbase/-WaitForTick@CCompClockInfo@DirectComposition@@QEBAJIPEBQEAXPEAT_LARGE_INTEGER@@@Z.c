/*
 * XREFs of ?WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z @ 0x140194168
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1400CE2F0 (NtDCompositionWaitForCompositorClock.c)
 * Callees:
 *     ?EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ @ 0x140222BDC (-EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::WaitForTick(
        DirectComposition::CCompClockInfo *this,
        unsigned int a2,
        void *const *a3,
        union _LARGE_INTEGER *a4)
{
  __int64 v5; // rsi
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // r8
  _QWORD v11[34]; // [rsp+40h] [rbp-148h] BYREF

  v5 = a2;
  if ( *((_DWORD *)this + 4) && DirectComposition::CCompClockInfo::EnsureVBlankEvent(this) )
  {
    KeEnterCriticalRegion();
    LOBYTE(v7) = 1;
    v8 = DxgkModifyVSyncWaiterInternal(*((unsigned int *)this + 4), *((unsigned int *)this + 3), v7);
    if ( v8 >= 0 )
    {
      memset(v11, 0, 0x108uLL);
      memmove(v11, a3, 8 * v5);
      LOBYTE(v9) = 1;
      v11[v5] = *((_QWORD *)this + 3);
      v8 = ObWaitForMultipleObjects((unsigned int)(v5 + 1), v11, v9);
      DxgkModifyVSyncWaiterInternal(*((unsigned int *)this + 4), *((unsigned int *)this + 3), 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
