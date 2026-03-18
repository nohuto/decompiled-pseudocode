/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x140043C98
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x140187370 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140043D80 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400923C0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this)
{
  __int64 v1; // rcx
  char *v2; // rbx
  int v3; // edi
  tagDomLock *v4; // rcx
  bool v5; // bl
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v8; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  char v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  char v12; // [rsp+48h] [rbp-20h]

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
  v8 = 0;
  v10 = 0;
  v2 = &v8;
  v9 = W32GetUserSessionState(v1) + 42424;
  v11 = 0LL;
  v3 = 0;
  v12 = 0;
  do
  {
    v4 = (tagDomLock *)*((_QWORD *)v2 - 1);
    if ( v4 )
    {
      if ( *v2 )
        tagDomLock::LockExclusive(v4);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v4);
    }
    ++v3;
    v2 += 16;
  }
  while ( !v3 );
  v12 = 1;
  v5 = *(_DWORD *)(W32GetUserSessionState(v4) + 2812) == 1;
  if ( v12 && DomainLockRef )
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  return v5;
}
