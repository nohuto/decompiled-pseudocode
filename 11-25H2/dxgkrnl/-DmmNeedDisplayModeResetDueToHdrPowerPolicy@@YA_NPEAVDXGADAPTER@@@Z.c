/*
 * XREFs of ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z @ 0x14031FD00
 * Callers:
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031FC40 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402D6414 (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     ?MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D010C (-MonitorIsHdrEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z.c)
 */

char __fastcall DmmNeedDisplayModeResetDueToHdrPowerPolicy(struct DXGADAPTER *a1)
{
  char v1; // bl
  __int64 v3; // rax
  VIDPN_MGR *v4; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  DMMVIDPNPRESENTPATH *v8; // rdi
  char IsHdrAllowedOnVidPnPath; // al
  DMMVIDPNTARGET *v11; // rsi
  char v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  struct HDXGMONITOR__ *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  bool v18; // zf
  bool v19; // [rsp+60h] [rbp+38h] BYREF
  __int64 v20; // [rsp+68h] [rbp+40h] BYREF
  struct DMMVIDPNTARGETMODESET *v21; // [rsp+70h] [rbp+48h] BYREF
  __int64 v22; // [rsp+78h] [rbp+50h] BYREF

  v1 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 15660;
    return 0;
  }
  v3 = *((_QWORD *)a1 + 390);
  if ( !v3 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15674;
    return 0;
  }
  v4 = *(VIDPN_MGR **)(v3 + 104);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15687;
    return 0;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, *(_QWORD *)(v3 + 104));
  v20 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v4);
  auto_rc<DMMVIDPN const>::reset(&v20, (__int64)ClientCommittedVidPnRef);
  if ( !v20 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15704;
    goto LABEL_32;
  }
  v6 = v20 + 120;
  v7 = *(_QWORD *)(v20 + 120);
  if ( v7 == v20 + 120 )
    v8 = 0LL;
  else
    v8 = (DMMVIDPNPRESENTPATH *)(v7 - 8);
  while ( 1 )
  {
    if ( !v8 )
    {
      auto_rc<DMMVIDPN const>::reset(&v20, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
      return 0;
    }
    IsHdrAllowedOnVidPnPath = DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(v8);
    v11 = (DMMVIDPNTARGET *)*((_QWORD *)v8 + 12);
    v12 = IsHdrAllowedOnVidPnPath;
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15721;
    }
    v13 = *((_QWORD *)v11 + 12);
    if ( *(_BYTE *)(v13 + 419) )
    {
      v15 = *(struct HDXGMONITOR__ **)(v13 + 112);
      v19 = 0;
      MonitorIsHdrEnabled(v15, &v19);
      if ( v19 )
        break;
    }
LABEL_13:
    v14 = *((_QWORD *)v8 + 1);
    v8 = (DMMVIDPNPRESENTPATH *)(v14 - 8);
    if ( v14 == v6 )
      v8 = 0LL;
  }
  v21 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v11);
  v16 = *((_QWORD *)v21 + 18);
  if ( !v16 )
    goto LABEL_30;
  v17 = *(_DWORD *)(v16 + 136);
  if ( v17 == 12 || v17 == 32 )
  {
    if ( !v12 )
      goto LABEL_31;
    if ( v17 == 12 )
      goto LABEL_30;
    v18 = v17 == 32;
  }
  else
  {
    v18 = v12 == 0;
  }
  if ( v18 )
  {
LABEL_30:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v21, 0LL);
    goto LABEL_13;
  }
LABEL_31:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v21, 0LL);
  v1 = 1;
LABEL_32:
  auto_rc<DMMVIDPN const>::reset(&v20, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
  return v1;
}
