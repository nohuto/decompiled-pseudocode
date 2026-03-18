/*
 * XREFs of ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078A58
 * Callers:
 *     _lambda_30b46b3e1498d0fd094f88f23b33fdcf_::operator() @ 0x14021AD34 (_lambda_30b46b3e1498d0fd094f88f23b33fdcf_--operator().c)
 *     _lambda_f93b6c6ee9b6b8901d0816f359f99208_::operator() @ 0x14021AEC4 (_lambda_f93b6c6ee9b6b8901d0816f359f99208_--operator().c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400119E0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035C20 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140036564 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14005271C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___ @ 0x1400781D0 (HOSTVMMONITORMAPPING--IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_93900af0e7d1f11b6625ece44ce405af___ @ 0x140078590 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_93900af0e7d1f11b6625ece44ce405af___.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x140079050 (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401F3C40 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14030D2BC (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::AddMapping(KSPIN_LOCK *this, const struct _LUID *a2)
{
  struct DXGADAPTER *v4; // rsi
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  struct DXGADAPTER *v9; // r14
  int SourceConnectedToTargetInClientVidPn; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rax
  KSPIN_LOCK v13; // rsi
  KSPIN_LOCK v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rsi
  int v17; // eax
  char v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v21; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  _BYTE v28[48]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v29[144]; // [rsp+110h] [rbp+10h] BYREF

  v22[0] = 0LL;
  v20 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v22, a2);
  v4 = v22[0];
  if ( !v22[0] )
  {
    v5 = -1073741585;
    WdLogSingleEntry3(3LL, a2->LowPart, a2->HighPart, -1073741585LL);
    WdLogGlobalForLineNumber = 321;
    goto LABEL_39;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23, v22[0], 1);
  if ( *((_BYTE *)v4 + 3017) )
    goto LABEL_37;
  if ( *((_DWORD *)v4 + 50) != 1 )
  {
    v4 = v22[0];
LABEL_37:
    v5 = -1073741585;
    WdLogSingleEntry2(3LL, v4, -1073741585LL);
    WdLogGlobalForLineNumber = 330;
    goto LABEL_38;
  }
  v9 = v22[0];
  if ( !*((_QWORD *)v22[0] + 390) )
  {
    v5 = -1073741585;
    WdLogSingleEntry2(3LL, v22[0], -1073741585LL);
    WdLogGlobalForLineNumber = 338;
LABEL_38:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    goto LABEL_39;
  }
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v22[0], a2[1].LowPart, &v20);
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    v5 = -1073741584;
    WdLogSingleEntry3(3LL, v9, a2[1].LowPart, -1073741584LL);
    WdLogGlobalForLineNumber = 347;
    goto LABEL_38;
  }
  v11 = v20;
  if ( *(_QWORD *)&a2[4] && !DXGADAPTER::IsVSyncAvailable(v9, v20) )
  {
    v5 = -1071775738;
    WdLogSingleEntry3(4LL, v9, v11, -1071775738LL);
    WdLogGlobalForLineNumber = 355;
    goto LABEL_38;
  }
  v12 = operator new(0x60uLL, 0x4B677844u, 64LL);
  v13 = v12;
  if ( !v12 )
  {
    v5 = -1073741801;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 364;
    DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, L"Failed to allocate new entry", 364LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_38;
  }
  *(_QWORD *)(v12 + 72) = 0LL;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v28, this + 2, 1);
  v21 = 0;
  v24[0] = &v21;
  v19 = 0;
  v24[1] = &v19;
  v24[2] = a2;
  HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___((_QWORD **)this, (__int64)v24);
  if ( v21 >= 0x11 )
  {
    v5 = -1073741756;
    WdLogSingleEntry2(3LL, *(_QWORD *)&a2[2], -1073741756LL);
    WdLogGlobalForLineNumber = 413;
  }
  else
  {
    if ( v19 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741723;
      WdLogSingleEntry4(3LL, v9, a2[1].LowPart, *(_QWORD *)&a2[2], -1073741723LL);
      WdLogGlobalForLineNumber = 407;
    }
    else
    {
      *(_DWORD *)(v13 + 64) = v11;
      *(_OWORD *)(v13 + 16) = *(_OWORD *)&a2->LowPart;
      *(_OWORD *)(v13 + 32) = *(_OWORD *)&a2[2].LowPart;
      *(_OWORD *)(v13 + 48) = *(_OWORD *)&a2[4].LowPart;
      v14 = *this;
      if ( *(KSPIN_LOCK **)(*this + 8) != this )
        __fastfail(3u);
      *(_QWORD *)v13 = v14;
      *(_QWORD *)(v13 + 8) = this;
      *(_QWORD *)(v14 + 8) = v13;
      *this = v13;
    }
    v5 = SourceConnectedToTargetInClientVidPn;
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
    {
      v25 = *(_OWORD *)(v13 + 16);
      v26 = *(_OWORD *)(v13 + 32);
      v27 = *(_OWORD *)(v13 + 48);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)(v13 + 72), v9);
      if ( *(_QWORD *)(v13 + 48) )
        DXGADAPTER::IncrementVSyncWaiter(v9, v11);
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v28);
  if ( v5 < 0 )
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'((HOST_VMMONITOR_MAPPING_ENTRY *)v13, v15);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  if ( v5 >= 0 && (_QWORD)v27 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v9, 0LL);
    v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL);
    if ( v5 < 0 )
    {
LABEL_33:
      HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_93900af0e7d1f11b6625ece44ce405af___(this, (__int64)&v25);
      goto LABEL_34;
    }
    v16 = *((_QWORD *)v9 + 391);
    if ( v16 )
    {
      if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                              *(VIDSCH_EXPORT **)(v16 + 736),
                              *(struct _VIDSCH_GLOBAL **)(v16 + 744),
                              v11) )
        goto LABEL_34;
      v17 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(*(_QWORD *)(v16 + 736), *(_QWORD *)(v16 + 744), 4LL, 1, v11);
    }
    else
    {
      v17 = ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v9 + 390), v11);
    }
    v5 = v17;
    if ( v17 < 0 )
      goto LABEL_33;
LABEL_34:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
  }
LABEL_39:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    McTemplateK0xqppq_EtwWriteTransfer(v7, v6, v8, *a2, a2[1].LowPart, *(_QWORD *)&a2[4], *(_QWORD *)&a2[2], v5);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
  return (unsigned int)v5;
}
