/*
 * XREFs of NtDxgkSetProperties @ 0x1402E1F00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1401D0EEC (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1401D10FC (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1401D11C4 (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z @ 0x1402E24E0 (-AllocateElements@-$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1402E31F8 (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1402E33DC (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkSetProperties(ULONG64 a1)
{
  const void *v1; // rdx
  size_t v2; // rbx
  struct _LUID *v3; // rdi
  const void *v4; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int128 v10; // [rsp+60h] [rbp-48h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+80h] [rbp-28h]
  PVOID P; // [rsp+88h] [rbp-20h] BYREF
  _BYTE v14[4]; // [rsp+90h] [rbp-18h] BYREF
  int v15; // [rsp+94h] [rbp-14h]

  v1 = (const void *)a1;
  v10 = 0LL;
  *(_OWORD *)Src = 0LL;
  v12 = 0LL;
  P = 0LL;
  v15 = 0;
  if ( a1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v10, v1, 0x28uLL);
  if ( !Src[0] )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6325;
    if ( P != v14 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v15 = 0;
    return 3221225485LL;
  }
  if ( !DWORD1(v10) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6332;
    if ( P != v14 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v15 = 0;
    return 3221225485LL;
  }
  if ( *((_QWORD *)&v10 + 1) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6339;
    if ( P != v14 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v15 = 0;
    return 3221225485LL;
  }
  if ( (unsigned int)v10 <= 2 )
    goto LABEL_7;
  if ( (_DWORD)v10 != 3 )
  {
    if ( (_DWORD)v10 != 5 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 6377;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v14 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v15 = 0;
      return 3221225485LL;
    }
LABEL_7:
    v2 = 16LL;
    goto LABEL_8;
  }
  v2 = 32LL;
LABEL_8:
  if ( DWORD1(v10) < (unsigned int)v2 )
  {
    WdLogSingleEntry2(2LL, (int)v10, -1073741811LL);
    WdLogGlobalForLineNumber = 6386;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v14 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v15 = 0;
    return 3221225485LL;
  }
  else
  {
    v3 = (struct _LUID *)PagedPoolZeroedArray<unsigned char,4>::AllocateElements(&P, (unsigned int)v2);
    if ( v3 )
    {
      v4 = Src[0];
      if ( (char *)Src[0] + v2 < Src[0] || (char *)Src[0] + v2 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v3, v4, v2);
      Current = DXGPROCESS::GetCurrent(v6);
      if ( (_DWORD)v10 )
      {
        switch ( (_DWORD)v10 )
        {
          case 1:
            v8 = ProcessUserPreferredAdapterProperty(
                   Current,
                   (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)v3,
                   1);
            break;
          case 2:
            v8 = ProcessDefaultHighPerformanceAdapterProperty(
                   Current,
                   (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)v3,
                   1);
            break;
          case 3:
            v8 = PresentDurationPlaneProperty(Current, v3, 1);
            break;
          case 5:
            v8 = ProcessBoostedVSyncEligibleProperty(
                   Current,
                   (struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *)v3,
                   1);
            break;
          default:
            v9 = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 6456;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_46;
        }
      }
      else
      {
        v8 = ProcessVrrEligibleProperty(Current, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)v3, 1);
      }
      v9 = v8;
LABEL_46:
      if ( P != v14 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return v9;
    }
    WdLogSingleEntry2(2LL, v2, -1073741801LL);
    WdLogGlobalForLineNumber = 6395;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
      v2,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    if ( P != v14 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v15 = 0;
    return 3221225495LL;
  }
}
