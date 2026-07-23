/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x1404EBED4
 * Callers:
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792ADC (SeDuplicateTokenWithPredictedClaims.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140422764 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlQueryPackageClaims @ 0x140422D20 (RtlQueryPackageClaims.c)
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 *     Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline @ 0x140605FBC (Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140606010 (SepDesktopAppModifyTokenBreakaway.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(
        HANDLE TokenHandle,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7)
{
  bool v8; // r14
  NTSTATUS PackageClaims; // eax
  __int64 v10; // r8
  int v11; // r9d
  int v12; // ebx
  ULONG Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rcx
  void *v19; // rsi
  NTSTATUS v20; // eax
  signed __int32 v22[8]; // [rsp+0h] [rbp-100h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-E0h]
  PGUID DynamicId; // [rsp+28h] [rbp-D8h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-D0h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-C8h]
  _BYTE v27[8]; // [rsp+40h] [rbp-C0h] BYREF
  _PS_PKG_CLAIM v28; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+54h] [rbp-ACh] BYREF
  int Data; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch]
  int *v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  _PS_PKG_CLAIM v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v39; // [rsp+88h] [rbp-78h]
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  int v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+C0h] [rbp-40h] BYREF
  const wchar_t *v45; // [rsp+C8h] [rbp-38h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  const wchar_t *v49; // [rsp+F0h] [rbp-10h]
  __int128 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+110h] [rbp+10h]
  const wchar_t *v53; // [rsp+118h] [rbp+18h]
  __int128 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+30h]

  v45 = L"WIN://SYSAPPID";
  AttributesPresent = 0LL;
  v47 = 0LL;
  v36 = a3;
  v49 = L"WIN://PKG";
  v42 = a2;
  v51 = 0LL;
  *a6 = 0;
  v53 = L"WIN://PKGHOSTID";
  v28 = 0LL;
  v55 = 0LL;
  v8 = 0;
  v37 = 0LL;
  v39 = L"WIN://CIPOLICY";
  v41 = 0LL;
  PkgClaim = &v28;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v27[0] = 0;
  v44 = 1966108;
  v46 = 0LL;
  v48 = 1310738;
  v50 = 0LL;
  v52 = 2097182;
  v54 = 0LL;
  v38 = 1966108;
  v40 = 0LL;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v32 = 0;
  *a7 = 0;
  PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, AppIdSize, DynamicId, PkgClaim, AttributesPresent);
  v12 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v12;
    v12 = 0;
  }
  Flags = v28.Flags;
  if ( (v28.Flags & 4) == 0 )
  {
    if ( (v28.Flags & 0x10000) != 0 )
    {
      *a7 = 1;
      return (unsigned int)v12;
    }
    v19 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v32, v27, &v36, 0LL);
    v20 = RtlQueryPackageClaims(v19, 0LL, 0LL, 0LL, 0LL, 0LL, &v37, 0LL);
    v12 = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741275 )
      {
LABEL_39:
        if ( v19 )
        {
          if ( v32 == 1 )
            ObFastDereferenceObject(
              (__int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
              (ULONG_PTR)v19,
              0x74726853u);
          else
            ObfDereferenceObjectWithTag(v19, 0x74726853u);
        }
        return (unsigned int)v12;
      }
      v12 = 0;
    }
    if ( (v37.Flags & 0x10004) != 0 )
      *a6 = 1;
    goto LABEL_39;
  }
  if ( (a5 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a5 & 1) != 0 && (v28.Flags & 0x20) != 0 )
  {
    v12 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v28, 0LL);
    if ( v12 < 0 )
      return (unsigned int)v12;
    Flags = v28.Flags;
  }
  if ( (a5 & 6) != 0 || (Flags & 0x20) != 0 )
  {
    if ( (a5 & 2) != 0 && (Flags & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
      v12 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v28, v10);
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    if ( SepVerifyDesktopAppPolicyOverrideCaller(TokenHandle) )
    {
LABEL_17:
      *a7 = 1;
      return (unsigned int)v12;
    }
    Flags = v28.Flags;
  }
  if ( LOBYTE(v28.Origin) == 3 && (Flags & 0x22000) == 0 )
  {
    v8 = 1;
    if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0 && Type == 4 && ResultDataSize == 4 )
      v8 = Data != 1;
  }
  LOBYTE(v11) = v8;
  v12 = SepVerifyDesktopAppxImage(v42, v36, (_DWORD)TokenHandle, v11, (__int64)v27);
  if ( v12 >= 0 )
  {
    if ( v27[0] )
      goto LABEL_17;
    DWORD2(v46) = 0;
    LOWORD(v46) = 3;
    DWORD2(v50) = 0;
    DWORD2(v54) = 0;
    v42 = 0x300000003LL;
    LOWORD(v50) = 2;
    LOWORD(v54) = 2;
    v35 = &v44;
    CurrentThread = KeGetCurrentThread();
    v43 = 3;
    v33 = 1;
    --CurrentThread->KernelApcDisable;
    v15 = (struct _ERESOURCE *)*((_QWORD *)TokenHandle + 6);
    v34 = 3;
    ExAcquireResourceExclusiveLite(v15, 1u);
    _InterlockedOr(v22, 0);
    v12 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)TokenHandle + 97), (int *)&v42, (__int64)&v33, v16);
    if ( (unsigned int)Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 >= 0 )
      {
        v18 = *((_QWORD *)TokenHandle + 97);
        v35 = &v38;
        LOWORD(v40) = 3;
        DWORD2(v40) = 0;
        v34 = 1;
        v12 = AuthzBasepSetSecurityAttributesToken(v18, (int *)&v42, (__int64)&v33, v17);
        if ( v12 == -1073741275 )
          v12 = 0;
      }
    }
    *((_QWORD *)TokenHandle + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v22, 0);
    ExReleaseResourceLite(*((PERESOURCE *)TokenHandle + 6));
    KeLeaveCriticalRegion();
    *a6 = 1;
  }
  return (unsigned int)v12;
}
