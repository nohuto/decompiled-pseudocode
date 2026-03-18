/*
 * XREFs of ?ReferenceAdapter@CTokenManager@@UEAAJU_LUID@@PEAPEAUIAdapter@@@Z @ 0x1400362C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualLuid@CAdapter@@IEAA_NAEBU_LUID@@@Z @ 0x14009A848 (-IsEqualLuid@CAdapter@@IEAA_NAEBU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::ReferenceAdapter(CTokenManager *this, struct _LUID a2, struct IAdapter **a3)
{
  char *v3; // rdi
  struct IAdapter *v5; // rbp
  unsigned int v7; // esi
  char *v8; // r9
  char *i; // r8
  CAdapter *v10; // rbx
  __int64 v11; // r8
  __int64 result; // rax
  struct _LUID v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this + 152;
  v13 = a2;
  v5 = 0LL;
  v7 = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 152, 0LL);
  v3[8] = 0;
  v8 = (char *)this + 136;
  for ( i = (char *)*((_QWORD *)this + 18); i != v8; i = *(char **)(v11 + 8) )
  {
    v10 = (CAdapter *)((unsigned __int64)(i - 8) & -(__int64)(i != 0LL));
    if ( CAdapter::IsEqualLuid(v10, &v13) )
    {
      (**(void (***)(void))v10)();
      v7 = 0;
      v5 = v10;
      break;
    }
  }
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  result = v7;
  *a3 = v5;
  return result;
}
