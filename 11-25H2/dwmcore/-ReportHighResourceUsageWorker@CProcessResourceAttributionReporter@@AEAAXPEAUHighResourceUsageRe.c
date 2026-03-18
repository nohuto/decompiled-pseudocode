/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x18017FFF0
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18017FF80 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443444444@Z @ 0x180001648 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x18018031C (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$emplace@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@@Z @ 0x180233CF4 (--$emplace@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionR.c)
 *     ??$make_unique@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@$$V$0A@@std@@YA?AV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@0@XZ @ 0x180237E14 (--$make_unique@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@$.c)
 *     ?erase@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180253E20 (-erase@-$vector@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttribu.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        CProcessResourceAttributionReporter *this,
        struct CProcessResourceAttributionReporter::HighResourceUsageReport *a2,
        __int64 a3,
        __int64 a4)
{
  int *v4; // rbx
  CProcessResourceAttributionReporter *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // edi
  int v11; // r14d
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  _DWORD *v15; // rax
  char v16; // cl
  _DWORD *v17; // rcx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // r8d
  __int64 *v23; // [rsp+20h] [rbp-A9h]
  int *v24; // [rsp+28h] [rbp-A1h]
  int *v25; // [rsp+30h] [rbp-99h]
  int *v26; // [rsp+38h] [rbp-91h]
  __int64 *v27; // [rsp+40h] [rbp-89h]
  int *v28; // [rsp+48h] [rbp-81h]
  int *v29; // [rsp+50h] [rbp-79h]
  int *v30; // [rsp+58h] [rbp-71h]
  int *v31; // [rsp+60h] [rbp-69h]
  int *v32; // [rsp+68h] [rbp-61h]
  int *v33; // [rsp+70h] [rbp-59h]
  int v34; // [rsp+80h] [rbp-49h] BYREF
  int v35; // [rsp+84h] [rbp-45h] BYREF
  int v36; // [rsp+88h] [rbp-41h] BYREF
  int v37; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v38; // [rsp+90h] [rbp-39h] BYREF
  int v39; // [rsp+94h] [rbp-35h] BYREF
  int v40; // [rsp+98h] [rbp-31h] BYREF
  int v41; // [rsp+9Ch] [rbp-2Dh] BYREF
  char *v42; // [rsp+A0h] [rbp-29h]
  void *v43; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-11h] BYREF
  int *v46; // [rsp+C0h] [rbp-9h]
  _BYTE v47[8]; // [rsp+C8h] [rbp-1h] BYREF
  _BYTE v48[80]; // [rsp+D0h] [rbp+7h] BYREF
  char v50; // [rsp+138h] [rbp+6Fh]
  int v51; // [rsp+140h] [rbp+77h]
  int v52; // [rsp+148h] [rbp+7Fh] BYREF

  v4 = (int *)*((_QWORD *)a2 + 2);
  v5 = this;
  v46 = (int *)*((_QWORD *)a2 + 3);
  if ( v4 != v46 )
  {
    v6 = (__int64 *)((char *)this + 32);
    v42 = (char *)this + 32;
    while ( 1 )
    {
      v7 = *v6;
      v50 = 0;
      v8 = (*((_QWORD *)v5 + 5) - *v6) >> 3;
      if ( v8 > 0 )
      {
        do
        {
          if ( (unsigned __int8)CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                                  v7 + 8 * ((unsigned __int64)v8 >> 1),
                                  *((_QWORD *)v4 + 1)) )
          {
            v7 += 8 * ((unsigned __int64)v8 >> 1) + 8;
            v8 += -1LL - ((unsigned __int64)v8 >> 1);
          }
          else
          {
            v8 = (unsigned __int64)v8 >> 1;
          }
        }
        while ( v8 > 0 );
        v5 = this;
      }
      v9 = (unsigned int)v4[22];
      v10 = v4[21];
      v11 = v4[24];
      v12 = v4[20];
      v13 = v4[23];
      v14 = v4[19];
      v51 = v4[22];
      if ( v7 == *((_QWORD *)v5 + 5) )
        break;
      v15 = *(_DWORD **)v7;
      a4 = *((_QWORD *)v4 + 1);
      if ( **(_QWORD **)v7 != a4 )
        break;
      v16 = 1;
      v50 = 1;
      if ( v10 > v15[2] || v11 > v15[3] || v12 > v15[4] || v13 > v15[5] || v14 > v15[6] || (int)v9 > v15[7] )
      {
        if ( (unsigned int)dword_180404CA8 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_180404CA8, 0x400000000000LL, v9, a4) )
        {
          v39 = *v4;
          v40 = v39;
          v41 = v39;
          v33 = &v52;
          v32 = &v34;
          v31 = &v35;
          v30 = &v36;
          v29 = &v37;
          v28 = &v38;
          v27 = &v44;
          v26 = &v39;
          v25 = &v40;
          v24 = &v41;
          v23 = &v45;
          v52 = v9;
          v34 = v14;
          v35 = v13;
          v36 = v12;
          v37 = v11;
          v38 = v10;
          v44 = v20;
          v45 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v19,
            (__int64)&unk_1803D7A42);
          LODWORD(v9) = v51;
        }
        a4 = 1759218605LL;
        *(_DWORD *)(*(_QWORD *)v7 + 8LL) = 5000
                                         * (((int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 11)
                                          + 1
                                          + ((unsigned int)((unsigned __int64)(1759218605LL * v10) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v7 + 12LL) = 1000
                                          * (((int)((unsigned __int64)(274877907LL * v11) >> 32) >> 6)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(274877907LL * v11) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v7 + 16LL) = 10000
                                          * (((int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 12)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v7 + 20LL) = 200
                                          * (((int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 6)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v7 + 24LL) = 500
                                          * (((int)((unsigned __int64)(274877907LL * v14) >> 32) >> 5)
                                           + 1
                                           + ((unsigned int)((unsigned __int64)(274877907LL * v14) >> 32) >> 31));
        *(_DWORD *)(*(_QWORD *)v7 + 28LL) = 1000
                                          * (((int)((unsigned __int64)(274877907LL * (int)v9) >> 32) >> 6)
                                           + ((unsigned int)((unsigned __int64)(274877907LL * (int)v9) >> 32) >> 31)
                                           + 1);
LABEL_22:
        v6 = (__int64 *)v42;
        goto LABEL_23;
      }
      v6 = (__int64 *)v42;
LABEL_17:
      if ( v4[25] )
      {
        if ( v16 )
          std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::erase(
            v6,
            v48,
            v7);
      }
      v5 = this;
      v4 += 26;
      if ( v4 == v46 )
        return;
    }
    if ( v4[25] )
      goto LABEL_22;
    if ( (unsigned int)dword_180404CA8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_180404CA8, 0x400000000000LL, v9, a4) )
    {
      v45 = *((_QWORD *)v4 + 1);
      v36 = *v4;
      v35 = v36;
      v34 = v36;
      v33 = &v52;
      v32 = &v41;
      v31 = &v40;
      v30 = &v39;
      v29 = &v38;
      v28 = &v37;
      v27 = &v45;
      v26 = &v36;
      v25 = &v35;
      v24 = &v34;
      v23 = &v44;
      v52 = v22;
      v41 = v14;
      v40 = v13;
      v39 = v12;
      v38 = v11;
      v37 = v10;
      v44 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v21,
        (__int64)&unk_1803D7A42);
    }
    std::make_unique<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber,,0>(&v43);
    v17 = v43;
    *(_QWORD *)v43 = *((_QWORD *)v4 + 1);
    v18 = (unsigned __int64)(1759218605LL * v10) >> 32;
    v6 = (__int64 *)v42;
    v17[2] = 5000 * ((v18 >> 11) + 1 + ((unsigned int)v18 >> 31));
    v17[3] = 1000
           * (((int)((unsigned __int64)(274877907LL * v11) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v11) >> 32) >> 31));
    v17[4] = 10000
           * (((int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 12)
            + 1
            + ((unsigned int)((unsigned __int64)(1759218605LL * v12) >> 32) >> 31));
    v17[5] = 200
           * (((int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31));
    v17[6] = 500
           * (((int)((unsigned __int64)(274877907LL * v14) >> 32) >> 5)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v14) >> 32) >> 31));
    v17[7] = 1000
           * (((int)((unsigned __int64)(274877907LL * v51) >> 32) >> 6)
            + 1
            + ((unsigned int)((unsigned __int64)(274877907LL * v51) >> 32) >> 31));
    std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::emplace<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
      v6,
      v47,
      v7,
      &v43,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( v43 )
      operator delete(v43, 0x20uLL);
LABEL_23:
    v16 = v50;
    goto LABEL_17;
  }
}
