/*
 * XREFs of ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1400BB438
 * Callers:
 *     IsKSTThread @ 0x1400BB410 (IsKSTThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::IsInputThread(CInputThreadBase *this)
{
  CInputThreadBase *v1; // rdi
  char *v2; // rbx

  v1 = this;
  v2 = (char *)this + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v1 + 10);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
