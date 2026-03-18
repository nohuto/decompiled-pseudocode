/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x14020AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x1400C6360 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     ?ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z @ 0x1400E1D10 (-ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E71A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionReason@@KJ@Z @ 0x1400F028C (-UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionRe.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14020A9D4 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_DWORD *__fastcall CCursorClip::BoundPoint(
        __int64 a1,
        _DWORD *a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5,
        struct tagPOINT *a6)
{
  __int64 v10; // rcx
  struct tagPOINT v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  _OWORD *v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  struct tagPOINT v39; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v40[2]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v41[12]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+110h] [rbp+10h]
  _BYTE v43[208]; // [rsp+120h] [rbp+20h] BYREF

  v39 = a3;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 32));
  *a2 = 0;
  a2[1] = 0;
  *a6 = a3;
  if ( (a4 & 2) != 0 )
  {
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v40);
    InputConfig::Mouse::RegionFromPoint((__int64)*a6, v40, 0);
    if ( v40[0] )
    {
      v12 = *(_OWORD *)(v40[0] + 16LL);
      v41[0] = *(_OWORD *)v40[0];
      v13 = *(_OWORD *)(v40[0] + 32LL);
      v41[1] = v12;
      v14 = *(_OWORD *)(v40[0] + 48LL);
      v41[2] = v13;
      v15 = *(_OWORD *)(v40[0] + 64LL);
      v41[3] = v14;
      v16 = *(_OWORD *)(v40[0] + 80LL);
      v41[4] = v15;
      v17 = *(_OWORD *)(v40[0] + 96LL);
      v41[5] = v16;
      v18 = *(_OWORD *)(v40[0] + 112LL);
      v41[6] = v17;
      v41[7] = v18;
      v19 = *(_OWORD *)(v40[0] + 144LL);
      v41[8] = *(_OWORD *)(v40[0] + 128LL);
      v20 = *(_OWORD *)(v40[0] + 160LL);
      v41[9] = v19;
      v21 = *(_OWORD *)(v40[0] + 176LL);
      v22 = *(_QWORD *)(v40[0] + 192LL);
      v41[10] = v20;
      v41[11] = v21;
      v42 = v22;
      v23 = v41;
    }
    else
    {
      memset(v43, 0, 0xC8uLL);
      v23 = v43;
    }
    v24 = v23[1];
    *(_OWORD *)(a1 + 48) = *v23;
    v25 = v23[2];
    *(_OWORD *)(a1 + 64) = v24;
    v26 = v23[3];
    *(_OWORD *)(a1 + 80) = v25;
    v27 = v23[4];
    *(_OWORD *)(a1 + 96) = v26;
    v28 = v23[5];
    *(_OWORD *)(a1 + 112) = v27;
    v29 = v23[6];
    *(_OWORD *)(a1 + 128) = v28;
    v30 = v23[7];
    v31 = v23 + 8;
    *(_OWORD *)(a1 + 144) = v29;
    v32 = *v31;
    *(_OWORD *)(a1 + 160) = v30;
    v33 = v31[1];
    *(_OWORD *)(a1 + 176) = v32;
    v34 = v31[2];
    *(_OWORD *)(a1 + 192) = v33;
    v35 = v31[3];
    v36 = *((_QWORD *)v31 + 8);
    *(_OWORD *)(a1 + 208) = v34;
    *(_OWORD *)(a1 + 224) = v35;
    *(_QWORD *)(a1 + 240) = v36;
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v40[1]);
  }
  else
  {
    if ( (a4 & 1) != 0 && *(_DWORD *)(W32GetUserSessionState(v10) + 67488) )
      a4 |= 4u;
    if ( CCursorClip::ApplyAppClip((CCursorClip *)a1, *a6, a6) )
    {
      *a2 = 1;
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( a3.x != a6->x )
          a2[1] |= 1u;
        if ( v39.y != a6->y )
          a2[1] |= 2u;
      }
    }
    v11 = *a6;
    v38 = 0;
    if ( CCursorClip::ApplySystemClips((CCursorClip *)a1, v11, a4, a6, &v38) )
    {
      *a2 = 2;
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
        a2[1] = v38;
    }
  }
  InputTraceLogging::Mouse::UpdateCursorPos((int *)&v39, (int *)a6, a5, a4, *(_DWORD *)(a1 + 248));
  CPushLock::ReleaseLock((CPushLock *)(a1 + 32));
  return a2;
}
