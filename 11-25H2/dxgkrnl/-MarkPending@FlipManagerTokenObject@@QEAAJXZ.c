/*
 * XREFs of ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x140038938
 * Callers:
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14005CA4C (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerTokenObject::MarkPending(FlipManagerTokenObject *this)
{
  unsigned int v2; // edi
  HANDLE CurrentThreadId; // rax
  char *v4; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 88, 0LL);
  v2 = 0;
  if ( *((_DWORD *)this + 16) )
    v2 = -1073741823;
  else
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 16LL))((char *)this + 40);
  CurrentThreadId = PsGetCurrentThreadId();
  v4 = (char *)this + 88;
  if ( CurrentThreadId == *((HANDLE *)this + 12) )
  {
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v4, 0LL);
  }
  KeLeaveCriticalRegion();
  return v2;
}
