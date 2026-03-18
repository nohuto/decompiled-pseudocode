/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x140355ABC
 * Callers:
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792B0C (SeDuplicateTokenWithPredictedClaims.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140355988 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlQueryPackageClaims @ 0x140356380 (RtlQueryPackageClaims.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SepVerifyDesktopAppxImage @ 0x140356A00 (SepVerifyDesktopAppxImage.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1406088BC (SepDesktopAppModifyTokenBreakaway.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1406A9010 (ZwQueryLicenseValue.c)
 *     PsReferenceEffectiveToken @ 0x14085D1B0 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE *a5, _BYTE *a6)
{
  bool v8; // r14
  int PackageClaims; // eax
  int v10; // r9d
  int v11; // ebx
  int v12; // eax
  void *v13; // rsi
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 *v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  int v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v33; // [rsp+98h] [rbp-68h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  const wchar_t *v37; // [rsp+C0h] [rbp-40h]
  __int128 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+E0h] [rbp-20h]
  const wchar_t *v41; // [rsp+E8h] [rbp-18h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp+0h]

  v33 = L"WIN://SYSAPPID";
  v21 = 0LL;
  v35 = 0LL;
  v29 = a3;
  v37 = L"WIN://PKG";
  v30 = a2;
  v39 = 0LL;
  *a5 = 0;
  v41 = L"WIN://PKGHOSTID";
  v23 = 0LL;
  v43 = 0LL;
  v28[0] = 0LL;
  v20 = &v23;
  v8 = 0;
  v19 = 0LL;
  v18 = 0LL;
  LOWORD(v22) = 0;
  v32 = 1966108;
  v34 = 0LL;
  v36 = 1310738;
  v38 = 0LL;
  v40 = 2097182;
  v42 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  *a6 = 0;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, v18, v19, v20, v21, v22);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v11;
    v11 = 0;
  }
  v12 = v23;
  if ( (v23 & 4) == 0 )
  {
    if ( (v23 & 0x10000) != 0 )
    {
      *a6 = 1;
      return (unsigned int)v11;
    }
    v13 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v27, (char *)&v22 + 1, &v29, 0LL);
    v11 = RtlQueryPackageClaims(v13, 0LL, 0LL, 0LL, 0LL, 0LL, v28, 0LL, v22);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741275 )
      {
LABEL_11:
        if ( v13 )
        {
          if ( v27 == 1 )
            ObFastDereferenceObject(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors, v13, 1953654867LL);
          else
            ObfDereferenceObjectWithTag(v13, 0x74726853u);
        }
        return (unsigned int)v11;
      }
      v11 = 0;
    }
    if ( (v28[0] & 0x10004) != 0 )
      *a5 = 1;
    goto LABEL_11;
  }
  if ( (a4 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a4 & 1) != 0 && (v23 & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(a1, &v23, 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = v23;
  }
  v15 = 2LL;
  if ( (a4 & 6) != 0 || (v12 & 0x20) != 0 )
  {
    if ( (a4 & 2) != 0 && (v12 & 0x20) == 0 )
    {
      LOBYTE(v15) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(a1, &v23, v15);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( SepVerifyDesktopAppPolicyOverrideCaller(a1) )
    {
LABEL_27:
      *a6 = 1;
      return (unsigned int)v11;
    }
    v12 = v23;
  }
  if ( BYTE4(v23) == 3 && (v12 & 0x22000) == 0 )
  {
    v8 = 1;
    if ( (int)ZwQueryLicenseValue(a02, &v24, &v26, 4LL, &v25) >= 0 && v24 == 4 && v25 == 4 )
      v8 = v26 != 1;
  }
  LOBYTE(v10) = v8;
  v11 = SepVerifyDesktopAppxImage(v30, v29, a1, v10, (__int64)&v22);
  if ( v11 >= 0 )
  {
    if ( !(_BYTE)v22 )
    {
      DWORD2(v34) = 0;
      LOWORD(v34) = 3;
      DWORD2(v38) = 0;
      DWORD2(v42) = 0;
      v30 = 0x300000003LL;
      LOWORD(v38) = 2;
      LOWORD(v42) = 2;
      v31 = 3;
      v28[1] = &v32;
      CurrentThread = KeGetCurrentThread();
      v28[0] = 0x300000001LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
      _InterlockedOr(v17, 0);
      v11 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(a1 + 776), &v30, v28);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v17, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      *a5 = 1;
      return (unsigned int)v11;
    }
    goto LABEL_27;
  }
  return (unsigned int)v11;
}
