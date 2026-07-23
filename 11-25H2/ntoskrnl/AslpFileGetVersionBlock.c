/*
 * XREFs of AslpFileGetVersionBlock @ 0x1407FEA10
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1407FE928 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlVerifyVersionInfo @ 0x140466150 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x140478E50 (VerSetConditionMask.c)
 *     RtlFileMapFree @ 0x1404B56A8 (RtlFileMapFree.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x14068B860 (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AslFileMappingEnsure @ 0x1407F95EC (AslFileMappingEnsure.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 *     LdrResSearchResource @ 0x14083CDF0 (LdrResSearchResource.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  unsigned __int64 v11; // r13
  int v12; // eax
  ULONGLONG v13; // rax
  ULONGLONG v14; // rax
  __int64 v15; // rax
  const char *v16; // r9
  int v17; // r8d
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  _WORD *v22; // rax
  _WORD *v23; // r12
  __int64 v24; // rcx
  void *Src; // [rsp+48h] [rbp-1D0h] BYREF
  _WORD *v27; // [rsp+50h] [rbp-1C8h]
  __int64 v28; // [rsp+58h] [rbp-1C0h]
  _QWORD v29[3]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+78h] [rbp-1A0h] BYREF
  __int128 v31; // [rsp+88h] [rbp-190h]
  __int128 v32; // [rsp+98h] [rbp-180h]
  __int64 v33; // [rsp+A8h] [rbp-170h]
  _OSVERSIONINFOEXW VersionInfo; // [rsp+C0h] [rbp-158h] BYREF
  size_t Size; // [rsp+238h] [rbp+20h] BYREF

  Src = 0LL;
  v27 = 0LL;
  Size = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v6 = *(_QWORD *)(a3 + 72);
  if ( v6 )
  {
    v7 = *(_WORD *)(v6 + 2);
    v8 = v6 + 40;
    v9 = 0LL;
    if ( v7 >= 0x34u )
      v9 = v8;
    *a2 = v9;
    *a1 = *(_QWORD *)(a3 + 72);
    v10 = 0;
    goto LABEL_55;
  }
  v10 = AslFileMappingEnsure(a3);
  if ( v10 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlock", 1612, (unsigned int)"AslFileMappingEnsure failed [%x]");
    goto LABEL_55;
  }
  if ( *(_DWORD *)(a3 + 64) != 6 )
  {
    v10 = -1073741687;
    goto LABEL_55;
  }
  v29[0] = 16LL;
  v29[1] = 1LL;
  v29[2] = 0LL;
  v11 = *(_QWORD *)(a3 + 32);
  v28 = *(_QWORD *)(a3 + 40);
  v12 = LdrResSearchResource(
          v11,
          (unsigned int)v29,
          3,
          *(_BYTE *)(a3 + 59) == 0 ? 0x200 : 0,
          (__int64)&Src,
          (__int64)&Size,
          0LL,
          0LL);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v18 = v28;
  }
  else
  {
    if ( (unsigned int)(v12 + 1073741687) <= 2 )
      goto LABEL_55;
    if ( v12 != -1073741701 || *(_BYTE *)(a3 + 59) || *(_DWORD *)(a3 + 84) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGetVersionBlock",
        1737,
        (unsigned int)"LdrResFindResource failed %ls [%x]");
      goto LABEL_55;
    }
    memset_0(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.dwMajorVersion = 6;
    VersionInfo.dwMinorVersion = 2;
    v13 = VerSetConditionMask(0LL, 2u, 3u);
    v14 = VerSetConditionMask(v13, 1u, 3u);
    if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v14) < 0 )
    {
LABEL_15:
      v10 = -1073741687;
      goto LABEL_55;
    }
    v15 = *(_QWORD *)(a3 + 8);
    LOBYTE(v33) = 0;
    *(_QWORD *)&v30 = v15;
    v10 = RtlFileMapMapView((__int64)&v30, 1);
    if ( v10 < 0 )
    {
      v16 = "RtlFileMapMapView failed [%x]";
      v17 = 1704;
LABEL_54:
      AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlock", v17, (_DWORD)v16);
      goto LABEL_55;
    }
    AslLogCallPrintf(
      3,
      (unsigned int)"AslpFileGetVersionBlock",
      1713,
      (unsigned int)"Re-mapped file as image to get version block: %ls");
    v11 = *((_QWORD *)&v31 + 1);
    v10 = LdrResSearchResource(DWORD2(v31), (unsigned int)v29, 3, 0, (__int64)&Src, (__int64)&Size, 0LL, 0LL);
    AslLogCallPrintf(
      2,
      (unsigned int)"AslpFileGetVersionBlock",
      1726,
      (unsigned int)"%ls version block after re-mapping as image [%x]");
    if ( v10 < 0 )
    {
      v16 = "LdrResFindResource failed [%x]";
      v17 = 1729;
      goto LABEL_54;
    }
    v18 = v32;
  }
  if ( !Src )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionBlock",
      1744,
      (unsigned int)"LdrResFindResource returned null version block with status: [%x]");
    goto LABEL_15;
  }
  v19 = (unsigned __int64)Src + Size;
  if ( (char *)Src + Size < Src )
  {
    v19 = -1LL;
    v20 = -1073741675;
  }
  else
  {
    v20 = 0;
  }
  if ( v20 < 0 )
  {
    v16 = "Version block has bad size";
    v17 = 1758;
LABEL_53:
    v10 = -1073741687;
    goto LABEL_54;
  }
  if ( (unsigned __int64)Src < v11 || v19 > v18 + v11 )
  {
    v17 = 1770;
    goto LABEL_52;
  }
  if ( !*(_BYTE *)(a3 + 59) && !*((_QWORD *)&v30 + 1) && v19 > v11 + *(_QWORD *)(a3 + 24) )
  {
    v17 = 1788;
LABEL_52:
    v16 = "Version block out of range";
    goto LABEL_53;
  }
  if ( (unsigned int)Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( Size < 0x5C || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
    {
      v10 = -1073741595;
      v16 = "Version block invalid";
      v17 = 1800;
      goto LABEL_54;
    }
  }
  else if ( Size < 0x26 || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
  {
    v10 = -1073741595;
    v16 = "Version block invalid";
    v17 = 1807;
    goto LABEL_54;
  }
  v22 = (_WORD *)AslAlloc(v21, Size);
  v23 = v22;
  v27 = v22;
  if ( !v22 )
  {
    v10 = -1073741801;
    v16 = "Out of memory";
    v17 = 1819;
    goto LABEL_54;
  }
  memmove(v22, Src, Size);
  if ( Size < (unsigned __int16)*v23 )
    *v23 = Size;
  *(_QWORD *)(a3 + 72) = v23;
  v27 = 0LL;
  v24 = *(_QWORD *)(a3 + 72);
  if ( *(_WORD *)(v24 + 2) >= 0x34u )
    *a2 = v24 + 40;
  else
    *a2 = 0LL;
  *a1 = v24;
  v10 = 0;
LABEL_55:
  RtlFileMapFree((__int64)&v30);
  return (unsigned int)v10;
}
