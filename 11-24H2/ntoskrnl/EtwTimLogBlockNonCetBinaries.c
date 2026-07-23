/*
 * XREFs of EtwTimLogBlockNonCetBinaries @ 0x1407AB958
 * Callers:
 *     PsBlockNonCetBinaries @ 0x140774100 (PsBlockNonCetBinaries.c)
 * Callees:
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14064E5BC (Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogBlockNonCetBinaries(int a1, __int64 a2, int a3, int a4, unsigned __int16 *a5, int a6)
{
  __int64 *v7; // rdi
  const wchar_t *v8; // r13
  __int64 *v9; // rax
  ULONG v10; // r12d
  unsigned __int16 v11; // ax
  int v12; // eax
  const wchar_t *v13; // rcx
  int v14; // r15d
  void *v15; // rsi
  __int16 v16; // ax
  int v17; // ecx
  int v18; // r8d
  __int16 v19; // r10
  unsigned int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // r11
  __int64 v23; // rdx
  const EVENT_DESCRIPTOR *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG UserDataCount; // r12d
  __int64 v28; // rax
  bool v29; // zf
  unsigned __int16 *v30; // r14
  _WORD v31[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  int v33; // [rsp+50h] [rbp-B8h] BYREF
  int v34; // [rsp+54h] [rbp-B4h] BYREF
  int v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  __int128 v41; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+98h] [rbp-70h] BYREF
  int *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  _DWORD *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  _DWORD v48[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  void *v51; // [rsp+F8h] [rbp-10h]
  _DWORD v52[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  _DWORD *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  __int64 v57; // [rsp+128h] [rbp+20h]
  _DWORD v58[2]; // [rsp+130h] [rbp+28h] BYREF
  int *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  int *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  __int64 *v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  __int64 *v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+70h] BYREF
  const wchar_t *v68; // [rsp+188h] [rbp+80h]
  int v69; // [rsp+190h] [rbp+88h]
  int v70; // [rsp+194h] [rbp+8Ch]
  int *v71; // [rsp+198h] [rbp+90h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  const wchar_t *v73; // [rsp+1A8h] [rbp+A0h]
  int v74; // [rsp+1B0h] [rbp+A8h]
  int v75; // [rsp+1B4h] [rbp+ACh]
  _QWORD v76[22]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v77; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v78; // [rsp+2D0h] [rbp+1C8h] BYREF

  v78 = a4;
  v77 = a3;
  v34 = a1;
  v7 = &EmptyUnicodeString;
  v38 = 0LL;
  v8 = L"(null)";
  v9 = *(__int64 **)(a2 + 848);
  v41 = 0LL;
  if ( v9 )
    v7 = v9;
  v10 = 12;
  v11 = *(_WORD *)v7;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v11 )
  {
    v31[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v31;
    v12 = *(unsigned __int16 *)v7;
    v13 = (const wchar_t *)v7[1];
  }
  else
  {
    v31[0] = 6;
    UserData.Ptr = (ULONGLONG)v31;
    v13 = L"(null)";
    v12 = 12;
  }
  v68 = v13;
  v70 = 0;
  v69 = v12;
  EtwpQueryProcessCommandLine(a2, &v41);
  v14 = (unsigned __int16)v41;
  v15 = (void *)*((_QWORD *)&v41 + 1);
  v72 = 2LL;
  v71 = &v32;
  if ( (_WORD)v41 )
  {
    v73 = (const wchar_t *)*((_QWORD *)&v41 + 1);
    v16 = (unsigned __int16)v41 >> 1;
    v17 = (unsigned __int16)v41;
  }
  else
  {
    v73 = L"(null)";
    v17 = 12;
    v16 = 6;
  }
  v74 = v17;
  LOWORD(v32) = v16;
  v75 = 0;
  v18 = EtwpTiFillProcessIdentity(v76, a2, &v38);
  v20 = v18 + 4;
  if ( a5 && *a5 )
  {
    v8 = (const wchar_t *)*((_QWORD *)a5 + 1);
    v21 = v18 + 5;
    v10 = *a5;
    LOWORD(v33) = *a5 >> 1;
  }
  else
  {
    LOWORD(v33) = v19;
    v21 = v18 + 5;
  }
  v22 = 16LL * v20;
  v23 = 16LL * v21;
  *(ULONGLONG *)((char *)&UserData.Ptr + v22) = (ULONGLONG)&v33;
  *(ULONG *)((char *)&UserData.Size + v22) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v22) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v23) = (ULONGLONG)v8;
  v24 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_BLOCK_NON_CET_BINARIES;
  *(ULONG *)((char *)&UserData.Size + v23) = v10;
  *(ULONG *)((char *)&UserData.Reserved + v23) = 0;
  v25 = 2LL * (v21 + 1);
  *(&UserData.Ptr + v25) = (ULONGLONG)&v77;
  *((_QWORD *)&UserData.Size + v25) = 4LL;
  v26 = 2LL * (v21 + 2);
  *(&UserData.Ptr + v26) = (ULONGLONG)&v78;
  *((_QWORD *)&UserData.Size + v26) = 4LL;
  UserDataCount = v21 + 4;
  v28 = 2LL * (v21 + 3);
  v29 = v34 == 1;
  *(&UserData.Ptr + v28) = (ULONGLONG)&a6;
  *((_QWORD *)&UserData.Size + v28) = 4LL;
  if ( !v29 )
    v24 = &MITIGATION_ENFORCE_BLOCK_NON_CET_BINARIES;
  if ( (unsigned int)Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
    EtwWriteEx(EtwSecurityMitigationsRegHandle, v24, 0LL, 1u, 0LL, 0LL, UserDataCount, &UserData);
  else
    EtwWrite(EtwSecurityMitigationsRegHandle, v24, 0LL, UserDataCount, &UserData);
  v30 = a5;
  if ( (unsigned int)dword_140E09198 > 5 && tlgKeywordOn((__int64)&dword_140E09198, 0x400000000000LL) )
  {
    v44 = 4LL;
    v43 = &v34;
    v46 = 2LL;
    v45 = v48;
    v47 = v7[1];
    v48[0] = *(unsigned __int16 *)v7;
    v49 = v52;
    v39 = v38;
    v53 = &v39;
    v55 = v58;
    v57 = *((_QWORD *)v30 + 1);
    v58[0] = *v30;
    v35 = v77;
    v59 = &v35;
    v36 = v78;
    v61 = &v36;
    LODWORD(v37) = a6;
    v63 = &v37;
    v65 = &v40;
    v48[1] = 0;
    v50 = 2LL;
    v51 = v15;
    v52[0] = v14;
    v52[1] = 0;
    v54 = 8LL;
    v56 = 2LL;
    v58[1] = 0;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v40 = 0x1000000LL;
    v66 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09198,
      (unsigned __int8 *)byte_140053D31,
      0LL,
      0LL,
      0xEu,
      &v42);
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
