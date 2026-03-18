/*
 * XREFs of _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401C21B0
 * Callers:
 *     _lambda_28a548c3cef59bc16f2e75f291da39e4_::_lambda_invoker_cdecl_ @ 0x14006D3E0 (_lambda_28a548c3cef59bc16f2e75f291da39e4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14002C700 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140036AC4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetMonitorOrientationFromGdiRotation@@YA_NKAEAW4_D3DKMDT_MONITOR_ORIENTATION@@@Z @ 0x14004E9EC (-GetMonitorOrientationFromGdiRotation@@YA_NKAEAW4_D3DKMDT_MONITOR_ORIENTATION@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1401FCC38 (DxgkCheckAdapterPnPTransitionDoneInSession.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402E19E4 (IsVirtualizationDisabledForTarget.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402E2B94 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14033C188 (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z @ 0x140378C18 (-MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403A5040 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403A9710 (-MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall lambda_eeea5582e93711493668b9eafd12873f_::operator()(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  unsigned int v21; // edx
  unsigned int v22; // r8d
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // r8d
  int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rbx
  _QWORD *v33; // rbx
  _QWORD *v34; // r13
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  _DWORD *v36; // r12
  int v37; // edx
  __int64 v38; // rsi
  __int64 v39; // rdx
  _OWORD *v40; // rax
  _OWORD *v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // rax
  unsigned __int8 IsTargetForceable; // al
  __int64 v54; // rdi
  DXGMONITOR *v55; // rdi
  __int64 v56; // rax
  struct _DEVICE_OBJECT *v57; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // r15d
  int v64; // eax
  unsigned int v65; // eax
  int v66; // ecx
  bool v67; // cf
  int v68; // eax
  char v70; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+31h] [rbp-CFh] BYREF
  _BYTE v72[2]; // [rsp+32h] [rbp-CEh] BYREF
  int v73; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v74; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v75; // [rsp+3Ch] [rbp-C4h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v77; // [rsp+48h] [rbp-B8h]
  __int64 v78; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v79[2]; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v80[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v81[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v82[576]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v83[1104]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD v84[108]; // [rsp+730h] [rbp+630h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v81,
    (struct DXGADAPTER *)a2,
    1);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
  if ( *(_DWORD *)(a2 + 200) == 1
    && (unsigned __int8)DxgkCheckAdapterPnPTransitionDoneInSession((struct DXGADAPTER *)a2)
    && *(_QWORD *)(a2 + 3120) )
  {
    v4 = *(_DWORD **)a1;
    v77 = *(_QWORD *)(a1 + 8);
    v5 = v77;
    v6 = (unsigned int)*v4;
    *v4 = v6 + 1;
    if ( *(_DWORD *)(*(_QWORD *)v5 + 8LL) >= (unsigned int)(v6 + 1) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v5 + 16LL) + 572 * v6;
      memset(v82, 0, 0x23CuLL);
      v8 = v7;
      v9 = v82;
      v10 = 4LL;
      do
      {
        v11 = *((_OWORD *)v9 + 1);
        *(_OWORD *)v8 = *(_OWORD *)v9;
        v12 = *((_OWORD *)v9 + 2);
        *(_OWORD *)(v8 + 16) = v11;
        v13 = *((_OWORD *)v9 + 3);
        *(_OWORD *)(v8 + 32) = v12;
        v14 = *((_OWORD *)v9 + 4);
        *(_OWORD *)(v8 + 48) = v13;
        v15 = *((_OWORD *)v9 + 5);
        *(_OWORD *)(v8 + 64) = v14;
        v16 = *((_OWORD *)v9 + 6);
        *(_OWORD *)(v8 + 80) = v15;
        v17 = *((_OWORD *)v9 + 7);
        v9 += 128;
        *(_OWORD *)(v8 + 96) = v16;
        v8 += 128LL;
        *(_OWORD *)(v8 - 16) = v17;
        --v10;
      }
      while ( v10 );
      v18 = *((_QWORD *)v9 + 6);
      v19 = *((_OWORD *)v9 + 1);
      *(_OWORD *)v8 = *(_OWORD *)v9;
      v20 = *((_OWORD *)v9 + 2);
      *(_OWORD *)(v8 + 16) = v19;
      *(_OWORD *)(v8 + 32) = v20;
      *(_QWORD *)(v8 + 48) = v18;
      *(_DWORD *)(v8 + 56) = *((_DWORD *)v9 + 14);
      *(_QWORD *)(v7 + 4) = *(_QWORD *)(a2 + 412);
      *(_QWORD *)(v7 + 12) = 0LL;
      if ( (*(_DWORD *)(a2 + 444) & 0x100) != 0 )
      {
        v79[0] = 0LL;
        if ( (int)DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)a2, 0, (struct DXGADAPTER_REFERENCE *)v79) >= 0 )
          *(_QWORD *)(v7 + 12) = *(_QWORD *)(v79[0] + 412LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v79, 0LL);
      }
      RtlStringCbCopyNW(
        (char *)(v7 + 20),
        (__int64)v9,
        *(char **)(*(_QWORD *)(a2 + 1928) + 8LL),
        **(unsigned __int16 **)(a2 + 1928));
      v21 = *(_DWORD *)(v7 + 568) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 3120) + 289LL) != 0 ? 2 : 0);
      *(_DWORD *)(v7 + 568) = v21;
      v22 = v21 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 3120) + 290LL) != 0);
      *(_DWORD *)(v7 + 568) = v22;
      v23 = *(_QWORD *)(a2 + 3120);
      if ( *(_BYTE *)(v23 + 289) && *(_BYTE *)(v23 + 290)
        || (v24 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v24 = 4;
      }
      v25 = v24 | v22 & 0xFFFFFFFB;
      *(_DWORD *)(v7 + 568) = v25;
      *(_DWORD *)(v7 + 540) = *(_DWORD *)(a2 + 3004);
      *(_DWORD *)(v7 + 544) = *(_DWORD *)(*(_QWORD *)(a2 + 3120) + 96LL);
      *(_DWORD *)(v7 + 548) = *(_DWORD *)(a2 + 420);
      *(_DWORD *)(v7 + 552) = *(_DWORD *)(a2 + 424);
      *(_DWORD *)(v7 + 556) = *(_DWORD *)(a2 + 428);
      *(_DWORD *)(v7 + 560) = *(_DWORD *)(a2 + 432);
      *(_DWORD *)(v7 + 564) = *(_DWORD *)(a2 + 436);
      v26 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 444))) & 8;
      *(_DWORD *)(v7 + 568) = v26;
      v27 = v26 & 0xFFFFFFEF | (8 * (*(_DWORD *)(a2 + 444) & 2));
      *(_DWORD *)(v7 + 568) = v27;
      v28 = v27 & 0xFFFFFFDF | (4 * (*(_DWORD *)(a2 + 444) & 8));
      *(_DWORD *)(v7 + 568) = v28;
      v29 = v28 & 0xFFFFFFBF | (4 * (*(_DWORD *)(a2 + 444) & 0x10));
      *(_DWORD *)(v7 + 568) = v29;
      v30 = v29 & 0xFFFFFF7F | (4 * (*(_DWORD *)(a2 + 444) & 0x20));
      *(_DWORD *)(v7 + 568) = v30;
      v31 = *(_DWORD *)(a2 + 444) & 0x100 | v30 & 0xFFFFFEFF;
      *(_DWORD *)(v7 + 568) = v31;
      *(_DWORD *)(v7 + 568) = v31 & 0xFFFFFDFF | (*(_DWORD *)(a2 + 444) >> 9) & 0x200;
    }
    v32 = *(_QWORD *)(*(_QWORD *)(a2 + 3120) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v78, v32);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v32 + 120) + 72LL));
    v33 = *(_QWORD **)(v32 + 120);
    v34 = (_QWORD *)v33[3];
    if ( v34 != v33 + 3 )
    {
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v34 - 1);
      if ( NextTarget )
      {
        v36 = *(_DWORD **)(a1 + 16);
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)v5 + 28LL) < ++*v36 )
            goto LABEL_57;
          v37 = *((_DWORD *)NextTarget + 6);
          v70 = 0;
          v71 = 0;
          v72[0] = 0;
          IsVirtualizationDisabledForTarget(a2, v37, (unsigned int)&v70, (unsigned int)&v71, (__int64)v72);
          v38 = *(_QWORD *)(*(_QWORD *)v5 + 40LL) + 1096LL * (unsigned int)(*v36 - 1);
          memset(v83, 0, 0x448uLL);
          v39 = 8LL;
          v40 = v83;
          v41 = (_OWORD *)v38;
          do
          {
            v42 = v40[1];
            *v41 = *v40;
            v43 = v40[2];
            v41[1] = v42;
            v44 = v40[3];
            v41[2] = v43;
            v45 = v40[4];
            v41[3] = v44;
            v46 = v40[5];
            v41[4] = v45;
            v47 = v40[6];
            v41[5] = v46;
            v48 = v40[7];
            v40 += 8;
            v41[6] = v47;
            v41 += 8;
            *(v41 - 1) = v48;
            --v39;
          }
          while ( v39 );
          v49 = v40[1];
          *v41 = *v40;
          v50 = v40[2];
          v41[1] = v49;
          v51 = v40[3];
          v52 = *((_QWORD *)v40 + 8);
          v41[2] = v50;
          v41[3] = v51;
          *((_QWORD *)v41 + 8) = v52;
          *(_QWORD *)(v38 + 4) = *(_QWORD *)(a2 + 412);
          *(_DWORD *)(v38 + 12) = *((_DWORD *)NextTarget + 6);
          *(_DWORD *)(v38 + 1056) = *((_DWORD *)NextTarget + 23);
          *(_DWORD *)(v38 + 1088) = (v72[0] == 0 ? 0x20 : 0) | (v71 == 0 ? 2 : 0) | (v70 == 0 ? 4 : 0) | *(_DWORD *)(v38 + 1088) & 0xFFFFFFD8 | (*((_QWORD *)NextTarget + 14) != 0LL);
          IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable(NextTarget);
          *(_DWORD *)(v38 + 1060) = 0;
          *(_DWORD *)(v38 + 1088) = *(_DWORD *)(v38 + 1088) & 0xFFFFFFAF | (IsTargetForceable != 0 ? 0x10 : 0);
          *(_DWORD *)(v38 + 1064) = *((_DWORD *)NextTarget + 31);
          *(_DWORD *)(v38 + 1068) = *((_DWORD *)NextTarget + 32);
          *(_DWORD *)(v38 + 1072) = *((_DWORD *)NextTarget + 33);
          *(_DWORD *)(v38 + 1076) = *((_DWORD *)NextTarget + 25);
          *(_DWORD *)(v38 + 1080) = 1;
          *(_DWORD *)(v38 + 1084) = 1;
          *(_DWORD *)(v38 + 1092) = *((_DWORD *)NextTarget + 154);
          v54 = *((_QWORD *)NextTarget + 14);
          if ( !v54 )
            goto LABEL_57;
          memset(v84, 0, 0x1A4uLL);
          MONITOR_MGR::AcquireMonitorShared(v80, v54);
          v55 = v80[0];
          if ( !v80[0] )
          {
            WdLogSingleEntry1(2LL, -1073741275LL);
            WdLogGlobalForLineNumber = 4181;
            CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v80);
            goto LABEL_41;
          }
          memset(&v84[41], 0, 0x100uLL);
          v56 = *((_QWORD *)v80[0] + 25);
          v57 = *(struct _DEVICE_OBJECT **)(v56 + 8);
          if ( !v57 || !*(_QWORD *)(v56 + 56) )
            goto LABEL_32;
          SymbolicLinkList = 0LL;
          DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v57, 0, &SymbolicLinkList);
          v63 = DeviceInterfaces;
          if ( DeviceInterfaces >= 0 )
          {
            v63 = RtlStringCchCopyW((char *)&v84[41], 128LL, (char *)SymbolicLinkList);
            ExFreePoolWithTag(SymbolicLinkList, 0);
            if ( v63 >= 0 )
            {
              HIWORD(v84[41]) = 92;
LABEL_32:
              v64 = DXGMONITOR::_FillMonitorDeviceInfo(v55, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v84);
              LODWORD(v55) = 0;
              v63 = 0;
              if ( v64 != -1071841279 )
                v63 = v64;
              if ( v63 >= 0 && (v84[5] & 1) == 0 && !LOWORD(v84[9]) )
                v84[5] |= 2u;
              goto LABEL_38;
            }
          }
          else
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v60, v59, v61, v62) + 24) = DeviceInterfaces;
            WdLogGlobalForLineNumber = 4200;
          }
          LODWORD(v55) = 0;
LABEL_38:
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v80);
          if ( v63 >= 0 )
            RtlStringCchCopyW((char *)(v38 + 536), 260LL, (char *)&v84[41]);
          v5 = v77;
LABEL_41:
          MonitorGetCCDMonitorID(*((struct HDXGMONITOR__ **)NextTarget + 14), 0x104u, (unsigned __int16 *)(v38 + 16));
          v65 = *(_DWORD *)(v38 + 1088) & 0xFFFFFFF7;
          v66 = (*((_DWORD *)NextTarget + 139) >> 3) & 8;
          v73 = (int)v55;
          *(_DWORD *)(v38 + 1088) = v65 | v66;
          if ( (int)MonitorGetMonitorType(
                      *((struct HDXGMONITOR__ **)NextTarget + 14),
                      (enum _DMM_VIDPN_MONITOR_TYPE *)&v73) < 0 )
            goto LABEL_52;
          if ( v73 != 1 )
          {
            switch ( v73 )
            {
              case 2:
                *(_DWORD *)(v38 + 1060) = 2;
                goto LABEL_52;
              case 3:
                *(_DWORD *)(v38 + 1060) = 3;
                goto LABEL_52;
              case 4:
                *(_DWORD *)(v38 + 1060) = 4;
                goto LABEL_52;
              case 5:
                *(_DWORD *)(v38 + 1060) = 5;
                goto LABEL_52;
            }
          }
          *(_DWORD *)(v38 + 1060) = 1;
LABEL_52:
          v67 = *((_BYTE *)NextTarget + 405) != 0;
          v74 = (unsigned int)v55;
          v68 = *(_DWORD *)(v38 + 1088);
          v75 = (unsigned int)v55;
          *(_DWORD *)(v38 + 1088) = v68 & 0xFFFFFFBF | (v67 ? 0x40 : 0);
          if ( MonitorGetMonitorOrientationsFromMonitor(*((struct HDXGMONITOR__ **)NextTarget + 14), &v74, &v75) < 0 )
          {
            *(_DWORD *)(v38 + 1080) = 1;
LABEL_56:
            *(_DWORD *)(v38 + 1084) = (*(_DWORD *)(v38 + 1088) & 0x40) != 0 ? 4 : 1;
            goto LABEL_57;
          }
          GetMonitorOrientationFromGdiRotation(v74, (enum _D3DKMDT_MONITOR_ORIENTATION *)(v38 + 1080));
          if ( !GetMonitorOrientationFromGdiRotation(v75, (enum _D3DKMDT_MONITOR_ORIENTATION *)(v38 + 1084)) )
            goto LABEL_56;
LABEL_57:
          NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v33, NextTarget);
        }
        while ( NextTarget );
      }
    }
    if ( v33 )
      ReferenceCounted::Release((ReferenceCounted *)(v33 + 8));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v78 + 40));
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
  return 0LL;
}
