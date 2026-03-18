/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x14020AD1C
 * Callers:
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14020A9D4 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x1400C6360 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1400E1D70 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E71A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddddddd @ 0x1400FE6A0 (WPP_RECORDER_AND_TRACE_SF_dddddddddddd.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@@Z @ 0x140131A0C (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@@Z.c)
 *     ?SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z @ 0x14014BC70 (-SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140186F30 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall CCursorClip::BoundPointToRegions(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  struct tagRECT v4; // xmm0
  char v9; // r15
  char v10; // r14
  char v11; // si
  struct tagPOINT v12; // rax
  int v13; // r8d
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rbx
  __int64 UserSessionState; // rax
  int v18; // [rsp+20h] [rbp-A9h]
  int v19; // [rsp+28h] [rbp-A1h]
  int v20; // [rsp+30h] [rbp-99h]
  int v21; // [rsp+38h] [rbp-91h]
  char v22; // [rsp+A0h] [rbp-29h]
  char v23; // [rsp+A1h] [rbp-28h]
  char v24; // [rsp+A4h] [rbp-25h]
  struct tagPOINT v25; // [rsp+A8h] [rbp-21h] BYREF
  _QWORD v26[2]; // [rsp+B0h] [rbp-19h] BYREF
  struct tagRECT *v27; // [rsp+C0h] [rbp-9h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-1h]
  struct tagRECT v29; // [rsp+D0h] [rbp+7h] BYREF

  v28 = a2;
  v4 = *(struct tagRECT *)(a1 + 48);
  v27 = (struct tagRECT *)(a1 + 48);
  *(_QWORD *)a4 = a2;
  v29 = v4;
  if ( PtInRect(&v29, a2) )
    return 0;
  v9 = 0;
  v10 = 0;
  if ( IsRectEmptyInl(&v29) )
  {
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v26);
    v11 = 1;
    v24 = 1;
    v13 = 1;
LABEL_21:
    if ( InputConfig::Mouse::RegionFromPoint(*(_QWORD *)a4, v26, v13) )
    {
      v14 = (_OWORD *)v26[0];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)v26[0];
      *(_OWORD *)(a1 + 64) = v14[1];
      *(_OWORD *)(a1 + 80) = v14[2];
      *(_OWORD *)(a1 + 96) = v14[3];
      *(_OWORD *)(a1 + 112) = v14[4];
      *(_OWORD *)(a1 + 128) = v14[5];
      *(_OWORD *)(a1 + 144) = v14[6];
      v15 = v14[7];
      v14 += 8;
      *(_OWORD *)(a1 + 160) = v15;
      *(_OWORD *)(a1 + 176) = *v14;
      *(_OWORD *)(a1 + 192) = v14[1];
      *(_OWORD *)(a1 + 208) = v14[2];
      *(_OWORD *)(a1 + 224) = v14[3];
      *(_QWORD *)(a1 + 240) = *((_QWORD *)v14 + 8);
    }
    goto LABEL_23;
  }
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v26);
  InputConfig::Mouse::RegionFromPoint(*(_QWORD *)a4, v26, 0);
  v11 = 1;
  v24 = 1;
  if ( v26[0] )
  {
    v9 = 0;
    if ( *(_QWORD *)&v29.left != *(_QWORD *)v26[0] || *(_QWORD *)&v29.right != *(_QWORD *)(v26[0] + 8LL) )
    {
      v24 = 1;
      v10 = 1;
    }
  }
  else
  {
    v9 = 1;
  }
  v12 = *(struct tagPOINT *)a4;
  v25 = *(struct tagPOINT *)a4;
  if ( !v26[0]
    && (a3 & 4) != 0
    && CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
         (CCursorClip::DeadzoneJumping *)(a1 + 272),
         v12,
         &v29,
         &v25) )
  {
    v10 = 1;
  }
  else if ( !v10 )
  {
    goto LABEL_17;
  }
  if ( (a3 & 1) != 0 && CCursorClip::ApplySpeedBumpAndCornerLock((CCursorClip *)a1, (struct tagPOINT *)a4) )
  {
    InputTraceLogging::Cursor::SpeedBumpCornerLock((const struct tagPOINT *)a4);
    goto LABEL_18;
  }
LABEL_17:
  *(struct tagPOINT *)a4 = v25;
LABEL_18:
  if ( !PtInRect(&v29, *(_QWORD *)a4) )
  {
    v13 = 0;
    goto LABEL_21;
  }
LABEL_23:
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v26[1]);
  v16 = *(_QWORD *)a4;
  v25 = *(struct tagPOINT *)a4;
  CCursorClip::ClipPointToRect(v25, v27, (struct tagPOINT *)a4);
  v22 = 0;
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v9 )
    {
      if ( !v10 )
      {
        if ( (_DWORD)v16 != *(_DWORD *)a4 || (v22 = 0, v25.y != *(_DWORD *)(a4 + 4)) )
          v22 = 1;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v11 = 0;
    v24 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_dddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(UserSessionState + 69400),
      v18,
      v19,
      v20,
      v21);
  }
  return v22;
}
