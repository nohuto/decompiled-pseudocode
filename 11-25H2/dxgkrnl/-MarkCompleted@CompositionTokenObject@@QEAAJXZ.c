/*
 * XREFs of ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x14000CCF8
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionTokenObject::MarkCompleted(CompositionTokenObject *this)
{
  unsigned int v2; // edi
  HANDLE CurrentThreadId; // rax
  char *v4; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 88, 0LL);
  v2 = 0;
  if ( *((_DWORD *)this + 16) == 1 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 24LL))((char *)this + 40);
  else
    v2 = -1073741823;
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
