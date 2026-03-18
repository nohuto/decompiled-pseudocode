/*
 * XREFs of AllocateCvr @ 0x1400F4CB0
 * Callers:
 *     InternalBeginDeferWindowPos @ 0x1400F4B34 (InternalBeginDeferWindowPos.c)
 *     _BeginDeferWindowPos @ 0x1400F4C38 (_BeginDeferWindowPos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateCvr(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax

  v2 = (unsigned int)a2;
  if ( (int)a2 <= 0 || (unsigned int)a2 > 0xC30C30 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 168 * v2;
  v6 = a1 == UserSessionState + 63296
     ? Win32AllocPoolZInit(v5, 2004054869LL)
     : Win32AllocPoolWithQuotaZInit(v5, 2004054869LL);
  if ( !v6 )
    return 0LL;
  *(_DWORD *)(a1 + 24) &= ~4u;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = v6;
  result = 1LL;
  *(_DWORD *)(a1 + 32) = v2;
  return result;
}
