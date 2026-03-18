/*
 * XREFs of FxIFR @ 0x140025370
 * Callers:
 *     WPP_IFR_SF_qDd @ 0x1400017F0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qiid @ 0x1400028A4 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qid @ 0x140002A18 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_sd @ 0x140002BF4 (WPP_IFR_SF_sd.c)
 *     WPP_IFR_SF_DD @ 0x140002E14 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_i @ 0x140010FFC (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_DDid @ 0x1400111CC (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_sq @ 0x1400115F0 (WPP_IFR_SF_sq.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400230F0 (WPP_IFR_SF_qLsqd.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qL @ 0x140028CC0 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qcq @ 0x140028E70 (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqdq @ 0x14002EFDC (WPP_IFR_SF_qqdq.c)
 *     WPP_IFR_SF_Lq @ 0x140034048 (WPP_IFR_SF_Lq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_Dqqd @ 0x14005224C (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x140055DA4 (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qqcLq @ 0x1400593A4 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqcq @ 0x14005950C (WPP_IFR_SF_qqcq.c)
 *     WPP_IFR_SF_qqcqL @ 0x14005968C (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1400597F4 (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qqdid @ 0x14005A1AC (WPP_IFR_SF_qqdid.c)
 *     WPP_IFR_SF_dqd @ 0x14005EF2C (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqLdqqq @ 0x14005FEC4 (WPP_IFR_SF_qqLdqqq.c)
 *     WPP_IFR_SF_qdD @ 0x140065208 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qDqd @ 0x140068364 (WPP_IFR_SF_qDqd.c)
 *     WPP_IFR_SF_qLL @ 0x14006A2A4 (WPP_IFR_SF_qLL.c)
 *     WPP_IFR_SF_qdq @ 0x14006F784 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qqqq @ 0x140071B68 (WPP_IFR_SF_qqqq.c)
 *     WPP_IFR_SF_ddLLdiDD @ 0x14007BE30 (WPP_IFR_SF_ddLLdiDD.c)
 *     WPP_IFR_SF_LLd @ 0x14007E944 (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_Zd @ 0x14007EC5C (WPP_IFR_SF_Zd.c)
 *     WPP_IFR_SF_qLqd @ 0x14007EF14 (WPP_IFR_SF_qLqd.c)
 *     WPP_IFR_SF_qcDqd @ 0x14007F080 (WPP_IFR_SF_qcDqd.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F490 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqqqq @ 0x14007F74C (WPP_IFR_SF_qqqqq.c)
 *     WPP_IFR_SF_Dd @ 0x140080004 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_DDDDDDD @ 0x140080220 (WPP_IFR_SF_DDDDDDD.c)
 *     WPP_IFR_SF_dq @ 0x140080380 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_qqLLL @ 0x1400805E8 (WPP_IFR_SF_qqLLL.c)
 *     WPP_IFR_SF_ddiid @ 0x1400807F8 (WPP_IFR_SF_ddiid.c)
 *     WPP_IFR_SF_qqDqq @ 0x14008092C (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x140080B40 (WPP_IFR_SF_qqqi.c)
 *     WPP_IFR_SF_Dqq @ 0x140082ABC (WPP_IFR_SF_Dqq.c)
 *     WPP_IFR_SF_Lqd @ 0x140082BA8 (WPP_IFR_SF_Lqd.c)
 *     WPP_IFR_SF_LqqLd @ 0x14008617C (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1400862B8 (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qiqd @ 0x14008653C (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_ql @ 0x140086654 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qqdd @ 0x140086778 (WPP_IFR_SF_qqdd.c)
 *     WPP_IFR_SF_dqq @ 0x140087B64 (WPP_IFR_SF_dqq.c)
 *     WPP_IFR_SF_qld @ 0x140087C50 (WPP_IFR_SF_qld.c)
 *     WPP_IFR_SF_qqiDq @ 0x140087D40 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqii @ 0x140087E70 (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x140087F78 (WPP_IFR_SF_qqiid.c)
 *     WPP_IFR_SF_qqqD @ 0x1400880A8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqqDd @ 0x1400881B8 (WPP_IFR_SF_qqqDd.c)
 *     WPP_IFR_SF_sqqii @ 0x1400882EC (WPP_IFR_SF_sqqii.c)
 *     WPP_IFR_SF_qD @ 0x14008884C (WPP_IFR_SF_qD.c)
 *     WPP_IFR_SF_qDPq @ 0x140088EC8 (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x140088FD4 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qLLd @ 0x140089110 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qPPd @ 0x140089228 (WPP_IFR_SF_qPPd.c)
 *     WPP_IFR_SF_qc @ 0x140089340 (WPP_IFR_SF_qc.c)
 *     WPP_IFR_SF_dLd @ 0x14008A3E8 (WPP_IFR_SF_dLd.c)
 *     WPP_IFR_SF_qLqdi @ 0x14008A4D4 (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qi @ 0x14008A608 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x14008A6D0 (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_Ddd @ 0x14008B0D8 (WPP_IFR_SF_Ddd.c)
 *     WPP_IFR_SF_qll @ 0x14008C9BC (WPP_IFR_SF_qll.c)
 *     WPP_IFR_SF_ds @ 0x14008D424 (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x14008D558 (WPP_IFR_SF_s.c)
 *     WPP_IFR_SF_Dddd @ 0x14008D86C (WPP_IFR_SF_Dddd.c)
 *     WPP_IFR_SF_iid @ 0x14008DB94 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x14008DC80 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qddq @ 0x14008DD98 (WPP_IFR_SF_qddq.c)
 *     WPP_IFR_SF_cd @ 0x1400911F4 (WPP_IFR_SF_cd.c)
 *     WPP_IFR_SF_qqcDq @ 0x140091310 (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x14009144C (WPP_IFR_SF_qqcDqd.c)
 *     WPP_IFR_SF_qsd @ 0x1400915A8 (WPP_IFR_SF_qsd.c)
 *     WPP_IFR_SF_sl @ 0x140092650 (WPP_IFR_SF_sl.c)
 *     WPP_IFR_SF_qDDd @ 0x14009289C (WPP_IFR_SF_qDDd.c)
 *     WPP_IFR_SF_qdid @ 0x140092A0C (WPP_IFR_SF_qdid.c)
 *     WPP_IFR_SF_dddd @ 0x1400933A8 (WPP_IFR_SF_dddd.c)
 *     WPP_IFR_SF_sSLSs @ 0x140093514 (WPP_IFR_SF_sSLSs.c)
 *     WPP_IFR_SF_qqqqd @ 0x140093C34 (WPP_IFR_SF_qqqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x140094414 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDiD @ 0x140094638 (WPP_IFR_SF_qDiD.c)
 *     WPP_IFR_SF_Sd @ 0x1400951E0 (WPP_IFR_SF_Sd.c)
 *     WPP_IFR_SF_qZ @ 0x1400954D0 (WPP_IFR_SF_qZ.c)
 *     WPP_IFR_SF_Z @ 0x140096A20 (WPP_IFR_SF_Z.c)
 *     WPP_IFR_SF_dZq @ 0x140096BCC (WPP_IFR_SF_dZq.c)
 *     WPP_IFR_SF_sqq @ 0x140097250 (WPP_IFR_SF_sqq.c)
 *     WPP_IFR_SF_ddi @ 0x140097550 (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_iiddiidd @ 0x140097648 (WPP_IFR_SF_iiddiidd.c)
 *     WPP_IFR_SF_qqsd @ 0x1400978C0 (WPP_IFR_SF_qqsd.c)
 *     WPP_IFR_SF_sqqq @ 0x140097A50 (WPP_IFR_SF_sqqq.c)
 *     WPP_IFR_SF_DqD @ 0x140097EBC (WPP_IFR_SF_DqD.c)
 *     WPP_IFR_SF_qqDD @ 0x140097FA8 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qZd @ 0x140099444 (WPP_IFR_SF_qZd.c)
 *     WPP_IFR_SF_dqdd @ 0x140099D68 (WPP_IFR_SF_dqdd.c)
 *     WPP_IFR_SF_iii @ 0x14009A0D8 (WPP_IFR_SF_iii.c)
 *     WPP_IFR_SF_qqD @ 0x14009ACE4 (WPP_IFR_SF_qqD.c)
 *     WPP_IFR_SF_qqDdqq @ 0x14009ADD4 (WPP_IFR_SF_qqDdqq.c)
 *     WPP_IFR_SF_qqDq @ 0x14009AF20 (WPP_IFR_SF_qqDq.c)
 *     WPP_IFR_SF_qqDqqq @ 0x14009B02C (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x14009B174 (WPP_IFR_SF_qqDqqqd.c)
 *     WPP_IFR_SF_qqdqdd @ 0x14009BA94 (WPP_IFR_SF_qqdqdd.c)
 *     WPP_IFR_SF_qqqqi @ 0x14009BC24 (WPP_IFR_SF_qqqqi.c)
 *     WPP_IFR_SF_qqDLd @ 0x14009C9F8 (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CB34 (WPP_IFR_SF_qqLd.c)
 *     WPP_IFR_SF_qqqdD @ 0x14009CC98 (WPP_IFR_SF_qqqdD.c)
 *     WPP_IFR_SF_qdL @ 0x14009E044 (WPP_IFR_SF_qdL.c)
 *     WPP_IFR_SF_qs @ 0x14009E130 (WPP_IFR_SF_qs.c)
 *     WPP_IFR_SF_dii @ 0x14009E4DC (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x14009E5D4 (WPP_IFR_SF_idii.c)
 *     WPP_IFR_SF_dddddd @ 0x14009FBA8 (WPP_IFR_SF_dddddd.c)
 *     WPP_IFR_SF__guid_d @ 0x1400A0544 (WPP_IFR_SF__guid_d.c)
 *     WPP_IFR_SF_DDDDd @ 0x1400A0618 (WPP_IFR_SF_DDDDd.c)
 *     WPP_IFR_SF_qcd @ 0x1400A0F58 (WPP_IFR_SF_qcd.c)
 *     WPP_IFR_SF_qqs @ 0x1400A1368 (WPP_IFR_SF_qqs.c)
 *     WPP_IFR_SF_PqD @ 0x1400A18BC (WPP_IFR_SF_PqD.c)
 *     WPP_IFR_SF_ddddd @ 0x1400A42E4 (WPP_IFR_SF_ddddd.c)
 *     WPP_IFR_SF_sqqLd @ 0x1400A4804 (WPP_IFR_SF_sqqLd.c)
 *     WPP_IFR_SF_sqqd @ 0x1400A49B8 (WPP_IFR_SF_sqqd.c)
 *     WPP_IFR_SF_LL @ 0x1400A69E8 (WPP_IFR_SF_LL.c)
 *     WPP_IFR_SF_cqcqq @ 0x1400A6AAC (WPP_IFR_SF_cqcqq.c)
 *     WPP_IFR_SF_dDqq @ 0x1400A6BE0 (WPP_IFR_SF_dDqq.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1400A6CF0 (WPP_IFR_SF_dddDqqd.c)
 *     WPP_IFR_SF_L @ 0x1400A7258 (WPP_IFR_SF_L.c)
 *     WPP_IFR_SF_qDDDDsdisd @ 0x1400A9C64 (WPP_IFR_SF_qDDDDsdisd.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 FxIFR(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 MessageLevel,
        unsigned int MessageFlags,
        _GUID *MessageGuid,
        unsigned __int16 MessageNumber,
        ...)
{
  char *WdfLogHeader; // rbp
  va_list v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  signed __int32 v14; // eax
  unsigned __int64 v15; // rbx
  signed __int32 v16; // r9d
  unsigned __int16 v17; // dx
  __int64 v18; // rdi
  char *v19; // rax
  char *v20; // rsi
  size_t *v21; // rax
  const void *v22; // rcx
  size_t v23; // rbx
  const void **v24; // rdi
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  signed __int32 offsetNew; // [rsp+20h] [rbp-48h]
  char *ap; // [rsp+28h] [rbp-40h] BYREF
  const void *v30; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, MessageNumber);
  va_start(va, MessageNumber);
  v30 = va_arg(va1, const void *);
  if ( unk_1400C80D8 )
    return 0LL;
  WdfLogHeader = (char *)FxDriverGlobals->WdfLogHeader;
  if ( WdfLogHeader )
  {
    va_copy(v8, va);
    v9 = 0LL;
    va_copy(ap, va);
    while ( *(_QWORD *)v8 )
    {
      v10 = *((_QWORD *)v8 + 1);
      v8 += 16;
      ap = v8;
      if ( v10 )
      {
        if ( v10 > 0x100 )
          goto $drop_message;
        v9 += (unsigned __int16)v10;
      }
    }
    v11 = 4 - (v9 & 3);
    if ( (v9 & 3) == 0 )
      v11 = 0LL;
    v12 = v11 + v9;
    if ( v12 > 0x100 )
    {
$drop_message:
      _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
      return 3221225473LL;
    }
    if ( FxDriverGlobals->FxVerifierOn )
    {
      if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
        || RtlCompareMemory(WdfLogHeader, &WdfTraceGuid, 0x10uLL) != 16
        || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
        || (v26 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v26)
        || *((unsigned __int16 *)WdfLogHeader + 15) > v26
        || v26 >= 0x10000 )
      {
        FxVerifierDbgBreakPoint(FxDriverGlobals);
      }
    }
    if ( WdfLogHeader[68] )
      v13 = 36LL;
    else
      v13 = 28LL;
    v14 = *((_DWORD *)WdfLogHeader + 7);
    v15 = v13 + v12;
    do
    {
      v16 = v14;
      if ( *((_QWORD *)WdfLogHeader + 2) + (unsigned __int64)*((unsigned int *)WdfLogHeader + 6) < v15
                                                                                                 + *((_QWORD *)WdfLogHeader + 2)
                                                                                                 + (unsigned __int16)v14 )
      {
        v17 = 0;
        offsetNew = (unsigned __int16)v15;
      }
      else
      {
        HIWORD(offsetNew) = v14;
        LOWORD(offsetNew) = v15 + v14;
        v17 = v14;
      }
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)WdfLogHeader + 7, offsetNew, v14);
    }
    while ( v16 != v14 );
    v18 = *((_QWORD *)WdfLogHeader + 2) + v17;
    *(_WORD *)(v18 + 8) = HIWORD(v14);
    *(_WORD *)(v18 + 2) = v15;
    *(_WORD *)(v18 + 10) = MessageNumber;
    *(_DWORD *)(v18 + 4) = _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
    *(_GUID *)(v18 + 12) = *MessageGuid;
    if ( WdfLogHeader[68] )
    {
      *(_WORD *)v18 = 12876;
      ap = 0LL;
      if ( WdfLogHeader[69] )
      {
        KeQuerySystemTimePrecise(&ap);
        v19 = ap;
      }
      else
      {
        v19 = (char *)MEMORY[0xFFFFF78000000014];
      }
      *(_QWORD *)(v18 + 28) = v19;
    }
    else
    {
      *(_WORD *)v18 = 21068;
    }
    v20 = (char *)(v18 + v13);
    va_copy((va_list)v21, va1);
    v22 = v30;
    if ( v30 )
    {
      do
      {
        v23 = *v21;
        v24 = (const void **)(v21 + 1);
        if ( *v21 )
        {
          memmove(v20, v22, *v21);
          v20 += v23;
        }
        v22 = *v24;
        v21 = (size_t *)(v24 + 1);
      }
      while ( *v24 );
    }
    if ( FxDriverGlobals->FxVerifierOn )
    {
      if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
        || RtlCompareMemory(WdfLogHeader, &WdfTraceGuid, 0x10uLL) != 16
        || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
        || (v27 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v27)
        || *((unsigned __int16 *)WdfLogHeader + 15) > v27
        || v27 >= 0x10000 )
      {
        FxVerifierDbgBreakPoint(FxDriverGlobals);
      }
    }
    return 0LL;
  }
  return 3221225473LL;
}
