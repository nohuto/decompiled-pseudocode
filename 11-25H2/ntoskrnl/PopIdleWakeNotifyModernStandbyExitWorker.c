/*
 * XREFs of PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A88870
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140279D80 (KeQueryInterruptTimePrecise.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PpmConvertTimeTo @ 0x1403B1DAC (PpmConvertTimeTo.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopIdleWakeFreeWakeSourceAccounting @ 0x140752518 (PopIdleWakeFreeWakeSourceAccounting.c)
 *     PopIdleWakeFreeWakeSourceDiagnostic @ 0x140752564 (PopIdleWakeFreeWakeSourceDiagnostic.c)
 *     PopIdleWakeTraceWakeSourceDiagnostic @ 0x140A6A2F4 (PopIdleWakeTraceWakeSourceDiagnostic.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x140A9AB70 (PopIdleWakeSourceAccountingToDiagnostic.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopIdleWakeNotifyModernStandbyExitWorker(LARGE_INTEGER *P)
{
  ULONGLONG *v2; // rbx
  char v3; // si
  __int64 v4; // r14
  LARGE_INTEGER *v5; // rbx
  __int64 v6; // r14
  ULONGLONG v7; // rbx
  LARGE_INTEGER v8; // r8
  __int16 v9; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-CCh] BYREF
  LARGE_INTEGER v11; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER v12; // [rsp+48h] [rbp-C0h] BYREF
  ULONGLONG QuadPart; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[1184]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+508h] [rbp+400h] BYREF
  ULONGLONG *p_QuadPart; // [rsp+528h] [rbp+420h]
  __int64 v18; // [rsp+530h] [rbp+428h]
  __int16 *v19; // [rsp+538h] [rbp+430h]
  __int64 v20; // [rsp+540h] [rbp+438h]
  LARGE_INTEGER *v21; // [rsp+548h] [rbp+440h]
  __int64 v22; // [rsp+550h] [rbp+448h]
  __int16 *v23; // [rsp+558h] [rbp+450h]
  __int64 v24; // [rsp+560h] [rbp+458h]
  _BYTE *v25; // [rsp+568h] [rbp+460h]
  __int64 v26; // [rsp+570h] [rbp+468h]
  _QWORD *v27; // [rsp+578h] [rbp+470h]
  __int64 v28; // [rsp+580h] [rbp+478h]
  _BYTE v29[48]; // [rsp+588h] [rbp+480h] BYREF

  memset_0(v15, 0, 0x498uLL);
  v11.QuadPart = 0LL;
  v12.QuadPart = 0LL;
  KeWaitForSingleObject(&P[4768], Executive, 0, 0, 0LL);
  KeQueryInterruptTimePrecise(&v11);
  v2 = (ULONGLONG *)v29;
  v3 = 1;
  v4 = 6LL;
  do
  {
    *v2 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v2 + (char *)P - v29 + 96), 0x3E8uLL);
    ++v2;
    --v4;
  }
  while ( v4 );
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    QuadPart = P[4758].QuadPart;
    v9 = 6;
    p_QuadPart = &QuadPart;
    v10 = 6;
    v19 = &v9;
    v18 = 8LL;
    v21 = P + 9;
    v20 = 2LL;
    v23 = &v10;
    v25 = v29;
    v27 = v14;
    v22 = 24LL;
    v24 = 2LL;
    v26 = 48LL;
    v14[0] = 0x1000000LL;
    v28 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)&word_14004CB66, 0LL, 0LL, 8u, v16);
  }
  v5 = P + 18;
  v6 = 32LL;
  do
  {
    if ( v5[100].LowPart || v5[52].LowPart )
    {
      memset_0(v15, 0, 0x498uLL);
      if ( (int)PopIdleWakeSourceAccountingToDiagnostic(v5, v15) >= 0 )
        PopIdleWakeTraceWakeSourceDiagnostic(P[4758].QuadPart, (__int64)v15);
      PopIdleWakeFreeWakeSourceDiagnostic((__int64)v15);
      PopIdleWakeFreeWakeSourceAccounting(v5);
    }
    v5 += 148;
    --v6;
  }
  while ( v6 );
  KeQueryInterruptTimePrecise(&v12);
  v7 = PpmConvertTimeTo(v11.QuadPart - P[4759].QuadPart, 0x3E8uLL);
  v8.QuadPart = PpmConvertTimeTo(v12.QuadPart - v11.QuadPart, 0x3E8uLL);
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    if ( (qword_140E07690 & 0x200000000000LL) == 0 || (qword_140E07698 & 0x200000000000LL) != qword_140E07698 )
      v3 = 0;
    if ( v3 )
    {
      v14[0] = P[4758].QuadPart;
      v12 = v8;
      p_QuadPart = v14;
      v18 = 8LL;
      v19 = (__int16 *)&QuadPart;
      QuadPart = v7;
      v21 = &v12;
      v23 = (__int16 *)&v11;
      v20 = 8LL;
      v22 = 8LL;
      v11.QuadPart = 0x1000000LL;
      v24 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&dword_14004CBE4,
        0LL,
        0LL,
        6u,
        v16);
    }
  }
  ExFreePoolWithTag(P, 0x67696450u);
}
