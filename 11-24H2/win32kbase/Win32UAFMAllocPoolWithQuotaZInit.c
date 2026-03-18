/*
 * XREFs of Win32UAFMAllocPoolWithQuotaZInit @ 0x1401BEE50
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x14004ABD8 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401BF230 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401BF47C (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_DWORD *__fastcall Win32UAFMAllocPoolWithQuotaZInit(size_t Size, unsigned int a2, _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  _DWORD *v8; // rbx
  __int64 UserSessionState; // rax
  __int64 Quota; // rax
  int Cookie; // eax

  v7 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( !v7 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v6);
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
            (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
            256LL,
            v7,
            a2);
  if ( !Quota )
    return 0LL;
  v8 = (_DWORD *)(Quota + 16);
  Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
  *(v8 - 1) = Cookie;
  *a3 = Cookie - 1;
  if ( v8 )
    memset(v8, 0, Size);
  return v8;
}
