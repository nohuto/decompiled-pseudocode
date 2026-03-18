/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x14029223C
 * Callers:
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppxImage @ 0x140291D1C (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140292108 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlQueryPackageClaims @ 0x140292AF0 (RtlQueryPackageClaims.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405FC42C (SepDesktopAppModifyTokenBreakaway.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  char v8; // si
  int PackageClaims; // eax
  int v10; // ebx
  int v11; // eax
  void *v12; // rsi
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 *v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v31; // [rsp+88h] [rbp-78h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  const wchar_t *v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+D0h] [rbp-30h]
  const wchar_t *v39; // [rsp+D8h] [rbp-28h]
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-10h]

  v31 = L"WIN://SYSAPPID";
  v20 = 0LL;
  v33 = 0LL;
  *a4 = 0;
  v35 = L"WIN://PKG";
  v27[0] = a2;
  v37 = 0LL;
  v22 = 0LL;
  v39 = L"WIN://PKGHOSTID";
  v28 = 0LL;
  v41 = 0LL;
  LOWORD(v21) = 0;
  v19 = &v22;
  v18 = 0LL;
  v17 = 0LL;
  v8 = 0;
  v30 = 1966108;
  v32 = 0LL;
  v34 = 1310738;
  v36 = 0LL;
  v38 = 2097182;
  v40 = 0LL;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, v17, v18, v19, v20, v21);
  v10 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v10;
    v10 = 0;
  }
  v11 = v22;
  if ( (v22 & 4) == 0 )
  {
    if ( (v22 & 0x10000) != 0 )
    {
      *a5 = 1;
      return (unsigned int)v10;
    }
    v12 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v26, (char *)&v21 + 1, v27, 0LL);
    v10 = RtlQueryPackageClaims(v12, 0LL, 0LL, 0LL, 0LL, 0LL, &v28, 0LL, v21);
    if ( v10 < 0 )
    {
      if ( v10 != -1073741275 )
      {
LABEL_11:
        if ( v12 )
        {
          if ( v26 == 1 )
            ObFastDereferenceObject(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors, v12, 1953654867LL);
          else
            ObfDereferenceObjectWithTag(v12, 0x74726853u);
        }
        return (unsigned int)v10;
      }
      v10 = 0;
    }
    if ( (v28 & 0x10004) != 0 )
      *a4 = 1;
    goto LABEL_11;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v22 & 0x20) != 0 )
  {
    v10 = SepDesktopAppModifyTokenBreakaway(a1, &v22, 0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v11 = v22;
  }
  v14 = 2LL;
  if ( (a3 & 6) != 0 || (v11 & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (v11 & 0x20) == 0 )
    {
      LOBYTE(v14) = 1;
      v10 = SepDesktopAppModifyTokenBreakaway(a1, &v22, v14);
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    if ( SepVerifyDesktopAppPolicyOverrideCaller(a1) )
    {
LABEL_40:
      *a5 = 1;
      return (unsigned int)v10;
    }
    v11 = v22;
  }
  if ( BYTE4(v22) == 3 && (v11 & 0x22000) == 0 )
  {
    v8 = 1;
    if ( (int)ZwQueryLicenseValue(a02, &v23, &v25, 4LL, &v24) >= 0 && v23 == 4 && v24 == 4 )
      v8 = v25 != 1;
  }
  v10 = SepVerifyDesktopAppxImage(v27[0], a1, v8, &v21);
  if ( v10 >= 0 )
  {
    if ( !(_BYTE)v21 )
    {
      DWORD2(v32) = 0;
      LOWORD(v32) = 3;
      DWORD2(v36) = 0;
      DWORD2(v40) = 0;
      v28 = 0x300000003LL;
      LOWORD(v36) = 2;
      LOWORD(v40) = 2;
      v29 = 3;
      v27[1] = (__int64)&v30;
      CurrentThread = KeGetCurrentThread();
      v27[0] = 0x300000001LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
      _InterlockedOr(v16, 0);
      v10 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(a1 + 776), (int *)&v28, (__int64)v27);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v16, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      *a4 = 1;
      return (unsigned int)v10;
    }
    goto LABEL_40;
  }
  return (unsigned int)v10;
}
