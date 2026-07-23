/*
 * XREFs of EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x14093C388 (MiValidateSectionSigningPolicy.c)
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

void __fastcall EtwTimLogProhibitNonMicrosoftBinaries(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  const wchar_t *v7; // rsi
  unsigned __int16 v10; // ax
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v17; // r15
  int v18; // r8d
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // rax
  ULONG v24; // r12d
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rcx
  ULONG UserDataCount; // r14d
  const EVENT_DESCRIPTOR *v30; // rsi
  void *v31; // rsi
  char v32; // [rsp+48h] [rbp-C0h] BYREF
  char v33; // [rsp+49h] [rbp-BFh] BYREF
  _WORD v34[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v35; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v36; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  _DWORD *v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  __int64 v46; // [rsp+C8h] [rbp-40h]
  _DWORD v47[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  void *v50; // [rsp+E8h] [rbp-20h]
  _DWORD v51[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  _DWORD *v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  __int64 v56; // [rsp+118h] [rbp+10h]
  _DWORD v57[2]; // [rsp+120h] [rbp+18h] BYREF
  char *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  char *v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+148h] [rbp+40h] BYREF
  const wchar_t *v63; // [rsp+158h] [rbp+50h]
  int v64; // [rsp+160h] [rbp+58h]
  int v65; // [rsp+164h] [rbp+5Ch]
  int *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  const wchar_t *v68; // [rsp+178h] [rbp+70h]
  int v69; // [rsp+180h] [rbp+78h]
  int v70; // [rsp+184h] [rbp+7Ch]
  _QWORD v71[24]; // [rsp+188h] [rbp+80h] BYREF
  char v72; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v73; // [rsp+2B0h] [rbp+1A8h] BYREF

  v73 = a4;
  v72 = a3;
  v5 = *(__int64 **)(a2 + 848);
  v6 = &EmptyUnicodeString;
  v7 = L"(null)";
  v38 = 0LL;
  if ( v5 )
    v6 = v5;
  v39 = 0LL;
  v10 = *(_WORD *)v6;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v10 )
  {
    v34[0] = v10 >> 1;
    UserData.Ptr = (ULONGLONG)v34;
    v11 = *(unsigned __int16 *)v6;
    v12 = (const wchar_t *)v6[1];
  }
  else
  {
    v34[0] = 6;
    UserData.Ptr = (ULONGLONG)v34;
    v12 = L"(null)";
    v11 = 12;
  }
  v63 = v12;
  v64 = v11;
  v65 = 0;
  EtwpQueryProcessCommandLine(a2, (__int64)&v39);
  v67 = 2LL;
  v66 = &v35;
  if ( (_WORD)v39 )
  {
    v68 = (const wchar_t *)*((_QWORD *)&v39 + 1);
    v13 = (unsigned __int16)v39;
    v14 = (unsigned __int16)v39 >> 1;
  }
  else
  {
    v68 = L"(null)";
    v13 = 12;
    v14 = 6;
  }
  LOWORD(v35) = v14;
  v69 = v13;
  v70 = 0;
  v15 = EtwpTiFillProcessIdentity(v71, a2, &v38);
  v16 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v17 = a5;
  v19 = v16 + v18;
  v20 = 2LL * v19;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v72;
  *((_QWORD *)&UserData.Size + v20) = 1LL;
  v21 = v19 + 1;
  v22 = v19 + 2;
  v23 = 2LL * v21;
  *(&UserData.Ptr + v23) = (ULONGLONG)&v73;
  *((_QWORD *)&UserData.Size + v23) = 1LL;
  if ( v17 && *v17 )
  {
    v7 = (const wchar_t *)*((_QWORD *)v17 + 1);
    v24 = *v17;
    v36 = *v17 >> 1;
    v25 = 16LL * v22;
    v26 = v22 + 1;
  }
  else
  {
    v24 = 12;
    v36 = 6;
    v27 = v22;
    v26 = v21 + 2;
    v25 = 16 * v27;
  }
  v28 = 16LL * v26;
  UserDataCount = v26 + 1;
  *(ULONGLONG *)((char *)&UserData.Ptr + v25) = (ULONGLONG)&v36;
  *(ULONG *)((char *)&UserData.Size + v25) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v25) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v28) = (ULONGLONG)v7;
  v30 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_NON_MICROSOFT_BINARIES;
  *(ULONG *)((char *)&UserData.Size + v28) = v24;
  *(ULONG *)((char *)&UserData.Reserved + v28) = 0;
  if ( a1 != 1 )
    v30 = &MITIGATION_ENFORCE_PROHIBIT_NON_MICROSOFT_BINARIES;
  if ( (unsigned int)Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
    EtwWriteEx(EtwSecurityMitigationsRegHandle, v30, 0LL, 1u, 0LL, 0LL, UserDataCount, &UserData);
  else
    EtwWrite(EtwSecurityMitigationsRegHandle, v30, 0LL, UserDataCount, &UserData);
  v31 = (void *)*((_QWORD *)&v39 + 1);
  if ( (unsigned int)dword_140E09198 > 5 && tlgKeywordOn((__int64)&dword_140E09198, 0x400000000000LL) )
  {
    LODWORD(v37) = a1;
    v42 = &v37;
    v43 = 4LL;
    v44 = v47;
    v46 = v6[1];
    v47[0] = *(unsigned __int16 *)v6;
    v48 = v51;
    v51[0] = (unsigned __int16)v39;
    v40 = v38;
    v52 = &v40;
    v54 = v57;
    v56 = *((_QWORD *)v17 + 1);
    v57[0] = *v17;
    v32 = v72;
    v58 = &v32;
    v33 = v73;
    v60 = &v33;
    v45 = 2LL;
    v47[1] = 0;
    v49 = 2LL;
    v50 = v31;
    v51[1] = 0;
    v53 = 8LL;
    v55 = 2LL;
    v57[1] = 0;
    v59 = 1LL;
    v61 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09198,
      (unsigned __int8 *)&word_140054006,
      0LL,
      0LL,
      0xCu,
      &v41);
  }
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
}
