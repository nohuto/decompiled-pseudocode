/*
 * XREFs of EtwpTimLogMitigationForProcess @ 0x140A63DF0
 * Callers:
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
 *     MiArbitraryCodeBlocked @ 0x140A0B8A0 (MiArbitraryCodeBlocked.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x140A63D44 (EtwTimLogProhibitWin32kSystemCalls.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x140A63D9C (EtwTimLogProhibitFsctlSystemCalls.c)
 *     EtwTimLogProhibitDynamicCode @ 0x140A70D2C (EtwTimLogProhibitDynamicCode.c)
 * Callees:
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14064E5BC (Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTimLogMitigationForProcess(int a1, int a2, const EVENT_DESCRIPTOR *a3, __int64 a4, char a5)
{
  __int64 *v5; // rax
  __int64 *v6; // rsi
  const wchar_t *v11; // rcx
  int v12; // edi
  unsigned __int16 v13; // ax
  int v14; // eax
  const wchar_t *v15; // rax
  __int16 v16; // cx
  unsigned int v17; // edi
  ULONG UserDataCount; // edi
  PVOID v19; // rdi
  _WORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+70h] [rbp-90h] BYREF
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  _DWORD *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  _DWORD v35[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  PVOID v38; // [rsp+E0h] [rbp-20h]
  _DWORD v39[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  const wchar_t *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
  __int16 *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  const wchar_t *v48; // [rsp+130h] [rbp+30h]
  int v49; // [rsp+138h] [rbp+38h]
  int v50; // [rsp+13Ch] [rbp+3Ch]
  __int64 v51[16]; // [rsp+140h] [rbp+40h] BYREF

  v5 = *(__int64 **)(a4 + 848);
  v6 = &EmptyUnicodeString;
  v24 = 0LL;
  if ( v5 )
    v6 = v5;
  v11 = L"(null)";
  *(_OWORD *)P = 0LL;
  v12 = 12;
  v13 = *(_WORD *)v6;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v13 )
  {
    v20[0] = v13 >> 1;
    UserData.Ptr = (ULONGLONG)v20;
    v14 = *(unsigned __int16 *)v6;
    v11 = (const wchar_t *)v6[1];
  }
  else
  {
    v20[0] = 6;
    UserData.Ptr = (ULONGLONG)v20;
    v14 = 12;
  }
  v43 = v11;
  v45 = 0;
  v44 = v14;
  EtwpQueryProcessCommandLine(a4, (__int64)P);
  v47 = 2LL;
  v46 = &v21;
  if ( LOWORD(P[0]) )
  {
    v15 = (const wchar_t *)P[1];
    v12 = LOWORD(P[0]);
    v16 = LOWORD(P[0]) >> 1;
  }
  else
  {
    v15 = L"(null)";
    v16 = 6;
  }
  v21 = v16;
  v50 = 0;
  v48 = v15;
  v49 = v12;
  v17 = EtwpTiFillProcessIdentity(v51, a4, &v24) + 4;
  UserDataCount = EtwpTiFillThreadIdentity((__int64)(&UserData + v17), (__int64)KeGetCurrentThread()) + v17;
  if ( (unsigned int)Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
    EtwWriteEx(EtwSecurityMitigationsRegHandle, a3, 0LL, a5 != 0, 0LL, 0LL, UserDataCount, &UserData);
  else
    EtwWrite(EtwSecurityMitigationsRegHandle, a3, 0LL, UserDataCount, &UserData);
  v19 = P[1];
  if ( (unsigned int)dword_140E09198 > 5 && tlgKeywordOn((__int64)&dword_140E09198, 0x200000000000LL) )
  {
    v22 = a1;
    v28 = &v22;
    v29 = 4LL;
    v30 = &v23;
    v23 = a2;
    v32 = v35;
    v34 = v6[1];
    v35[0] = *(unsigned __int16 *)v6;
    v36 = v39;
    v39[0] = LOWORD(P[0]);
    v26 = v24;
    v40 = &v26;
    v31 = 4LL;
    v33 = 2LL;
    v35[1] = 0;
    v37 = 2LL;
    v38 = v19;
    v39[1] = 0;
    v41 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09198, (unsigned __int8 *)byte_140054388, 0LL, 0LL, 9u, &v27);
  }
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
}
