/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x14033B898
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1403B18BC (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140021F58 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1400224E4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x14031B458 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14033C188 (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        int a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        unsigned __int8 *a8,
        unsigned __int8 *a9)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v9; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // r9
  __int64 Length; // rdx
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  _QWORD *v20; // r15
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  struct HDXGMONITOR__ *v22; // rax
  int CCDMonitorID; // eax
  unsigned int v24; // edi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v25; // rcx
  __int64 v26; // r15
  DXGMONITOR *v27; // rdi
  __int64 result; // rax
  char IsVirtualModeSupportDisabled; // di
  char v30; // al
  bool v31; // cl
  bool v32; // dl
  char v33; // al
  __int64 v34; // [rsp+30h] [rbp-79h]
  struct HDXGMONITOR__ *v35; // [rsp+58h] [rbp-51h]
  DXGMONITOR *v36[3]; // [rsp+60h] [rbp-49h] BYREF
  void **v37; // [rsp+78h] [rbp-31h] BYREF
  __int128 v38; // [rsp+80h] [rbp-29h]
  void **v39; // [rsp+90h] [rbp-19h]
  void *Source2; // [rsp+98h] [rbp-11h]
  __int64 v41; // [rsp+A0h] [rbp-9h]
  __int64 v42; // [rsp+A8h] [rbp-1h]
  __int64 v43; // [rsp+F0h] [rbp+47h] BYREF
  int v44; // [rsp+F8h] [rbp+4Fh]

  v44 = a3;
  v9 = a6;
  if ( !a2 || !a4 || (v13 = a5) == 0LL || !a6 || !a7 || (v14 = a8) == 0LL || (v15 = a9) == 0LL )
  {
    WdLogSingleEntry4(2LL, a2, a4, a5, a6);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7448;
    return result;
  }
  *a7 = 0;
  *v14 = 0;
  *v15 = 0;
  *a4 = -1;
  *v13 = D3DKMDT_VOT_UNINITIALIZED;
  *v9 = D3DKMDT_VOT_UNINITIALIZED;
  Length = a2->Length;
  v37 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Source2 = 0LL;
  v39 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v38 = 0LL;
  v41 = 0LL;
  v42 = 256LL;
  DMM::AutoBuffer<unsigned short>::Initialize(&v37, Length + 2);
  if ( !Source2 )
  {
    WdLogSingleEntry2(2LL, ((unsigned __int64)a2->Length >> 1) + 2, this);
    WdLogGlobalForLineNumber = 7468;
    v24 = -1073741801;
    goto LABEL_37;
  }
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 7482;
    goto LABEL_31;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7488;
  }
  v17 = *((_QWORD *)this + 390);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 7493;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    v24 = -1071775742;
LABEL_37:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v37);
    return v24;
  }
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 7507;
    v24 = -1071774923;
    goto LABEL_37;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v43, v18);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 120) + 72LL));
  v19 = *(_QWORD **)(v18 + 120);
  v44 = 0;
  v20 = (_QWORD *)v19[3];
  if ( v20 == v19 + 3 )
    NextTarget = 0LL;
  else
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v20 - 1);
  while ( NextTarget )
  {
    v22 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 14);
    v35 = v22;
    if ( !*((_DWORD *)NextTarget + 23) )
    {
      if ( v22 )
      {
        CCDMonitorID = MonitorGetCCDMonitorID(v22, (unsigned int)v41 >> 1, (unsigned __int16 *)Source2);
        v24 = CCDMonitorID;
        if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
        {
          if ( CCDMonitorID < 0 )
          {
            WdLogSingleEntry2(3LL, v35, CCDMonitorID);
            WdLogGlobalForLineNumber = 7558;
            goto LABEL_34;
          }
          if ( RtlCompareMemory(a2->Buffer, Source2, a2->Length) == a2->Length )
          {
            if ( !v44 )
            {
              v25 = a5;
              *a4 = *((_DWORD *)NextTarget + 6);
              *v25 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
              *a6 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 21);
              if ( *a4 != -1 )
              {
                v26 = *((_QWORD *)this + 390);
                if ( v26 )
                {
                  MONITOR_MGR::AcquireMonitorShared(v36, (__int64)this, *a4, 1u);
                  v27 = v36[0];
                  if ( !v36[0] )
                  {
                    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v36);
                    goto LABEL_42;
                  }
                  if ( *((_DWORD *)v36[0] + 70) != 1 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 5270;
                  }
                  IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v27);
                  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v36);
                  if ( IsVirtualModeSupportDisabled )
                  {
                    v31 = 1;
                    v32 = 1;
                  }
                  else
                  {
LABEL_42:
                    v30 = *(_BYTE *)(v26 + 289);
                    v31 = v30 == 0;
                    v32 = *(_BYTE *)(v26 + 290) == 0;
                    if ( v30 )
                    {
                      v33 = 0;
                      if ( (*(_DWORD *)(v26 + 24) & 0x20) != 0 )
                      {
LABEL_53:
                        v24 = 0;
                        *a7 = !v31;
                        *a8 = !v32;
                        *a9 = v33 ^ 1;
                        goto LABEL_34;
                      }
                    }
                  }
                  v33 = 1;
                  goto LABEL_53;
                }
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 10286;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"The selected adapter is render-only",
                  10286LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v24 = -1073741811;
              WdLogSingleEntry3(2LL, this, *a4, -1073741811LL);
              v34 = *a4;
              WdLogGlobalForLineNumber = 7595;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"IsVirtualizationDisabledForTarget failed on VidPn Target 0x%I64x adapter 0x%I64x, returning 0x%I64x.",
                (__int64)this,
                v34,
                -1073741811LL,
                0LL,
                0LL);
LABEL_34:
              if ( v19 )
                ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v43 + 40));
              goto LABEL_37;
            }
            --v44;
          }
        }
      }
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, NextTarget);
  }
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v43 + 40));
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v37);
  return 3221226021LL;
}
