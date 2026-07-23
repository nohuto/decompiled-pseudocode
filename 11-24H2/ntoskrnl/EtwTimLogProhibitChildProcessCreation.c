/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x140A28934
 * Callers:
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r14
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // r15
  const wchar_t *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int16 v14; // bx
  int v15; // eax
  int v16; // eax
  ULONGLONG v17; // r9
  int v18; // r10d
  int v19; // r8d
  unsigned int v20; // r8d
  int v21; // ecx
  ULONG v22; // r13d
  __int64 v23; // rax
  unsigned int v24; // r8d
  unsigned int v25; // r10d
  __int64 v26; // rdx
  char v27; // r12
  __int16 v28; // ax
  unsigned int v29; // r8d
  ULONG v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rcx
  const EVENT_DESCRIPTOR *v33; // rdx
  int v34; // r15d
  wchar_t *v35; // rbx
  wchar_t *v36; // rdx
  char v37; // al
  char v38; // [rsp+38h] [rbp-D0h]
  _WORD v39[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v40; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v42; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONGLONG DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  ULONGLONG v46; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v47; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v48; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  __int64 *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h] BYREF
  wchar_t *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h] BYREF
  wchar_t *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h] BYREF
  ULONGLONG *p_DestinationString; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h] BYREF
  int *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  wchar_t *v64; // [rsp+128h] [rbp+20h]
  int v65; // [rsp+130h] [rbp+28h] BYREF
  int v66; // [rsp+134h] [rbp+2Ch]
  _DWORD *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  wchar_t *v69; // [rsp+148h] [rbp+40h]
  _DWORD v70[2]; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  const wchar_t *v72; // [rsp+168h] [rbp+60h]
  int v73; // [rsp+170h] [rbp+68h]
  int v74; // [rsp+174h] [rbp+6Ch]
  __int16 *v75; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  const wchar_t *v77; // [rsp+188h] [rbp+80h]
  int v78; // [rsp+190h] [rbp+88h]
  int v79; // [rsp+194h] [rbp+8Ch]
  __int64 v80[24]; // [rsp+198h] [rbp+90h] BYREF

  v4 = *(__int64 **)(a2 + 848);
  v5 = &EmptyUnicodeString;
  v43 = a1;
  v46 = 0LL;
  if ( v4 )
    v5 = v4;
  v38 = 1;
  DestinationString_8 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  EtwpQueryProcessCommandLine(a2, (__int64)&DestinationString_8);
  Length = DestinationString_8.Length;
  if ( !DestinationString_8.Length )
  {
    RtlInitUnicodeString(&DestinationString_8, L"Unknown");
    Length = DestinationString_8.Length;
    v38 = 0;
  }
  if ( !a3 || !a3->Length )
  {
    RtlInitUnicodeString(&v47, L"Unknown");
    a3 = &v47;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v48, L"Unknown");
    a4 = &v48;
  }
  Buffer = DestinationString_8.Buffer;
  if ( (unsigned int)dword_140E09160 > 5 && v43 == 2 )
  {
    if ( (qword_140E09170 & 0x200000000001LL) == 0 || (v37 = 1, (qword_140E09178 & 0x200000000001LL) != qword_140E09178) )
      v37 = 0;
    if ( v37 )
    {
      v51 = 2LL;
      v50 = &v53;
      v52 = (__int64 *)v5[1];
      v53 = *(unsigned __int16 *)v5;
      v54 = &v57;
      v57 = Length;
      v58 = (wchar_t *)&v61;
      p_DestinationString = (ULONGLONG *)a3->Buffer;
      v61 = a3->Length;
      v62 = &v65;
      v64 = a4->Buffer;
      v65 = a4->Length;
      v55 = 2LL;
      v59 = 2LL;
      v63 = 2LL;
      v66 = 0;
      v56 = DestinationString_8.Buffer;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09160,
        (unsigned __int8 *)word_1400543FA,
        0LL,
        0LL,
        0xAu,
        v49);
    }
  }
  if ( v5 && *(_WORD *)v5 )
  {
    v39[0] = *(_WORD *)v5 >> 1;
    UserData.Ptr = (ULONGLONG)v39;
    *(_QWORD *)&UserData.Size = 2LL;
    v12 = *(unsigned __int16 *)v5;
    v11 = (const wchar_t *)v5[1];
  }
  else
  {
    v39[0] = 6;
    UserData.Ptr = (ULONGLONG)v39;
    v11 = L"(null)";
    v12 = 12;
    *(_QWORD *)&UserData.Size = 2LL;
  }
  v73 = v12;
  v75 = &v40;
  v72 = v11;
  v74 = 0;
  v76 = 2LL;
  if ( Length )
  {
    v13 = Length;
    v14 = Length >> 1;
    v77 = Buffer;
  }
  else
  {
    v77 = L"(null)";
    v13 = 12;
    v14 = 6;
  }
  v40 = v14;
  v78 = v13;
  v79 = 0;
  v15 = EtwpTiFillProcessIdentity(v80, a2, &v46);
  v16 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v20 = v16 + v19;
  v21 = v16;
  if ( a3 && a3->Length )
  {
    v22 = a3->Length;
    v36 = a3->Buffer;
    LOWORD(v41) = a3->Length >> 1;
    v23 = 16LL * v20;
    v24 = v20 + 1;
    DestinationString = (ULONGLONG)v36;
  }
  else
  {
    v22 = 12;
    v23 = 16LL * v20;
    v24 = v18 + v21 + 5;
    LOWORD(v41) = 6;
    DestinationString = v17;
  }
  *(ULONGLONG *)((char *)&UserData.Ptr + v23) = (ULONGLONG)&v41;
  *(ULONG *)((char *)&UserData.Size + v23) = 2;
  v25 = v24 + 1;
  *(ULONG *)((char *)&UserData.Reserved + v23) = 0;
  v26 = 16LL * v24;
  *(ULONGLONG *)((char *)&UserData.Ptr + v26) = DestinationString;
  *(ULONG *)((char *)&UserData.Size + v26) = v22;
  *(ULONG *)((char *)&UserData.Reserved + v26) = 0;
  v27 = 1;
  if ( a4 && a4->Length )
  {
    v17 = (ULONGLONG)a4->Buffer;
    v29 = v24 + 2;
    v30 = a4->Length;
    v28 = a4->Length >> 1;
  }
  else
  {
    v28 = 6;
    v29 = v24 + 2;
    v30 = 12;
  }
  v42 = v28;
  v31 = 16LL * v25;
  v32 = 16LL * v29;
  *(ULONGLONG *)((char *)&UserData.Ptr + v31) = (ULONGLONG)&v42;
  v33 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  *(ULONG *)((char *)&UserData.Size + v31) = 2;
  *(ULONG *)((char *)&UserData.Reserved + v31) = 0;
  *(ULONGLONG *)((char *)&UserData.Ptr + v32) = v17;
  *(ULONG *)((char *)&UserData.Size + v32) = v30;
  *(ULONG *)((char *)&UserData.Reserved + v32) = 0;
  v34 = v43;
  if ( v43 != 1 )
    v33 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  EtwWrite(EtwSecurityMitigationsRegHandle, v33, 0LL, v29 + 1, &UserData);
  v35 = DestinationString_8.Buffer;
  if ( (unsigned int)dword_140E09198 > 5 )
  {
    if ( (qword_140E091A8 & 0x400000000000LL) == 0 || (qword_140E091B0 & 0x400000000000LL) != qword_140E091B0 )
      v27 = 0;
    if ( v27 )
    {
      v43 = v34;
      v50 = (__int64 *)&v43;
      v51 = 4LL;
      v52 = &v55;
      v54 = (__int64 *)v5[1];
      v55 = *(unsigned __int16 *)v5;
      v56 = (wchar_t *)&v59;
      v59 = DestinationString_8.Length;
      DestinationString = v46;
      p_DestinationString = &DestinationString;
      v62 = &v65;
      v64 = a3->Buffer;
      v65 = a3->Length;
      v67 = v70;
      v69 = a4->Buffer;
      v70[0] = a4->Length;
      v53 = 2LL;
      v57 = 2LL;
      v58 = DestinationString_8.Buffer;
      v61 = 8LL;
      v63 = 2LL;
      v66 = 0;
      v68 = 2LL;
      v70[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09198,
        (unsigned __int8 *)&byte_140054287,
        0LL,
        0LL,
        0xCu,
        v49);
    }
  }
  if ( v38 )
    ExFreePoolWithTag(v35, 0);
}
