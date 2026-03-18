/*
 * XREFs of ?Partition_SetCurrentMmTask@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1801586E4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180158024 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1801587D0 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CComposition::Partition_SetCurrentMmTask(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETCURRENTMMTASK *a4)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  unsigned int v13; // ebx
  _OWORD v15[9]; // [rsp+30h] [rbp-A8h] BYREF

  v5 = *(_OWORD *)((char *)a4 + 24);
  v15[0] = *(_OWORD *)((char *)a4 + 8);
  v6 = *(_OWORD *)((char *)a4 + 40);
  v15[1] = v5;
  v7 = *(_OWORD *)((char *)a4 + 56);
  v15[2] = v6;
  v8 = *(_OWORD *)((char *)a4 + 72);
  v15[3] = v7;
  v9 = *(_OWORD *)((char *)a4 + 88);
  v15[4] = v8;
  v10 = *(_OWORD *)((char *)a4 + 104);
  v15[5] = v9;
  v11 = *(_OWORD *)((char *)a4 + 136);
  v15[6] = v10;
  v15[7] = *(_OWORD *)((char *)a4 + 120);
  v15[8] = v11;
  v12 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)((char *)this + 736), (const struct DWM_MMTASK *)v15, 1);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x441u, 0LL);
  else
    CComposition::UpdateMmcssPartners(this);
  return v13;
}
