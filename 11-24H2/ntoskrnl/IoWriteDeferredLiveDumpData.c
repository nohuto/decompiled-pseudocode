/*
 * XREFs of IoWriteDeferredLiveDumpData @ 0x140594B84
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x140706800 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpReleaseResources @ 0x140599DDC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14059A9C0 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059AAE4 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059ACCC (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A0300 (IopLiveDumpTraceNoArgs.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoWriteDeferredLiveDumpData(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 MillisecondCounter; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  __int64 *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  __int64 *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]

  v2 = 0LL;
  IopLiveDumpTraceInterfaceStart(1LL);
  IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_WRITE_DEFERRED_DUMPDATA_TO_FILE_START);
  if ( *(_QWORD *)(a1 + 64) )
  {
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
    v3 = IopLiveDumpWriteDumpFile(a1);
    v2 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    IopLiveDumpTraceDumpFileWriteEnd(a1, v2, 1LL, v3);
    if ( (v3 & 0x80000000) == 0 && (*(_BYTE *)(a1 + 80) & 2) != 0 )
      v3 = 261;
  }
  else
  {
    v3 = -1073741816;
  }
  IopLiveDumpTraceInterfaceEnd(a1, 1LL, v3, v2);
  if ( v3 != -1073741816
    && (unsigned int)dword_140E06E80 > 5
    && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = &v8;
    v5 = *(_QWORD *)(a1 + 560);
    v13 = 8;
    v16 = 8;
    v19 = 8;
    v6 = *(_QWORD *)(v5 + 4000);
    v15 = &v9;
    v18 = &v10;
    v9 = v6;
    v8 = 0x1000000LL;
    v10 = v2;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06E80,
      (unsigned __int8 *)&word_1400461B6,
      (const GUID *)(a1 + 968),
      (const GUID *)(a1 + 952),
      5u,
      &v11);
  }
  EtwActivityIdControl(2u, (LPGUID)(a1 + 952));
  IopLiveDumpReleaseResources(a1);
  ExFreePoolWithTag((PVOID)a1, 0x706D644Cu);
  return v3;
}
