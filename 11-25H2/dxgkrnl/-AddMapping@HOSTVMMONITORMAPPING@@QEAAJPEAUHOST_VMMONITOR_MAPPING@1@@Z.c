/*
 * XREFs of ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078268
 * Callers:
 *     _lambda_7c63a497f6cae7dbe38226205c3cc046_::operator() @ 0x140214728 (_lambda_7c63a497f6cae7dbe38226205c3cc046_--operator().c)
 *     _lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::operator() @ 0x140214994 (_lambda_f4238eedaddfdd5e0dcb8daad31e4c10_--operator().c)
 * Callees:
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014BE0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035A50 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140036574 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x140052A6C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___ @ 0x140077794 (HOSTVMMONITORMAPPING--IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___ @ 0x1400779BC (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___ @ 0x140077D04 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___.c)
 *     Feature_4071921976__private_IsEnabledDeviceUsageNoInline @ 0x1400788EC (Feature_4071921976__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x1400789D8 (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401EE29C (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402D57C8 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14032AC0C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::AddMapping(KSPIN_LOCK *this, const struct _LUID *a2)
{
  struct DXGADAPTER *v4; // rdi
  int SourceConnectedToTargetInClientVidPn; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r14d
  HOST_VMMONITOR_MAPPING_ENTRY *v12; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v13; // rax
  KSPIN_LOCK v14; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rax
  unsigned int v16; // edx
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // r15
  int v20; // eax
  char v22; // [rsp+50h] [rbp-B0h] BYREF
  HOST_VMMONITOR_MAPPING_ENTRY *v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-9Ch] BYREF
  struct DXGADAPTER *v26[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[24]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v28[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+D0h] [rbp-30h]
  _BYTE v32[48]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v33[144]; // [rsp+110h] [rbp+10h] BYREF

  v26[0] = 0LL;
  v23 = 0LL;
  v24 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v26, a2);
  v4 = v26[0];
  if ( !v26[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry3(3LL, a2->LowPart, a2->HighPart, -1073741585LL);
    WdLogGlobalForLineNumber = 322;
    goto LABEL_54;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27, v26[0], 1);
  if ( *((_BYTE *)v4 + 3017) || (v9 = *((_DWORD *)v4 + 50), v4 = v26[0], v9 != 1) )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry2(3LL, v4, -1073741585LL);
    WdLogGlobalForLineNumber = 331;
    goto LABEL_53;
  }
  if ( !*((_QWORD *)v26[0] + 390) )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry2(3LL, v26[0], -1073741585LL);
    WdLogGlobalForLineNumber = 339;
LABEL_53:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    goto LABEL_54;
  }
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v26[0], a2[1].LowPart, &v24);
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741584;
    WdLogSingleEntry3(3LL, v4, a2[1].LowPart, -1073741584LL);
    WdLogGlobalForLineNumber = 348;
    goto LABEL_53;
  }
  v11 = v24;
  if ( *(_QWORD *)&a2[4] && !DXGADAPTER::IsVSyncAvailable(v4, v24) )
  {
    SourceConnectedToTargetInClientVidPn = -1071775738;
    WdLogSingleEntry3(4LL, v4, v11, -1071775738LL);
    WdLogGlobalForLineNumber = 356;
    goto LABEL_53;
  }
  v12 = (HOST_VMMONITOR_MAPPING_ENTRY *)operator new(0x60uLL, 0x4B677844u, 64LL, v10);
  if ( !v12 )
  {
    v23 = 0LL;
    SourceConnectedToTargetInClientVidPn = -1073741801;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 365;
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, L"Failed to allocate new entry", 365LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_53;
  }
  *((_QWORD *)v12 + 9) = 0LL;
  v23 = v12;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v32, this + 2, 1);
  v25 = 0;
  v28[0] = &v25;
  v22 = 0;
  v28[1] = &v22;
  v28[2] = a2;
  HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___((_QWORD **)this, (__int64)v28);
  if ( v25 >= 0x11 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741756;
    WdLogSingleEntry2(3LL, *(_QWORD *)&a2[2], -1073741756LL);
    WdLogGlobalForLineNumber = 414;
  }
  else if ( v22 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741723;
    WdLogSingleEntry4(3LL, v4, a2[1].LowPart, *(_QWORD *)&a2[2], -1073741723LL);
    WdLogGlobalForLineNumber = 408;
  }
  else
  {
    *((_DWORD *)v23 + 16) = v11;
    v13 = v23;
    *((_OWORD *)v23 + 1) = *(_OWORD *)&a2->LowPart;
    *((_OWORD *)v13 + 2) = *(_OWORD *)&a2[2].LowPart;
    *((_OWORD *)v13 + 3) = *(_OWORD *)&a2[4].LowPart;
    v14 = *this;
    v15 = v23;
    if ( *(KSPIN_LOCK **)(*this + 8) != this )
      __fastfail(3u);
    *(_QWORD *)v23 = v14;
    *((_QWORD *)v15 + 1) = this;
    *(_QWORD *)(v14 + 8) = v15;
    *this = (KSPIN_LOCK)v15;
  }
  if ( (unsigned int)Feature_4071921976__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
    {
      v29 = *((_OWORD *)v23 + 1);
      v30 = *((_OWORD *)v23 + 2);
      v31 = *((_OWORD *)v23 + 3);
      DXGADAPTER_REFERENCE::Assign((HOST_VMMONITOR_MAPPING_ENTRY *)((char *)v23 + 72), v4);
      if ( *((_QWORD *)v23 + 6) )
        DXGADAPTER::IncrementVSyncWaiter(v4, v11);
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v32);
  if ( (unsigned int)Feature_4071921976__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
      goto LABEL_29;
  }
  else if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    DXGADAPTER_REFERENCE::Assign((HOST_VMMONITOR_MAPPING_ENTRY *)((char *)v23 + 72), v4);
    goto LABEL_29;
  }
  if ( v23 )
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v23, v16);
  v23 = 0LL;
LABEL_29:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  if ( (unsigned int)Feature_4071921976__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SourceConnectedToTargetInClientVidPn >= 0 && (_QWORD)v31 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v4, 0LL);
      SourceConnectedToTargetInClientVidPn = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
      {
LABEL_40:
        HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___(this, (__int64)&v29);
        goto LABEL_41;
      }
      v17 = *((_QWORD *)v4 + 391);
      if ( v17 )
      {
        if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                                *(VIDSCH_EXPORT **)(v17 + 736),
                                *(struct _VIDSCH_GLOBAL **)(v17 + 744),
                                v11) )
          goto LABEL_41;
        v18 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(*(_QWORD *)(v17 + 736), *(_QWORD *)(v17 + 744), 4LL, 1, v11);
      }
      else
      {
        v18 = ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v4 + 390), v11);
      }
      SourceConnectedToTargetInClientVidPn = v18;
      if ( v18 < 0 )
        goto LABEL_40;
LABEL_41:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    }
  }
  else if ( SourceConnectedToTargetInClientVidPn >= 0 && *((_QWORD *)v23 + 6) )
  {
    DXGADAPTER::IncrementVSyncWaiter(v4, v11);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v4, 0LL);
    SourceConnectedToTargetInClientVidPn = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
    {
      v19 = *((_QWORD *)v4 + 391);
      if ( v19 )
      {
        if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                                *(VIDSCH_EXPORT **)(v19 + 736),
                                *(struct _VIDSCH_GLOBAL **)(v19 + 744),
                                v11) )
          goto LABEL_41;
        v20 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(*(_QWORD *)(v19 + 736), *(_QWORD *)(v19 + 744), 4LL, 1, v11);
      }
      else
      {
        v20 = ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v4 + 390), v11);
      }
      SourceConnectedToTargetInClientVidPn = v20;
      if ( v20 >= 0 )
        goto LABEL_41;
    }
    HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___(this, (__int64 *)&v23);
    goto LABEL_41;
  }
LABEL_54:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    McTemplateK0xqppq_EtwWriteTransfer(
      v7,
      v6,
      v8,
      *a2,
      a2[1].LowPart,
      *(_QWORD *)&a2[4],
      *(_QWORD *)&a2[2],
      SourceConnectedToTargetInClientVidPn);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v26, 0LL);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
