/*
 * XREFs of FreeContext @ 0x14000AF70
 * Callers:
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     LoadDDB @ 0x14006B644 (LoadDDB.c)
 *     SyncLoadDDB @ 0x1400C90F8 (SyncLoadDDB.c)
 * Callees:
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400363B0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140036458 (_tlgKeywordOn.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1400548B0 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogTimeoutAction @ 0x14006A24C (AmliWatchdogTimeoutAction.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall FreeContext(char *Entry)
{
  char **v2; // rdx
  PVOID *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned __int128 v9; // rax
  __int64 *v10; // rdi
  KIRQL v11; // r14
  __int64 v12; // rsi
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rdi
  int v19; // r8d
  int v20; // r9d
  unsigned __int64 v21; // kr00_8
  unsigned __int16 v22; // ax
  __int16 v23; // [rsp+30h] [rbp-29h] BYREF
  int v24; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-9h]
  int v28; // [rsp+58h] [rbp-1h]
  int v29; // [rsp+5Ch] [rbp+3h]
  int *v30; // [rsp+60h] [rbp+7h]
  __int64 v31; // [rsp+68h] [rbp+Fh]
  unsigned __int64 *v32; // [rsp+70h] [rbp+17h]
  _QWORD v33[3]; // [rsp+78h] [rbp+1Fh] BYREF

  byte_140088E10 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v2 = (char **)*((_QWORD *)Entry + 2);
  if ( v2[1] != Entry + 16
    || (v3 = (PVOID *)*((_QWORD *)Entry + 3), *v3 != Entry + 16)
    || (*v3 = v2, v4 = Entry + 32, v2[1] = (char *)v3, v5 = *((_QWORD *)Entry + 4), *(char **)(v5 + 8) != Entry + 32)
    || (v6 = (_QWORD *)*((_QWORD *)Entry + 5), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *((_QWORD *)Entry + 5) = Entry + 32;
  *v4 = v4;
  KeReleaseSpinLock(&gmutCtxtList, byte_140088E10);
  FreeDataBuffs(Entry + 128, 1LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v7);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext
    && EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    *(_QWORD *)&UserData.Size = 2LL;
    v21 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)Entry + 57);
    v22 = *((_WORD *)Entry + 220);
    v28 = v22;
    v23 = v22 >> 1;
    UserData.Ptr = (unsigned __int64)&v23;
    v27 = *((_QWORD *)Entry + 56);
    v30 = &v24;
    v25 = v21 / 0x2710;
    v32 = &v25;
    v29 = 0;
    LOWORD(v24) = 0;
    v31 = 2LL;
    v33[0] = 8LL;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
  }
  v8 = *((_QWORD *)Entry + 57);
  v9 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v8) * (unsigned __int128)0x346DC5D63886594BuLL;
  if ( v8
    && (unsigned int)((MEMORY[0xFFFFF78000000008] - v8) / 0x2710uLL) >= 0x3E8
    && (unsigned int)dword_140086930 > 5
    && (unsigned __int8)tlgKeywordOn(&dword_140086930) )
  {
    v31 = 2LL;
    v30 = (int *)v33;
    v32 = (unsigned __int64 *)*((_QWORD *)Entry + 56);
    v33[0] = *((unsigned __int16 *)Entry + 220);
    v33[1] = &v24;
    v24 = v20;
    v33[2] = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_140086930, (int)&dword_14007D121, v19, v20, 5u, (__int64)&UserData);
  }
  v10 = (__int64 *)*((_QWORD *)Entry + 58);
  if ( v10 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
    v12 = *v10;
    if ( *((_BYTE *)v10 + 88) || *(_BYTE *)(v12 + 472) )
    {
      *((_BYTE *)v10 + 88) = 0;
      if ( !KeCancelTimer((PKTIMER)(v10 + 13)) )
      {
        if ( *(_BYTE *)(v12 + 472) )
          AcpiQueueRecordBlackboxInformation();
        else
          AmliWatchdogTimeoutAction(v10);
      }
    }
    KeReleaseSpinLock(&AcpiWatchdogLock, v11);
    ExFreePoolWithTag(*((PVOID *)Entry + 58), 0);
  }
  v13 = (void *)*((_QWORD *)Entry + 56);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *((_QWORD *)Entry + 9);
  if ( v14 )
  {
    DereferenceObjectEx(v14, *((_QWORD *)&v9 + 1));
    *((_QWORD *)Entry + 9) = 0LL;
  }
  v15 = *((_QWORD *)Entry + 53);
  if ( v15 )
  {
    DereferenceObjectEx(v15, *((_QWORD *)&v9 + 1));
    *((_QWORD *)Entry + 53) = 0LL;
  }
  v16 = *((_QWORD *)Entry + 10);
  if ( v16 )
  {
    DereferenceObjectEx(v16, *((_QWORD *)&v9 + 1));
    *((_QWORD *)Entry + 10) = 0LL;
  }
  v17 = (_QWORD *)*((_QWORD *)Entry + 63);
  if ( v17 )
  {
    do
    {
      v18 = (_QWORD *)v17[3];
      ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, v17);
      v17 = v18;
    }
    while ( v18 );
  }
  ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, Entry);
}
