/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x140240000
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDPITransformationMonitor @ 0x14006E2CC (GetDPITransformationMonitor.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140267394 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  int v9; // r12d
  unsigned int v10; // edi
  int AdjustedPointerLocations; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  size_t v21; // r8
  void *v22; // rcx
  __int64 Src; // [rsp+58h] [rbp-C0h] BYREF
  __int64 DPITransformationMonitor; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v28[5]; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-58h] BYREF

  v9 = 0;
  v10 = 0;
  Src = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28[0] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &Src,
                               &v27,
                               &v26,
                               v28,
                               a3,
                               0);
  if ( (*((_DWORD *)PtiCurrent(v13, v12) + 340) & 0x2000LL) == 0 )
    v9 = AdjustedPointerLocations;
  if ( a4 == 2 || a4 == 5 )
  {
    v30 = *(_OWORD *)(a1 + 112);
    v31 = *(_OWORD *)(a1 + 128);
  }
  LOBYTE(v14) = 1;
  v15 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), v14);
  v16 = v9;
  if ( v15 && (*(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL) & 0xF) != 2 )
  {
    if ( !v9 )
    {
      Src = *(_QWORD *)(a1 + 40);
      v27 = *(_QWORD *)(a1 + 48);
      v26 = *(_QWORD *)(a1 + 56);
      v28[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(Src, v15);
    v17 = v9 | PhysicalToLogicalDPIPoint(&Src, &Src, 0LL, &DPITransformationMonitor);
    v16 = PhysicalToLogicalDPIPoint(&v26, &v26, 0LL, &DPITransformationMonitor) | v17;
    if ( a4 == 2 || a4 == 5 )
    {
      v20 = PhysicalToLogicalDPIRect(&v30, &v30, 0LL, &DPITransformationMonitor) | v16;
      v16 = PhysicalToLogicalDPIRect(&v31, &v31, 0LL, &DPITransformationMonitor) | v20;
    }
    if ( ***(_DWORD ***)(W32GetUserSessionState(v19, v18) + 57008) > 1u
      && a3
      && !*(_DWORD *)(*(_QWORD *)(a3 + 16) + 1336LL)
      && *(_DWORD *)(a3 + 24) != 7 )
    {
      v29 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers(&v29, DPITransformationMonitor, &v27, v28);
      v16 = 1;
    }
  }
  if ( a4 == 1 )
  {
    v21 = 96LL;
  }
  else
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        v21 = 120LL;
        goto LABEL_26;
      }
      if ( a4 != 5 )
      {
        v10 = 0;
        goto LABEL_30;
      }
    }
    v21 = 144LL;
  }
LABEL_26:
  if ( a5 == (_DWORD)v21 )
  {
    v22 = (void *)a6;
    if ( a6 >= MmUserProbeAddress )
      v22 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v22, (const void *)(a1 + 8), v21);
    v10 = 1;
  }
LABEL_30:
  if ( v10 )
  {
    if ( v16 )
    {
      RtlCopyVolatileMemory((void *)(a6 + 32), &Src, 8uLL);
      RtlCopyVolatileMemory((void *)(a6 + 40), &v27, 8uLL);
      RtlCopyVolatileMemory((void *)(a6 + 48), &v26, 8uLL);
      RtlCopyVolatileMemory((void *)(a6 + 56), v28, 8uLL);
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v30;
        *(_OWORD *)(a6 + 120) = v31;
      }
    }
  }
  return v10;
}
