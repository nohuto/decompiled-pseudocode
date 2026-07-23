/*
 * XREFs of SeQuerySecurityAttributesToken @ 0x1409E61E0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     RtlQueryPackageIdentityEx @ 0x140422890 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageIdentity @ 0x140422B10 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageClaims @ 0x140422D20 (RtlQueryPackageClaims.c)
 *     RtlpQueryPackageIdentityAttributes @ 0x140443BC0 (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
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
      KeLeaveCriticalRegionThread();
      return SecurityAttributesToken;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
