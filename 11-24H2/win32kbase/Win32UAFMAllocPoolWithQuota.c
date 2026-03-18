/*
 * XREFs of Win32UAFMAllocPoolWithQuota @ 0x1401BEDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x14004ABD8 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401BF230 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401BF47C (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

__int64 __fastcall Win32UAFMAllocPoolWithQuota(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 UserSessionState; // rax
  __int64 Quota; // rdi
  int Cookie; // eax

  v5 = 0LL;
  v7 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  if ( v7 )
  {
    UserSessionState = W32GetUserSessionState(v6);
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
              (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
              256LL,
              v7,
              a2);
    if ( Quota )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(Quota + 12) = Cookie;
      v5 = Quota + 16;
      *a3 = Cookie - 1;
    }
  }
  return v5;
}
