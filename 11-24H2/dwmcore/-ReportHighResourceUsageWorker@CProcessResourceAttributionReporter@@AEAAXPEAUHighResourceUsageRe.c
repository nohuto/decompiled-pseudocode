/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x18012C710
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18012C6A0 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443444444@Z @ 0x180001648 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x18012CA3C (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$emplace@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@@Z @ 0x1802283B4 (--$emplace@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionR.c)
 *     ??$make_unique@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@$$V$0A@@std@@YA?AV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@0@XZ @ 0x18022C0C4 (--$make_unique@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@$.c)
 *     ?erase@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180248C30 (-erase@-$vector@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttribu.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        CProcessResourceAttributionReporter *this,
        struct CProcessResourceAttributionReporter::HighResourceUsageReport *a2)
{
  int *v2; // rbx
  CProcessResourceAttributionReporter *v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // r8d
  int v8; // edi
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  _DWORD *v13; // rax
  char v14; // cl
  _DWORD *v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // r8d
  __int64 *v21; // [rsp+20h] [rbp-A9h]
  int *v22; // [rsp+28h] [rbp-A1h]
  int *v23; // [rsp+30h] [rbp-99h]
  int *v24; // [rsp+38h] [rbp-91h]
  __int64 *v25; // [rsp+40h] [rbp-89h]
  int *v26; // [rsp+48h] [rbp-81h]
  int *v27; // [rsp+50h] [rbp-79h]
  int *v28; // [rsp+58h] [rbp-71h]
  int *v29; // [rsp+60h] [rbp-69h]
  int *v30; // [rsp+68h] [rbp-61h]
  int *v31; // [rsp+70h] [rbp-59h]
  int v32; // [rsp+80h] [rbp-49h] BYREF
  int v33; // [rsp+84h] [rbp-45h] BYREF
  int v34; // [rsp+88h] [rbp-41h] BYREF
  int v35; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v36; // [rsp+90h] [rbp-39h] BYREF
  int v37; // [rsp+94h] [rbp-35h] BYREF
  int v38; // [rsp+98h] [rbp-31h] BYREF
  int v39; // [rsp+9Ch] [rbp-2Dh] BYREF
  char *v40; // [rsp+A0h] [rbp-29h]
  void *v41; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-11h] BYREF
  int *v44; // [rsp+C0h] [rbp-9h]
  _BYTE v45[8]; // [rsp+C8h] [rbp-1h] BYREF
  _BYTE v46[80]; // [rsp+D0h] [rbp+7h] BYREF
  char v48; // [rsp+138h] [rbp+6Fh]
  int v49; // [rsp+140h] [rbp+77h]
  int v50; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = (int *)*((_QWORD *)a2 + 2);
  v3 = this;
  v44 = (int *)*((_QWORD *)a2 + 3);
  if ( v2 != v44 )
  {
    v4 = (__int64 *)((char *)this + 32);
    v40 = (char *)this + 32;
    while ( 1 )
    {
      v5 = *v4;
      v48 = 0;
      v6 = (*((_QWORD *)v3 + 5) - *v4) >> 3;
      if ( v6 > 0 )
      {
        do
        {
          if ( (unsigned __int8)CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                                  v5 + 8 * ((unsigned __int64)v6 >> 1),
                                  *((_QWORD *)v2 + 1)) )
          {
            v5 += 8 * ((unsigned __int64)v6 >> 1) + 8;
            v6 += -1LL - ((unsigned __int64)v6 >> 1);
          }
          else
          {
            v6 = (unsigned __int64)v6 >> 1;
          }
        }
        while ( v6 > 0 );
        v3 = this;
      }
      v7 = v2[22];
      v8 = v2[21];
      v9 = v2[24];
      v10 = v2[20];
      v11 = v2[23];
      v12 = v2[19];
      v49 = v7;
      if ( v5 == *((_QWORD *)v3 + 5) )
        break;
      v13 = *(_DWORD **)v5;
      if ( **(_QWORD **)v5 != *((_QWORD *)v2 + 1) )
        break;
      v14 = 1;
      v48 = 1;
      if ( v8 > v13[2] || v9 > v13[3] || v10 > v13[4] || v11 > v13[5] || v12 > v13[6] || v7 > v13[7] )
      {
        if ( (unsigned int)dword_1803F8CA8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803F8CA8, 0x400000000000LL) )
        {
          v37 = *v2;
          v38 = v37;
          v39 = v37;
          v31 = &v50;
          v30 = &v32;
          v29 = &v33;
          v28 = &v34;
          v27 = &v35;
          v26 = &v36;
          v25 = &v42;
          v24 = &v37;
          v23 = &v38;
          v22 = &v39;
          v21 = &v43;
          v50 = v7;
          v32 = v12;
          v33 = v11;
          v34 = v10;
          v35 = v9;
          v36 = v8;
          v42 = v18;
          v43 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v17,
            (__int64)&unk_1803CCACA);
          v7 = v49;
        }
        *(_DWORD *)(*(_QWORD *)v5 + 8LL) = 5000
                                         * (((int)((unsigned __int64)(1759218605LL * v8) >> 32) >> 11)
                                          + 1
                                          + ((unsigned int)((unsigned __int64)(1759218605LL * v8) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v5 + 12LL) = 1000
                                          * (((int)((unsigned __int64)(274877907LL * v9) >> 32) >> 6)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(274877907LL * v9) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v5 + 16LL) = 10000
                                          * (((int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 12)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v5 + 20LL) = 200
                                          * (((int)((unsigned __int64)(1374389535LL * v11) >> 32) >> 6)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(1374389535LL * v11) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v5 + 24LL) = 500
                                          * (((int)((unsigned __int64)(274877907LL * v12) >> 32) >> 5)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(274877907LL * v12) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v5 + 28LL) = 1000
                                          * (((int)((unsigned __int64)(274877907LL * v7) >> 32) >> 6)
                                           + ((unsigned int)((unsigned __int64)(274877907LL * v7) >> 32) >> 31)
                                           + 1);
LABEL_22:
        v4 = (__int64 *)v40;
        goto LABEL_23;
      }
      v4 = (__int64 *)v40;
LABEL_17:
      if ( v2[25] )
      {
        if ( v14 )
          std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::erase(
            v4,
            v46,
            v5);
      }
      v3 = this;
      v2 += 26;
      if ( v2 == v44 )
        return;
    }
    if ( v2[25] )
      goto LABEL_22;
    if ( (unsigned int)dword_1803F8CA8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803F8CA8, 0x400000000000LL) )
    {
      v43 = *((_QWORD *)v2 + 1);
      v34 = *v2;
      v33 = v34;
      v32 = v34;
      v31 = &v50;
      v30 = &v39;
      v29 = &v38;
      v28 = &v37;
      v27 = &v36;
      v26 = &v35;
      v25 = &v43;
      v24 = &v34;
      v23 = &v33;
      v22 = &v32;
      v21 = &v42;
      v50 = v20;
      v39 = v12;
      v38 = v11;
      v37 = v10;
      v36 = v9;
      v35 = v8;
      v42 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (__int64)&unk_1803CCACA);
    }
    std::make_unique<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber,,0>(&v41);
    v15 = v41;
    *(_QWORD *)v41 = *((_QWORD *)v2 + 1);
    v16 = (unsigned __int64)(1759218605LL * v8) >> 32;
    v4 = (__int64 *)v40;
    v15[2] = 5000 * ((v16 >> 11) + 1 + ((unsigned int)v16 >> 31));
    v15[3] = 1000
           * (((int)((unsigned __int64)(274877907LL * v9) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v9) >> 32) >> 31));
    v15[4] = 10000
           * (((int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 12)
            + 1
            + ((unsigned int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 31));
    v15[5] = 200
           * (((int)((unsigned __int64)(1374389535LL * v11) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(1374389535LL * v11) >> 32) >> 31));
    v15[6] = 500
           * (((int)((unsigned __int64)(274877907LL * v12) >> 32) >> 5)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v12) >> 32) >> 31));
    v15[7] = 1000
           * (((int)((unsigned __int64)(274877907LL * v49) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v49) >> 32) >> 31));
    std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::emplace<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
      v4,
      v45,
      v5,
      &v41,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( v41 )
      operator delete(v41, 0x20uLL);
LABEL_23:
    v14 = v48;
    goto LABEL_17;
  }
}
