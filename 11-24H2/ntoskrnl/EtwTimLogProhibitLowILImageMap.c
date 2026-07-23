/*
 * XREFs of EtwTimLogProhibitLowILImageMap @ 0x1407AC594
 * Callers:
 *     MiAllowImageMap @ 0x14086D7E4 (MiAllowImageMap.c)
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

void __fastcall EtwTimLogProhibitLowILImageMap(int a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 *v3; // rax
  __int64 *v4; // rsi
  const wchar_t *v5; // r14
  unsigned __int16 v8; // ax
  ULONG v9; // edi
  int v10; // eax
  const wchar_t *v11; // rcx
  int v12; // eax
  __int16 v13; // cx
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  __int16 v17; // r10
  int v18; // r8d
  unsigned int v19; // r8d
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rcx
  ULONG UserDataCount; // r12d
  const EVENT_DESCRIPTOR *v25; // rdi
  int v26; // r14d
  void *v27; // rdi
  _WORD v28[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v30; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+78h] [rbp-90h] BYREF
  int *v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  _DWORD *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  __int64 v40; // [rsp+B8h] [rbp-50h]
  _DWORD v41[2]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  void *v44; // [rsp+D8h] [rbp-30h]
  _DWORD v45[2]; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  _DWORD *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  __int64 v50; // [rsp+108h] [rbp+0h]
  _DWORD v51[2]; // [rsp+110h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  const wchar_t *v53; // [rsp+128h] [rbp+20h]
  int v54; // [rsp+130h] [rbp+28h]
  int v55; // [rsp+134h] [rbp+2Ch]
  int *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  const wchar_t *v58; // [rsp+148h] [rbp+40h]
  int v59; // [rsp+150h] [rbp+48h]
  int v60; // [rsp+154h] [rbp+4Ch]
  _QWORD v61[20]; // [rsp+158h] [rbp+50h] BYREF

  v3 = *(__int64 **)(a2 + 848);
  v4 = &EmptyUnicodeString;
  v31 = a1;
  v32 = 0LL;
  v5 = L"(null)";
  if ( v3 )
    v4 = v3;
  v33 = 0LL;
  v8 = *(_WORD *)v4;
  v9 = 12;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v8 )
  {
    v28[0] = v8 >> 1;
    UserData.Ptr = (ULONGLONG)v28;
    v10 = *(unsigned __int16 *)v4;
    v11 = (const wchar_t *)v4[1];
  }
  else
  {
    v28[0] = 6;
    UserData.Ptr = (ULONGLONG)v28;
    v11 = L"(null)";
    v10 = 12;
  }
  v53 = v11;
  v54 = v10;
  v55 = 0;
  EtwpQueryProcessCommandLine(a2, &v33);
  v57 = 2LL;
  v56 = &v29;
  if ( (_WORD)v33 )
  {
    v58 = (const wchar_t *)*((_QWORD *)&v33 + 1);
    v12 = (unsigned __int16)v33;
    v13 = (unsigned __int16)v33 >> 1;
  }
  else
  {
    v58 = L"(null)";
    v12 = 12;
    v13 = 6;
  }
  LOWORD(v29) = v13;
  v59 = v12;
  v60 = 0;
  v14 = EtwpTiFillProcessIdentity(v61, a2, &v32);
  v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v14 + 4)), (__int64)KeGetCurrentThread());
  v19 = v15 + v18;
  v20 = v15;
  if ( a3 && *a3 )
  {
    v5 = (const wchar_t *)*((_QWORD *)a3 + 1);
    v9 = *a3;
    v30 = *a3 >> 1;
    v21 = 16LL * v19;
    v22 = v19 + 1;
  }
  else
  {
    v21 = 16LL * v19;
    v22 = v20 + v16 + 5;
    v30 = v17;
  }
  v23 = 16LL * v22;
  UserDataCount = v22 + 1;
  *(ULONGLONG *)((char *)&UserData.Ptr + v21) = (ULONGLONG)&v30;
  *(ULONG *)((char *)&UserData.Size + v21) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v21) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v23) = (ULONGLONG)v5;
  *(ULONG *)((char *)&UserData.Size + v23) = v9;
  v25 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_LOWIL_IMAGE_MAP;
  *(ULONG *)((char *)&UserData.Reserved + v23) = 0;
  v26 = v31;
  if ( v31 != 1 )
    v25 = &MITIGATION_ENFORCE_PROHIBIT_LOWIL_IMAGE_MAP;
  if ( (unsigned int)Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
    EtwWriteEx(EtwSecurityMitigationsRegHandle, v25, 0LL, 1u, 0LL, 0LL, UserDataCount, &UserData);
  else
    EtwWrite(EtwSecurityMitigationsRegHandle, v25, 0LL, UserDataCount, &UserData);
  v27 = (void *)*((_QWORD *)&v33 + 1);
  if ( (unsigned int)dword_140E09198 > 5 && tlgKeywordOn((__int64)&dword_140E09198, 0x400000000000LL) )
  {
    v31 = v26;
    v36 = &v31;
    v37 = 4LL;
    v38 = v41;
    v40 = v4[1];
    v41[0] = *(unsigned __int16 *)v4;
    v42 = v45;
    v45[0] = (unsigned __int16)v33;
    v34 = v32;
    v46 = &v34;
    v48 = v51;
    v50 = *((_QWORD *)a3 + 1);
    v51[0] = *a3;
    v39 = 2LL;
    v41[1] = 0;
    v43 = 2LL;
    v44 = v27;
    v45[1] = 0;
    v47 = 8LL;
    v49 = 2LL;
    v51[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09198,
      (unsigned __int8 *)&byte_14005431F,
      0LL,
      0LL,
      0xAu,
      &v35);
  }
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
}
