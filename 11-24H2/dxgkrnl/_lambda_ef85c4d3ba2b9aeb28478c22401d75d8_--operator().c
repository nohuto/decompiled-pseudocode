/*
 * XREFs of _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401C2A10
 * Callers:
 *     _lambda_41398c31cc0f700d760001d873ef57ff_::_lambda_invoker_cdecl_ @ 0x14006D420 (_lambda_41398c31cc0f700d760001d873ef57ff_--_lambda_invoker_cdecl_.c)
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

__int64 __fastcall lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator()(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rbx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
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
  _OWORD *v40; // rcx
  _OWORD *v41; // rax
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
  unsigned __int8 IsTargetForceable; // al
  __int64 v53; // rdi
  DXGMONITOR *v54; // rdi
  __int64 v55; // rax
  struct _DEVICE_OBJECT *v56; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // r15d
  int v63; // eax
  unsigned int v64; // eax
  int v65; // ecx
  bool v66; // cf
  int v67; // eax
  char v69; // [rsp+30h] [rbp-D0h] BYREF
  char v70; // [rsp+31h] [rbp-CFh] BYREF
  _BYTE v71[2]; // [rsp+32h] [rbp-CEh] BYREF
  int v72; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v73; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v74; // [rsp+3Ch] [rbp-C4h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v78[2]; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v79[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v80[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v81[576]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v82[1088]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD v83[108]; // [rsp+720h] [rbp+620h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v80,
    (struct DXGADAPTER *)a2,
    1);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
  if ( *(_DWORD *)(a2 + 200) == 1
    && (unsigned __int8)DxgkCheckAdapterPnPTransitionDoneInSession((struct DXGADAPTER *)a2)
    && *(_QWORD *)(a2 + 3120) )
  {
    v4 = *(_DWORD **)a1;
    v76 = *(_QWORD *)(a1 + 8);
    v5 = v76;
    v6 = (unsigned int)*v4;
    *v4 = v6 + 1;
    if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL) >= (unsigned int)(v6 + 1) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v5 + 8LL) + 568 * v6;
      memset(v81, 0, 0x238uLL);
      v8 = (_OWORD *)v7;
      v9 = v81;
      v10 = 4LL;
      do
      {
        v11 = v9[1];
        *v8 = *v9;
        v12 = v9[2];
        v8[1] = v11;
        v13 = v9[3];
        v8[2] = v12;
        v14 = v9[4];
        v8[3] = v13;
        v15 = v9[5];
        v8[4] = v14;
        v16 = v9[6];
        v8[5] = v15;
        v17 = v9[7];
        v9 += 8;
        v8[6] = v16;
        v8 += 8;
        *(v8 - 1) = v17;
        --v10;
      }
      while ( v10 );
      v18 = v9[1];
      *v8 = *v9;
      v19 = v9[2];
      v20 = *((_QWORD *)v9 + 6);
      v8[1] = v18;
      v8[2] = v19;
      *((_QWORD *)v8 + 6) = v20;
      *(_QWORD *)v7 = *(_QWORD *)(a2 + 412);
      *(_QWORD *)(v7 + 8) = 0LL;
      if ( (*(_DWORD *)(a2 + 444) & 0x100) != 0 )
      {
        v78[0] = 0LL;
        if ( (int)DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)a2, 0, (struct DXGADAPTER_REFERENCE *)v78) >= 0 )
          *(_QWORD *)(v7 + 8) = *(_QWORD *)(v78[0] + 412LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v78, 0LL);
      }
      RtlStringCbCopyNW(
        (char *)(v7 + 16),
        v10,
        *(char **)(*(_QWORD *)(a2 + 1928) + 8LL),
        **(unsigned __int16 **)(a2 + 1928));
      v21 = *(_DWORD *)(v7 + 564) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 3120) + 289LL) != 0 ? 2 : 0);
      *(_DWORD *)(v7 + 564) = v21;
      v22 = v21 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 3120) + 290LL) != 0);
      *(_DWORD *)(v7 + 564) = v22;
      v23 = *(_QWORD *)(a2 + 3120);
      if ( *(_BYTE *)(v23 + 289) && *(_BYTE *)(v23 + 290)
        || (v24 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v24 = 4;
      }
      v25 = v24 | v22 & 0xFFFFFFFB;
      *(_DWORD *)(v7 + 564) = v25;
      *(_DWORD *)(v7 + 536) = *(_DWORD *)(a2 + 3004);
      *(_DWORD *)(v7 + 540) = *(_DWORD *)(*(_QWORD *)(a2 + 3120) + 96LL);
      *(_DWORD *)(v7 + 544) = *(_DWORD *)(a2 + 420);
      *(_DWORD *)(v7 + 548) = *(_DWORD *)(a2 + 424);
      *(_DWORD *)(v7 + 552) = *(_DWORD *)(a2 + 428);
      *(_DWORD *)(v7 + 556) = *(_DWORD *)(a2 + 432);
      *(_DWORD *)(v7 + 560) = *(_DWORD *)(a2 + 436);
      v26 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 444))) & 8;
      *(_DWORD *)(v7 + 564) = v26;
      v27 = v26 & 0xFFFFFFEF | (8 * (*(_DWORD *)(a2 + 444) & 2));
      *(_DWORD *)(v7 + 564) = v27;
      v28 = v27 & 0xFFFFFFDF | (4 * (*(_DWORD *)(a2 + 444) & 8));
      *(_DWORD *)(v7 + 564) = v28;
      v29 = v28 & 0xFFFFFFBF | (4 * (*(_DWORD *)(a2 + 444) & 0x10));
      *(_DWORD *)(v7 + 564) = v29;
      v30 = v29 & 0xFFFFFF7F | (4 * (*(_DWORD *)(a2 + 444) & 0x20));
      *(_DWORD *)(v7 + 564) = v30;
      v31 = *(_DWORD *)(a2 + 444) & 0x100 | v30 & 0xFFFFFEFF;
      *(_DWORD *)(v7 + 564) = v31;
      *(_DWORD *)(v7 + 564) = v31 & 0xFFFFFDFF | (*(_DWORD *)(a2 + 444) >> 9) & 0x200;
    }
    v32 = *(_QWORD *)(*(_QWORD *)(a2 + 3120) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v77, v32);
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
          if ( *(_DWORD *)(*(_QWORD *)v5 + 20LL) < ++*v36 )
            goto LABEL_57;
          v37 = *((_DWORD *)NextTarget + 6);
          v69 = 0;
          v70 = 0;
          v71[0] = 0;
          IsVirtualizationDisabledForTarget(a2, v37, (unsigned int)&v69, (unsigned int)&v70, (__int64)v71);
          v38 = *(_QWORD *)(*(_QWORD *)v5 + 24LL) + 1088LL * (unsigned int)(*v36 - 1);
          memset(v82, 0, sizeof(v82));
          v39 = 8LL;
          v40 = v82;
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
          v41[2] = v50;
          v41[3] = v51;
          *(_QWORD *)v38 = *(_QWORD *)(a2 + 412);
          *(_DWORD *)(v38 + 8) = *((_DWORD *)NextTarget + 6);
          *(_DWORD *)(v38 + 1052) = *((_DWORD *)NextTarget + 23);
          *(_DWORD *)(v38 + 1084) = (v71[0] == 0 ? 0x20 : 0) | (v70 == 0 ? 2 : 0) | (v69 == 0 ? 4 : 0) | *(_DWORD *)(v38 + 1084) & 0xFFFFFFD8 | (*((_QWORD *)NextTarget + 14) != 0LL);
          IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable(NextTarget);
          *(_DWORD *)(v38 + 1056) = 0;
          *(_DWORD *)(v38 + 1084) = *(_DWORD *)(v38 + 1084) & 0xFFFFFFAF | (IsTargetForceable != 0 ? 0x10 : 0);
          *(_DWORD *)(v38 + 1060) = *((_DWORD *)NextTarget + 31);
          *(_DWORD *)(v38 + 1064) = *((_DWORD *)NextTarget + 32);
          *(_DWORD *)(v38 + 1068) = *((_DWORD *)NextTarget + 33);
          *(_DWORD *)(v38 + 1072) = *((_DWORD *)NextTarget + 25);
          *(_DWORD *)(v38 + 1076) = 1;
          *(_DWORD *)(v38 + 1080) = 1;
          v53 = *((_QWORD *)NextTarget + 14);
          if ( !v53 )
            goto LABEL_57;
          memset(v83, 0, 0x1A4uLL);
          MONITOR_MGR::AcquireMonitorShared(v79, v53);
          v54 = v79[0];
          if ( !v79[0] )
          {
            WdLogSingleEntry1(2LL, -1073741275LL);
            WdLogGlobalForLineNumber = 4181;
            CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v79);
            goto LABEL_41;
          }
          memset(&v83[41], 0, 0x100uLL);
          v55 = *((_QWORD *)v79[0] + 25);
          v56 = *(struct _DEVICE_OBJECT **)(v55 + 8);
          if ( !v56 || !*(_QWORD *)(v55 + 56) )
            goto LABEL_32;
          SymbolicLinkList = 0LL;
          DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v56, 0, &SymbolicLinkList);
          v62 = DeviceInterfaces;
          if ( DeviceInterfaces >= 0 )
          {
            v62 = RtlStringCchCopyW((char *)&v83[41], 128LL, (char *)SymbolicLinkList);
            ExFreePoolWithTag(SymbolicLinkList, 0);
            if ( v62 >= 0 )
            {
              HIWORD(v83[41]) = 92;
LABEL_32:
              v63 = DXGMONITOR::_FillMonitorDeviceInfo(v54, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v83);
              LODWORD(v54) = 0;
              v62 = 0;
              if ( v63 != -1071841279 )
                v62 = v63;
              if ( v62 >= 0 && (v83[5] & 1) == 0 && !LOWORD(v83[9]) )
                v83[5] |= 2u;
              goto LABEL_38;
            }
          }
          else
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v59, v58, v60, v61) + 24) = DeviceInterfaces;
            WdLogGlobalForLineNumber = 4200;
          }
          LODWORD(v54) = 0;
LABEL_38:
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v79);
          if ( v62 >= 0 )
            RtlStringCchCopyW((char *)(v38 + 532), 260LL, (char *)&v83[41]);
          v5 = v76;
LABEL_41:
          MonitorGetCCDMonitorID(*((struct HDXGMONITOR__ **)NextTarget + 14), 0x104u, (unsigned __int16 *)(v38 + 12));
          v64 = *(_DWORD *)(v38 + 1084) & 0xFFFFFFF7;
          v65 = (*((_DWORD *)NextTarget + 139) >> 3) & 8;
          v72 = (int)v54;
          *(_DWORD *)(v38 + 1084) = v64 | v65;
          if ( (int)MonitorGetMonitorType(
                      *((struct HDXGMONITOR__ **)NextTarget + 14),
                      (enum _DMM_VIDPN_MONITOR_TYPE *)&v72) < 0 )
            goto LABEL_52;
          if ( v72 != 1 )
          {
            switch ( v72 )
            {
              case 2:
                *(_DWORD *)(v38 + 1056) = 2;
                goto LABEL_52;
              case 3:
                *(_DWORD *)(v38 + 1056) = 3;
                goto LABEL_52;
              case 4:
                *(_DWORD *)(v38 + 1056) = 4;
                goto LABEL_52;
              case 5:
                *(_DWORD *)(v38 + 1056) = 5;
                goto LABEL_52;
            }
          }
          *(_DWORD *)(v38 + 1056) = 1;
LABEL_52:
          v66 = *((_BYTE *)NextTarget + 405) != 0;
          v73 = (unsigned int)v54;
          v67 = *(_DWORD *)(v38 + 1084);
          v74 = (unsigned int)v54;
          *(_DWORD *)(v38 + 1084) = v67 & 0xFFFFFFBF | (v66 ? 0x40 : 0);
          if ( MonitorGetMonitorOrientationsFromMonitor(*((struct HDXGMONITOR__ **)NextTarget + 14), &v73, &v74) < 0 )
          {
            *(_DWORD *)(v38 + 1076) = 1;
LABEL_56:
            *(_DWORD *)(v38 + 1080) = (*(_DWORD *)(v38 + 1084) & 0x40) != 0 ? 4 : 1;
            goto LABEL_57;
          }
          GetMonitorOrientationFromGdiRotation(v73, (enum _D3DKMDT_MONITOR_ORIENTATION *)(v38 + 1076));
          if ( !GetMonitorOrientationFromGdiRotation(v74, (enum _D3DKMDT_MONITOR_ORIENTATION *)(v38 + 1080)) )
            goto LABEL_56;
LABEL_57:
          NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v33, NextTarget);
        }
        while ( NextTarget );
      }
    }
    if ( v33 )
      ReferenceCounted::Release((ReferenceCounted *)(v33 + 8));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v77 + 40));
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
  return 0LL;
}
