/*
 * XREFs of SeQuerySecurityAttributesToken @ 0x1409F23F0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140291ED8 (SepVerifyDesktopAppxPackageName.c)
 *     RtlQueryPackageIdentityEx @ 0x140292660 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageIdentity @ 0x1402928E0 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageClaims @ 0x140292AF0 (RtlQueryPackageClaims.c)
 *     RtlpQueryPackageIdentityAttributes @ 0x14044CF70 (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 */

__int64 __fastcall SeQuerySecurityAttributesToken(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        size_t a5,
        _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char v11; // dl
  unsigned int SecurityAttributesToken; // ebx
  size_t Size; // [rsp+30h] [rbp-18h]

  if ( (_DWORD)a5 )
  {
    if ( a4 )
    {
LABEL_3:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      LODWORD(Size) = a5;
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(a1, v11, a2, a3, 0, a4, Size, a6);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return SecurityAttributesToken;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
