/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x140083BF4
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BC0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14000119C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400012F4 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1400017BC (_tlgCreate1Sz_char.c)
 *     GetImageTuple @ 0x1400AACB4 (GetImageTuple.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 ReturnAddress,
        unsigned int OriginatingBinary,
        const char *BucketArg1,
        unsigned int BucketArg2,
        unsigned int ReturnAddress_0)
{
  KIRQL v7; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v9; // r14
  _LIST_ENTRY *v10; // rdi
  _LIST_ENTRY *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  _LIST_ENTRY *v18; // r10
  unsigned int ImageTuple; // r12d
  unsigned __int64 v20; // rdx
  unsigned int v21; // ebx
  int Flink_high; // eax
  int Blink; // edi
  unsigned int v24; // r10d
  __int64 v25; // r14
  const char *v26; // r9
  const char *v27; // rdx
  KIRQL CurrentIrql; // al
  unsigned int v29; // r8d
  unsigned int v30; // edi
  const char *v31; // rdx
  const _GUID *v32; // r8
  KIRQL v33; // al
  _LIST_ENTRY *v34; // rcx
  unsigned int SizeOfImage; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int _tlgTemp0; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int _tlgTemp1; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int _tlgTemp2; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int _tlgTemp3; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 _tlgTemp5; // [rsp+68h] [rbp-98h] OVERLAPPED BYREF
  unsigned int _tlgTemp7; // [rsp+70h] [rbp-90h] BYREF
  unsigned int _tlgTemp9; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int _tlgTemp10; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+7Ch] [rbp-84h]
  _EVENT_DATA_DESCRIPTOR _tlgData[13]; // [rsp+90h] [rbp-70h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF

  v37 = BucketArg2;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v7 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
  v9 = v7;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == g_MicrosoftTelemetryAssertsTriggeredList.Flink )
  {
LABEL_5:
    Pool2 = (_LIST_ENTRY *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = Pool2;
    if ( !Pool2 )
    {
$Done_43:
      KeReleaseSpinLock(&g_AssertSpinLock, v9);
      return;
    }
    v12 = MEMORY[0xFFFFF78000000320];
    Pool2->Flink = (_LIST_ENTRY *)ReturnAddress;
    TimeIncrement = KeQueryTimeIncrement();
    LODWORD(v10[1].Flink) = 0;
    HIDWORD(v10[1].Flink) = 0;
    LODWORD(v10[1].Blink) = 0;
    v10->Blink = (_LIST_ENTRY *)(((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
                               + ((unsigned __int64)((unsigned __int128)(v12
                                                                       * TimeIncrement
                                                                       * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
                               - 60001);
    v14 = v10 + 2;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    if ( g_MicrosoftTelemetryAssertsTriggeredList.Flink->Blink != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    v14->Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    v10[2].Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    v15->Blink = v14;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = v10 + 2;
  }
  else
  {
    while ( 1 )
    {
      v10 = Flink - 2;
      if ( Flink[-2].Flink == (_LIST_ENTRY *)ReturnAddress )
        break;
      Flink = Flink->Flink;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == Flink )
        goto LABEL_5;
    }
  }
  ++LODWORD(v10[1].Flink);
  ++HIDWORD(v10[1].Flink);
  v16 = MEMORY[0xFFFFF78000000320];
  _tlgTemp0 = 0;
  SizeOfImage = 0;
  v17 = v16 * KeQueryTimeIncrement();
  if ( v17 / 10000 - (unsigned __int64)v10->Blink <= 0xEA60 )
    goto $Done_43;
  ImageTuple = GetImageTuple((_IMAGE_DOS_HEADER *)v17, &_tlgTemp0, &SizeOfImage);
  if ( ImageTuple
    && ReturnAddress >= 0x140000000LL
    && (v20 = 0x140000000LL + SizeOfImage, v20 > 0x140000000LL)
    && ReturnAddress <= v20 )
  {
    v21 = ReturnAddress - 0x40000000;
  }
  else
  {
    v21 = 0;
  }
  LODWORD(v45) = v10[1].Flink;
  Flink_high = HIDWORD(v10[1].Flink);
  v10->Blink = v18;
  Blink = (int)v10[1].Blink;
  HIDWORD(v45) = Flink_high;
  KeReleaseSpinLock(&g_AssertSpinLock, v9);
  v24 = 0;
  v25 = _tlgTemp0;
  if ( !BucketArg1 )
    BucketArg1 = (const char *)g_ModuleName;
  if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
  {
    _tlgTemp0 = 10;
    _tlgData[2].Ptr = (unsigned __int64)&_tlgTemp0;
    v27 = "<unknown>";
    *(_QWORD *)&_tlgData[2].Size = 4LL;
    _tlgData[3].Ptr = (unsigned __int64)&_tlgTemp1;
    _tlgTemp1 = v21;
    *(_QWORD *)&_tlgData[3].Size = 4LL;
    _tlgData[4].Ptr = (unsigned __int64)&_tlgTemp2;
    *(_QWORD *)&_tlgData[4].Size = 4LL;
    _tlgTemp2 = ImageTuple != 0 ? v25 : 0;
    *(_QWORD *)&_tlgData[5].Size = 4LL;
    _tlgData[5].Ptr = (unsigned __int64)&_tlgTemp3;
    _tlgTemp3 = ImageTuple != 0 ? SizeOfImage : 0;
    if ( v26 )
      v27 = v26;
    tlgCreate1Sz_char(&_tlgData[6], v27);
    _tlgData[7].Ptr = (unsigned __int64)&_tlgTemp5;
    _tlgData[8].Ptr = (unsigned __int64)&_tlgTemp5 + 4;
    _tlgTemp5 = v45;
    *(_QWORD *)&_tlgData[7].Size = 4LL;
    *(_QWORD *)&_tlgData[8].Size = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    _tlgData[9].Reserved = 0;
    _tlgTemp7 = CurrentIrql;
    _tlgData[9].Size = 4;
    _tlgData[9].Ptr = (unsigned __int64)&_tlgTemp7;
    tlgCreate1Sz_char(&_tlgData[10], BucketArg1);
    _tlgData[11].Reserved = 0;
    _tlgData[12].Reserved = 0;
    _tlgData[11].Ptr = (unsigned __int64)&_tlgTemp9;
    _tlgTemp10 = ReturnAddress_0;
    _tlgTemp9 = v37;
    _tlgData[12].Ptr = (unsigned __int64)&_tlgTemp10;
    _tlgData[11].Size = v29;
    _tlgData[12].Size = v29;
    tlgCreate1Sz_char(&pDesc, "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer(
      &Tlgmtakm_hTelemetryAssertProv,
      (char *)&tlgEvent_3._tlgChannel,
      0LL,
      0LL,
      0xEu,
      _tlgData);
    v24 = 0;
  }
  if ( Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.LevelPlus1 > v24 && !Blink && !KeGetCurrentIrql() )
  {
    v30 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v21, g_ModuleName, v25, SizeOfImage, 0LL, 0LL, 0);
    if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
    {
      _tlgTemp10 = 10;
      _tlgData[2].Ptr = (unsigned __int64)&_tlgTemp10;
      v31 = "<unknown>";
      *(_QWORD *)&_tlgData[2].Size = 4LL;
      _tlgData[3].Ptr = (unsigned __int64)&_tlgTemp9;
      _tlgTemp9 = v21;
      *(_QWORD *)&_tlgData[3].Size = 4LL;
      _tlgData[4].Ptr = (unsigned __int64)&_tlgTemp7;
      *(_QWORD *)&_tlgData[4].Size = 4LL;
      _tlgTemp7 = ImageTuple != 0 ? v25 : 0;
      *(_QWORD *)&_tlgData[5].Size = 4LL;
      HIDWORD(_tlgTemp5) = ImageTuple != 0 ? SizeOfImage : 0;
      _tlgData[5].Ptr = (unsigned __int64)&_tlgTemp5 + 4;
      if ( g_ModuleName )
        v31 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(&_tlgData[6], v31);
      LODWORD(_tlgTemp5) = v45;
      *(_QWORD *)&_tlgData[7].Size = 4LL;
      _tlgData[7].Ptr = (unsigned __int64)&_tlgTemp5;
      _tlgTemp3 = HIDWORD(v45);
      _tlgData[8].Ptr = (unsigned __int64)&_tlgTemp3;
      _tlgData[9].Ptr = (unsigned __int64)&_tlgTemp2;
      *(_QWORD *)&_tlgData[8].Size = 4LL;
      _tlgTemp2 = v30;
      *(_QWORD *)&_tlgData[9].Size = 4LL;
      tlgCreate1Sz_char(&_tlgData[10], BucketArg1);
      _tlgTemp1 = v37;
      *(_QWORD *)&_tlgData[11].Size = 4LL;
      _tlgData[11].Ptr = (unsigned __int64)&_tlgTemp1;
      v37 = ReturnAddress_0;
      _tlgData[12].Ptr = (unsigned __int64)&v37;
      *(_QWORD *)&_tlgData[12].Size = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        &Tlgmtakm_hTelemetryAssertProv,
        (char *)&tlgEvent_5._tlgChannel,
        v32,
        0LL,
        0xDu,
        _tlgData);
    }
    if ( !v30 )
    {
      v33 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v34 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
      v9 = v33;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != g_MicrosoftTelemetryAssertsTriggeredList.Flink )
      {
        while ( v34[-2].Flink != (_LIST_ENTRY *)ReturnAddress )
        {
          v34 = v34->Flink;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v34 )
            goto $Done_43;
        }
        ++LODWORD(v34[-1].Blink);
      }
      goto $Done_43;
    }
  }
}
