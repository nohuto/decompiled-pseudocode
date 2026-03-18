/*
 * XREFs of DxgkProcessDisplayCalloutBatch @ 0x14038E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkSkipProcessingDisplayBatches @ 0x1400272E8 (DxgkSkipProcessingDisplayBatches.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x140051B58 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140057EF4 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1400602F4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x14006D440 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     ?GetDisplayCalloutEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1401897DC (-GetDisplayCalloutEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 *     ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x14038E098 (-StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkProcessDisplayCalloutBatch(__int64 a1)
{
  int v2; // r12d
  struct DXGGLOBAL *Global; // r14
  __int64 result; // rax
  struct DXGGLOBAL *v5; // rax
  bool started; // al
  struct DISPLAY_CALLOUT_ENTRY *v7; // rbx
  bool v8; // r13
  int v9; // r15d
  __int64 v10; // rbp
  int v11; // eax
  bool v12; // bp
  int v13; // eax
  struct DXGGLOBAL *v14; // rax
  bool DisplayCalloutEntry; // al
  struct DXGGLOBAL *v16; // rbx
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  struct DISPLAY_CALLOUT_ENTRY *v18; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  if ( DxgkSkipProcessingDisplayBatches() )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 4560;
    v18 = 0LL;
    DxgkLogCodePointPacket(0x87u, 0, 0, 0, 0LL);
    *(_BYTE *)a1 |= 1u;
    return 0LL;
  }
  v5 = DXGGLOBAL::GetGlobal();
  started = DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch((struct DXGGLOBAL *)((char *)v5 + 1808), &v18);
  v7 = v18;
  v8 = started;
  if ( !v18 )
    goto LABEL_22;
  v9 = 0;
  v10 = a1 + 24;
  while ( 1 )
  {
    CDisplayScenarioContextCarrier::Release((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)v10);
    *(_BYTE *)v10 = *((_BYTE *)v7 + 64);
    *(_QWORD *)(v10 + 8) = *((_QWORD *)v7 + 9);
    *((_BYTE *)v7 + 64) = 0;
    *((_QWORD *)v7 + 9) = 0LL;
    v11 = *((_DWORD *)v7 + 4);
    if ( v11 == 1 )
    {
      v2 = DxgkHandleMonitorEvent(
             *((_QWORD *)v7 + 3),
             *((unsigned int *)v7 + 8),
             *((unsigned int *)v7 + 9),
             *((_QWORD *)v7 + 5),
             a1);
      v12 = v2 < 0 || (*(_BYTE *)a1 & 0x44) == 68;
      goto LABEL_11;
    }
    if ( v11 == 2 )
    {
      *(_BYTE *)a1 |= 4u;
      v13 = *((_DWORD *)v7 + 12);
      *(_BYTE *)a1 &= ~0x80u;
      v12 = 1;
      *(_DWORD *)(a1 + 4) = v13;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)v7 + 10);
      *(_QWORD *)(a1 + 16) = *((_QWORD *)v7 + 3);
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)Global + 305624, 2u, *((_QWORD *)v7 + 3));
LABEL_11:
      v9 = 1;
      goto LABEL_13;
    }
    v12 = v11 == 3;
LABEL_13:
    if ( *((_BYTE *)v7 + 20) )
      break;
    DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(v7);
    if ( !v12 )
    {
      v14 = DXGGLOBAL::GetGlobal();
      DisplayCalloutEntry = DXGDISPLAYCALLOUTQUEUE::GetDisplayCalloutEntry(
                              (struct DXGGLOBAL *)((char *)v14 + 1808),
                              &v18);
      v7 = v18;
      v10 = a1 + 24;
      v8 = DisplayCalloutEntry;
      if ( v18 )
        continue;
    }
    goto LABEL_18;
  }
  *(_QWORD *)(a1 + 80) = (char *)v7 + 56;
LABEL_18:
  if ( v9 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
      RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
        (struct DXGGLOBAL *)((char *)Global + 305624),
        1u,
        (enum _DXGK_RAPID_HPD_TYPE *)(a1 + 40),
        (struct _GUID *)(a1 + 44),
        (struct _DXGK_RAPID_HPD_DIAG *)(a1 + 64));
  }
  v16 = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGGLOBAL *)((char *)v16 + 1808), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  *((_QWORD *)v16 + 234) = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
LABEL_22:
  result = (unsigned int)v2;
  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFE | !v8;
  return result;
}
