/*
 * XREFs of DpiInitializeEx @ 0x140235148
 * Callers:
 *     DpiInitializeInternal @ 0x14007C598 (DpiInitializeInternal.c)
 *     DpiKmdDodInitialize @ 0x14007C690 (DpiKmdDodInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiGetDriverDataSizeFromVersion @ 0x140189FF8 (DpiGetDriverDataSizeFromVersion.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiInitializeEx(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PCUNICODE_STRING SourceString,
        unsigned int *Src,
        __int64 a4,
        char a5)
{
  NTSTATUS v9; // eax
  int v10; // ebx
  unsigned int v11; // edx
  int DriverDataSizeFromVersion; // eax
  __int64 v13; // r9
  _WORD *v14; // rcx
  __int64 Pool2; // rax
  void *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  PVOID *v21; // rcx
  PVOID DriverObjectExtension; // [rsp+30h] [rbp-81h] BYREF
  size_t Size; // [rsp+38h] [rbp-79h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+40h] [rbp-71h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-69h] BYREF
  __int64 v27; // [rsp+58h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-41h] BYREF
  _OWORD v30[2]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+Fh]

  v30[0] = *(_OWORD *)L"\\Driver\\IndirectKmd";
  v31 = *(_QWORD *)L"Kmd";
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  v30[1] = *(_OWORD *)L"IndirectKmd";
  *(_QWORD *)&String1.Length = 2621478LL;
  String1.Buffer = (wchar_t *)v30;
  v9 = IoAllocateDriverObjectExtension(
         ClientIdentificationAddress,
         ClientIdentificationAddress,
         0x698u,
         &DriverObjectExtension);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 3622;
LABEL_35:
    if ( DriverObjectExtension && *((_QWORD *)DriverObjectExtension + 6) )
      RtlFreeUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40));
    goto LABEL_38;
  }
  *((_DWORD *)DriverObjectExtension + 4) = 1953656900;
  *((_DWORD *)DriverObjectExtension + 5) = 1;
  *((_DWORD *)DriverObjectExtension + 6) = 2;
  *((_QWORD *)DriverObjectExtension + 4) = ClientIdentificationAddress;
  *((_BYTE *)DriverObjectExtension + 132) = a5;
  *((_BYTE *)DriverObjectExtension + 134) = 0;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
    *((_BYTE *)DriverObjectExtension + 134) = 1;
  if ( Src )
  {
    *((_BYTE *)DriverObjectExtension + 133) = 0;
    v11 = *Src;
    *((_DWORD *)DriverObjectExtension + 7) = *Src;
    DriverDataSizeFromVersion = DpiGetDriverDataSizeFromVersion(0, v11, 1544, &Size);
    v10 = DriverDataSizeFromVersion;
    if ( DriverDataSizeFromVersion < 0 )
    {
      WdLogSingleEntry1(2LL, DriverDataSizeFromVersion);
      WdLogGlobalForLineNumber = 3663;
      goto LABEL_35;
    }
    memmove((char *)DriverObjectExtension + 136, Src, (unsigned int)Size);
    *((_QWORD *)DriverObjectExtension + 210) = 0LL;
    goto LABEL_18;
  }
  *((_BYTE *)DriverObjectExtension + 133) = 1;
  memset((char *)DriverObjectExtension + 136, 0, 0x610uLL);
  *((_DWORD *)DriverObjectExtension + 7) = *(_DWORD *)a4;
  *((_DWORD *)DriverObjectExtension + 34) = *(_DWORD *)a4;
  *((_QWORD *)DriverObjectExtension + 18) = *(_QWORD *)(a4 + 8);
  *((_QWORD *)DriverObjectExtension + 19) = *(_QWORD *)(a4 + 16);
  *((_QWORD *)DriverObjectExtension + 20) = *(_QWORD *)(a4 + 24);
  *((_QWORD *)DriverObjectExtension + 21) = *(_QWORD *)(a4 + 32);
  *((_QWORD *)DriverObjectExtension + 22) = *(_QWORD *)(a4 + 40);
  *((_QWORD *)DriverObjectExtension + 23) = *(_QWORD *)(a4 + 48);
  *((_QWORD *)DriverObjectExtension + 24) = *(_QWORD *)(a4 + 56);
  *((_QWORD *)DriverObjectExtension + 25) = *(_QWORD *)(a4 + 64);
  *((_QWORD *)DriverObjectExtension + 26) = *(_QWORD *)(a4 + 72);
  *((_QWORD *)DriverObjectExtension + 27) = *(_QWORD *)(a4 + 80);
  *((_QWORD *)DriverObjectExtension + 28) = *(_QWORD *)(a4 + 88);
  *((_QWORD *)DriverObjectExtension + 29) = *(_QWORD *)(a4 + 96);
  *((_QWORD *)DriverObjectExtension + 30) = *(_QWORD *)(a4 + 104);
  *((_QWORD *)DriverObjectExtension + 31) = *(_QWORD *)(a4 + 112);
  *((_QWORD *)DriverObjectExtension + 32) = *(_QWORD *)(a4 + 120);
  *((_QWORD *)DriverObjectExtension + 33) = *(_QWORD *)(a4 + 128);
  *((_QWORD *)DriverObjectExtension + 34) = *(_QWORD *)(a4 + 136);
  *((_QWORD *)DriverObjectExtension + 46) = *(_QWORD *)(a4 + 144);
  *((_QWORD *)DriverObjectExtension + 47) = *(_QWORD *)(a4 + 152);
  *((_QWORD *)DriverObjectExtension + 48) = *(_QWORD *)(a4 + 160);
  *((_QWORD *)DriverObjectExtension + 51) = *(_QWORD *)(a4 + 168);
  *((_QWORD *)DriverObjectExtension + 52) = *(_QWORD *)(a4 + 176);
  *((_QWORD *)DriverObjectExtension + 54) = *(_QWORD *)(a4 + 184);
  *((_QWORD *)DriverObjectExtension + 55) = *(_QWORD *)(a4 + 192);
  *((_QWORD *)DriverObjectExtension + 56) = *(_QWORD *)(a4 + 200);
  *((_QWORD *)DriverObjectExtension + 58) = *(_QWORD *)(a4 + 208);
  *((_QWORD *)DriverObjectExtension + 59) = *(_QWORD *)(a4 + 216);
  *((_QWORD *)DriverObjectExtension + 60) = *(_QWORD *)(a4 + 224);
  *((_QWORD *)DriverObjectExtension + 61) = *(_QWORD *)(a4 + 232);
  *((_QWORD *)DriverObjectExtension + 63) = *(_QWORD *)(a4 + 240);
  *((_QWORD *)DriverObjectExtension + 87) = *(_QWORD *)(a4 + 248);
  *((_QWORD *)DriverObjectExtension + 210) = *(_QWORD *)(a4 + 256);
  *((_QWORD *)DriverObjectExtension + 92) = *(_QWORD *)(a4 + 264);
  *((_QWORD *)DriverObjectExtension + 93) = *(_QWORD *)(a4 + 272);
  *((_QWORD *)DriverObjectExtension + 94) = *(_QWORD *)(a4 + 280);
  if ( *(_DWORD *)a4 >= 0x3005u )
    *((_QWORD *)DriverObjectExtension + 96) = *(_QWORD *)(a4 + 288);
  if ( *(_DWORD *)a4 < 0x3007u )
    *((_QWORD *)DriverObjectExtension + 63) = 0LL;
  else
    *((_QWORD *)DriverObjectExtension + 65) = *(_QWORD *)(a4 + 296);
  if ( *(_DWORD *)a4 >= 0x3009u )
  {
    *((_QWORD *)DriverObjectExtension + 88) = *(_QWORD *)(a4 + 304);
    *((_QWORD *)DriverObjectExtension + 97) = *(_QWORD *)(a4 + 312);
  }
  v14 = DriverObjectExtension;
  if ( *((_DWORD *)DriverObjectExtension + 7) >= 0x5006u )
  {
    *((_QWORD *)DriverObjectExtension + 118) = *(_QWORD *)(a4 + 328);
LABEL_18:
    v14 = DriverObjectExtension;
  }
  v14[21] = SourceString->Length + 2;
  *((_WORD *)DriverObjectExtension + 20) = SourceString->Length;
  Pool2 = ExAllocatePool2(256LL, *((unsigned __int16 *)DriverObjectExtension + 21), 1953656900LL, v13);
  *((_QWORD *)DriverObjectExtension + 6) = Pool2;
  v16 = (void *)*((_QWORD *)DriverObjectExtension + 6);
  if ( !v16 )
  {
    v10 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 3775;
    goto LABEL_35;
  }
  memset(v16, 0, *((unsigned __int16 *)DriverObjectExtension + 21));
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)DriverObjectExtension + 40), SourceString);
  KeInitializeMutex((PRKMUTEX)((char *)DriverObjectExtension + 72), 0);
  v17 = (char *)DriverObjectExtension + 56;
  *((_QWORD *)DriverObjectExtension + 8) = (char *)DriverObjectExtension + 56;
  *v17 = v17;
  AcquireMiniportListMutex();
  v18 = (_QWORD *)qword_14015DD90;
  v19 = DriverObjectExtension;
  if ( *(__int64 **)qword_14015DD90 != &qword_14015DD88 )
LABEL_40:
    __fastfail(3u);
  *(_QWORD *)DriverObjectExtension = &qword_14015DD88;
  v19[1] = v18;
  *v18 = v19;
  qword_14015DD90 = (__int64)v19;
  ReleaseMiniportListMutex();
  WdLogSingleEntry1(4LL, DriverObjectExtension);
  WdLogGlobalForLineNumber = 3801;
  if ( *((_BYTE *)DriverObjectExtension + 134) == 1 )
    memset64(ClientIdentificationAddress->MajorFunction, (unsigned __int64)DpiDispatchDefault, 0x1CuLL);
  ClientIdentificationAddress->MajorFunction[0] = (PDRIVER_DISPATCH)&DpiDispatchCreate;
  ClientIdentificationAddress->MajorFunction[27] = (PDRIVER_DISPATCH)&DpiDispatchPnp;
  ClientIdentificationAddress->MajorFunction[22] = (PDRIVER_DISPATCH)&DpiDispatchPower;
  ClientIdentificationAddress->MajorFunction[14] = (PDRIVER_DISPATCH)&DpiDispatchIoctl;
  ClientIdentificationAddress->MajorFunction[15] = (PDRIVER_DISPATCH)&DpiDispatchInternalIoctl;
  ClientIdentificationAddress->MajorFunction[23] = (PDRIVER_DISPATCH)DpiDispatchSystemControl;
  ClientIdentificationAddress->MajorFunction[2] = (PDRIVER_DISPATCH)&DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->MajorFunction[18] = (PDRIVER_DISPATCH)&DpiDispatchCleanupAndClose;
  ClientIdentificationAddress->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)DpiAddDevice;
  ClientIdentificationAddress->DriverUnload = (PDRIVER_UNLOAD)DpiDriverUnload;
  v27 = 0LL;
  if ( (int)KsrGetFirmwareInformation(&v27) >= 0 && !qword_14015E2F0 )
  {
    CallbackObject = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
    {
      qword_14015E2F0 = (__int64)ExRegisterCallback(CallbackObject, DpiKsrCallback, &DpGlobals);
      ObfDereferenceObject(CallbackObject);
      word_14015E2F8 = 0;
      dword_14015E30C = 0;
    }
    if ( !qword_14015E2F0 )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 3870;
    }
  }
  if ( v10 < 0 )
  {
    if ( !DriverObjectExtension )
    {
LABEL_38:
      DxgCreateLiveDumpWithWdLogs(403LL, 2048LL);
      return (unsigned int)v10;
    }
    AcquireMiniportListMutex();
    v20 = *(_QWORD **)DriverObjectExtension;
    if ( *(PVOID *)(*(_QWORD *)DriverObjectExtension + 8LL) == DriverObjectExtension )
    {
      v21 = (PVOID *)*((_QWORD *)DriverObjectExtension + 1);
      if ( *v21 == DriverObjectExtension )
      {
        *v21 = v20;
        v20[1] = v21;
        ReleaseMiniportListMutex();
        goto LABEL_35;
      }
    }
    goto LABEL_40;
  }
  return (unsigned int)v10;
}
