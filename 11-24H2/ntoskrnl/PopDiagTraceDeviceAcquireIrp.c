/*
 * XREFs of PopDiagTraceDeviceAcquireIrp @ 0x1403CC0B4
 * Callers:
 *     PoDeviceAcquireIrp @ 0x1403CC078 (PoDeviceAcquireIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDeviceAcquireIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // r8
  int v4; // eax
  wchar_t *v5; // rcx
  __int64 v6; // rax
  bool v7; // sf
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+60h] [rbp-A0h]
  wchar_t *v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+70h] [rbp-90h]
  int v14; // [rsp+74h] [rbp-8Ch]
  wchar_t pszDest[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v16; // [rsp+120h] [rbp+20h] BYREF

  v16 = a1;
  v8 = a2;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE) )
  {
    if ( !v8
      || (v2 = *(_QWORD *)(v8 + 8), (v3 = *(const wchar_t **)(v2 + 64)) == 0LL)
      || !*(_WORD *)(v2 + 56)
      || (v7 = RtlStringCbCopyNW(pszDest, 0x80uLL, v3, *(unsigned __int16 *)(v2 + 56)) < 0, v4 = 1, v7) )
    {
      v4 = 0;
    }
    *(_QWORD *)&UserData.Size = 8LL;
    v11 = 8LL;
    UserData.Ptr = (ULONGLONG)&v16;
    v5 = pszDest;
    v10 = &v8;
    if ( !v4 )
      v5 = (wchar_t *)&SourceString;
    v6 = -1LL;
    v12 = v5;
    do
      ++v6;
    while ( v5[v6] );
    v13 = 2 * v6 + 2;
    v14 = 0;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
}
