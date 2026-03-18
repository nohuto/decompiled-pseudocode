/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x140039460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::IsAnalogExclusive(CFlipToken *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  char v3; // bl

  v1 = *((_QWORD *)this + 6);
  KeEnterCriticalRegion();
  v2 = v1 + 48;
  ExAcquirePushLockSharedEx(v1 + 48, 0LL);
  v3 = *(_BYTE *)(v1 + 209);
  if ( PsGetCurrentThreadId() == *(HANDLE *)(v2 + 8) )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
  return v3 != 0;
}
