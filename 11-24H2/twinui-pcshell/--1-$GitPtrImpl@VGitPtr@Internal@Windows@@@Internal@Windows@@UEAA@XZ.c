/*
 * XREFs of ??1?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x18030B570
 * Callers:
 *     ??1?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAA@XZ @ 0x18030B540 (--1-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@.c)
 *     ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x18030B690 (--_E-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x18030BD60 (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 */

void **__fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::~GitPtrImpl<Windows::Internal::GitPtr>(
        __int64 a1)
{
  void **result; // rax

  result = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  *(_QWORD *)a1 = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  if ( *(_DWORD *)(a1 + 8) )
    return (void **)Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(a1);
  return result;
}
