/*
 * XREFs of ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180083434
 * Callers:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180068B18 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007F598 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180043CC8 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180044A28 (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppComputePraid@@YAXPEAU_HAM_APPLICATION@@PEAG@Z @ 0x18006379C (-HampAppComputePraid@@YAXPEAU_HAM_APPLICATION@@PEAG@Z.c)
 *     ?HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z @ 0x1800663C8 (-HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampPkgGetInterruptiveUIState(struct _HAM_PACKAGE *a1, wchar_t *String2)
{
  unsigned int InterruptiveUIState; // edi
  struct _HAM_APPLICATION *FirstApplication; // rbx
  wchar_t String1[72]; // [rsp+20h] [rbp-B8h] BYREF

  memset_0(String1, 0, 0x82uLL);
  InterruptiveUIState = 0;
  FirstApplication = HampPkgGetFirstApplication(a1);
  if ( FirstApplication )
  {
    do
    {
      if ( !String2 || (HampAppComputePraid(FirstApplication, String1), !_wcsicmp(String1, String2)) )
      {
        InterruptiveUIState = HampAppGetInterruptiveUIState(FirstApplication);
        if ( InterruptiveUIState )
          break;
      }
      FirstApplication = HampPkgGetNextApplication(a1, FirstApplication);
    }
    while ( FirstApplication );
    if ( FirstApplication )
      CemRcObjectDereference(FirstApplication);
  }
  return InterruptiveUIState;
}
