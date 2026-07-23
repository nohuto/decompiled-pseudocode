/*
 * XREFs of EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1404769B0 (IoCheckRedirectionTrustLevel.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogRedirectionTrustPolicy(
        int a1,
        const EVENT_DESCRIPTOR *a2,
        int a3,
        void *a4,
        unsigned __int8 a5)
{
  PCEVENT_DESCRIPTOR v5; // r13
  signed __int64 v6; // r15
  UNICODE_STRING *v7; // rbx
  signed __int32 v8; // edi
  char v9; // r12
  unsigned int v10; // r14d
  unsigned __int16 v11; // si
  unsigned __int16 i; // cx
  unsigned int v13; // edx
  void *Pool2; // rax
  bool v15; // cf
  int v16; // ecx
  __int64 v17; // r15
  void *v18; // rax
  _QWORD *v19; // r12
  PVOID *v20; // rdi
  wchar_t *p_Length; // r14
  unsigned __int16 j; // dx
  __int64 *v23; // rax
  __int64 *v24; // r14
  __int64 *v25; // rax
  unsigned __int16 Length; // di
  int v27; // eax
  const wchar_t *v28; // rcx
  int v29; // eax
  __int16 v30; // di
  int v31; // eax
  ULONG v32; // r9d
  unsigned __int16 *v33; // r10
  ULONGLONG v34; // r11
  __int64 v35; // rcx
  int v36; // r8d
  unsigned int v37; // edx
  ULONGLONG v38; // r15
  unsigned int v39; // r8d
  __int16 v40; // ax
  __int64 v41; // rax
  __int64 v42; // rdx
  ULONG v43; // r10d
  unsigned __int16 v44; // r14
  wchar_t *v45; // r15
  UNICODE_STRING *v46; // r11
  ULONG v47; // r12d
  __int64 v48; // rax
  PVOID *v49; // r13
  unsigned __int16 MaximumLength; // ax
  const wchar_t *v51; // r9
  int v52; // eax
  __int64 v53; // r8
  ULONG v54; // edi
  ULONG v55; // edx
  __int64 v56; // rax
  ULONG v57; // ecx
  __int64 v58; // rax
  int v59; // r8d
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v61; // rcx
  UNICODE_STRING *v62; // rcx
  UNICODE_STRING *v63; // rcx
  UNICODE_STRING *v64; // rcx
  UNICODE_STRING *v65; // rcx
  char v66; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v67; // [rsp+32h] [rbp-CEh] BYREF
  _WORD v68[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v69[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v70; // [rsp+3Ch] [rbp-C4h] BYREF
  int v71; // [rsp+40h] [rbp-C0h]
  int v72; // [rsp+44h] [rbp-BCh] BYREF
  int v73; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v75; // [rsp+60h] [rbp-A0h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  PVOID v79; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v80; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v81; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v83; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v84; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v85; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v86; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v87; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v88; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v91; // [rsp+140h] [rbp+40h]
  __int64 v92; // [rsp+148h] [rbp+48h]
  int *v93; // [rsp+150h] [rbp+50h]
  __int64 v94; // [rsp+158h] [rbp+58h]
  int *v95; // [rsp+160h] [rbp+60h]
  __int64 v96; // [rsp+168h] [rbp+68h]
  unsigned __int16 *v97; // [rsp+170h] [rbp+70h]
  __int64 v98; // [rsp+178h] [rbp+78h]
  _DWORD *v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  wchar_t *v101; // [rsp+190h] [rbp+90h]
  _DWORD v102[2]; // [rsp+198h] [rbp+98h] BYREF
  PVOID *v103; // [rsp+1A0h] [rbp+A0h]
  __int64 v104; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v105; // [rsp+1B0h] [rbp+B0h]
  __int64 v106; // [rsp+1B8h] [rbp+B8h]
  wchar_t *v107; // [rsp+1C0h] [rbp+C0h]
  _DWORD v108[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  PVOID *v109; // [rsp+1D0h] [rbp+D0h]
  __int64 v110; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v111; // [rsp+1E0h] [rbp+E0h]
  __int64 v112; // [rsp+1E8h] [rbp+E8h]
  wchar_t *v113; // [rsp+1F0h] [rbp+F0h]
  _DWORD v114[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  PVOID *v115; // [rsp+200h] [rbp+100h]
  __int64 v116; // [rsp+208h] [rbp+108h]
  _DWORD *v117; // [rsp+210h] [rbp+110h]
  __int64 v118; // [rsp+218h] [rbp+118h]
  wchar_t *v119; // [rsp+220h] [rbp+120h]
  _DWORD v120[2]; // [rsp+228h] [rbp+128h] BYREF
  PVOID *v121; // [rsp+230h] [rbp+130h]
  __int64 v122; // [rsp+238h] [rbp+138h]
  _DWORD *v123; // [rsp+240h] [rbp+140h]
  __int64 v124; // [rsp+248h] [rbp+148h]
  wchar_t *v125; // [rsp+250h] [rbp+150h]
  _DWORD v126[2]; // [rsp+258h] [rbp+158h] BYREF
  PVOID *v127; // [rsp+260h] [rbp+160h]
  __int64 v128; // [rsp+268h] [rbp+168h]
  _DWORD *v129; // [rsp+270h] [rbp+170h]
  __int64 v130; // [rsp+278h] [rbp+178h]
  wchar_t *v131; // [rsp+280h] [rbp+180h]
  _DWORD v132[2]; // [rsp+288h] [rbp+188h] BYREF
  __int64 *v133; // [rsp+290h] [rbp+190h]
  __int64 v134; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 *v136; // [rsp+2C0h] [rbp+1C0h]
  __int64 v137; // [rsp+2C8h] [rbp+1C8h]
  int *v138; // [rsp+2D0h] [rbp+1D0h]
  __int64 v139; // [rsp+2D8h] [rbp+1D8h]
  int *v140; // [rsp+2E0h] [rbp+1E0h]
  __int64 v141; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int16 *v142; // [rsp+2F0h] [rbp+1F0h]
  __int64 v143; // [rsp+2F8h] [rbp+1F8h]
  _DWORD *v144; // [rsp+300h] [rbp+200h]
  __int64 v145; // [rsp+308h] [rbp+208h]
  wchar_t *v146; // [rsp+310h] [rbp+210h]
  _DWORD v147[2]; // [rsp+318h] [rbp+218h] BYREF
  PVOID Callers[16]; // [rsp+320h] [rbp+220h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3A0h] [rbp+2A0h] BYREF
  const wchar_t *v150; // [rsp+3B0h] [rbp+2B0h]
  int v151; // [rsp+3B8h] [rbp+2B8h]
  int v152; // [rsp+3BCh] [rbp+2BCh]
  _WORD *v153; // [rsp+3C0h] [rbp+2C0h]
  __int64 v154; // [rsp+3C8h] [rbp+2C8h]
  wchar_t *Buffer; // [rsp+3D0h] [rbp+2D0h]
  int v156; // [rsp+3D8h] [rbp+2D8h]
  int v157; // [rsp+3DCh] [rbp+2DCh]
  __int64 v158[84]; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v159; // [rsp+6E0h] [rbp+5E0h] BYREF

  v159 = a3;
  EventDescriptor = a2;
  v71 = a1;
  v5 = a2;
  v81 = 0LL;
  v68[0] = 0;
  v69[0] = 0;
  v70 = 0;
  P = a4;
  v88 = 0LL;
  DestinationString = 0LL;
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  memset_0(Callers, 0, sizeof(Callers));
  v6 = *(_QWORD *)&v5[123].Id;
  v75 = a5;
  v7 = 0LL;
  v66 = 0;
  v79 = 0LL;
  v8 = 0;
  v9 = 1;
  v10 = 0;
  v11 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  for ( i = 1; ; ++i )
  {
    v13 = 7;
    if ( v11 <= 7u )
      v13 = v11;
    if ( i >= v13 )
      break;
    v8 += LODWORD(Callers[i]);
  }
  if ( !v8 )
    v8 = 1;
  while ( 1 )
  {
    if ( v6 )
      goto LABEL_13;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x28uLL, 0x6E734954u);
    if ( !Pool2 )
      break;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&v5[123], (signed __int64)Pool2, 0LL);
    if ( v6 )
      ExFreePoolWithTag(Pool2, 0);
    else
      v6 = (signed __int64)Pool2;
LABEL_13:
    while ( 1 )
    {
      v15 = v10 < 0xA;
      if ( v10 >= 0xA )
        break;
      v16 = *(_DWORD *)(v6 + 4LL * v10);
      if ( !v16 )
      {
        v15 = v10 < 0xA;
        break;
      }
      if ( v16 == v8 )
        return;
      ++v10;
    }
    v9 = v15 ? v9 : 0;
    if ( !v9 )
      break;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)&v5[123].Id + 4LL * v10), v8, 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Unknown");
      if ( v11 )
      {
        v17 = v11;
        v7 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, 80LL * v11, 0x6E734954u);
        v18 = (void *)ExAllocatePool2(0x100uLL, 0x21AuLL, 0x6E734954u);
        v79 = v18;
        v19 = v18;
        if ( v7 && v18 )
        {
          v20 = Callers;
          p_Length = &v7[1].Length;
          do
          {
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v20,
                   MemoryMappedFilenameInformation,
                   v19,
                   0x218uLL,
                   0LL) < 0
              || *(_WORD *)v19 <= 1u )
            {
              goto LABEL_33;
            }
            for ( j = (*(_WORD *)v19 >> 1) - 1; j; --j )
            {
              if ( *(_WORD *)(v19[1] + 2LL * j) == 92 )
              {
                ++j;
                break;
              }
            }
            RtlStringCbCopyW(p_Length, 0x40uLL, (NTSTRSAFE_PCWSTR)(v19[1] + 2LL * j));
            RtlInitUnicodeString((PUNICODE_STRING)p_Length - 1, p_Length);
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v20,
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL) < 0 )
LABEL_33:
              *v20 = 0LL;
            else
              *v20 = (char *)*v20 - *((_QWORD *)&MemoryInformation[0] + 1);
            p_Length += 40;
            ++v20;
            --v17;
          }
          while ( v17 );
          v5 = EventDescriptor;
        }
        else
        {
          memset_0(Callers, 0, 8LL * v11);
        }
      }
      v23 = MITIGATION_AUDIT_REDIRECTION_TRUST_POLICY;
      v24 = &EmptyUnicodeString;
      if ( v71 != 1 )
        v23 = MITIGATION_ENFORCE_REDIRECTION_TRUST_POLICY;
      EventDescriptor = (PCEVENT_DESCRIPTOR)v23;
      v25 = *(__int64 **)&v5[53].Id;
      v80 = 0LL;
      if ( v25 )
        v24 = v25;
      EtwpQueryProcessCommandLine((__int64)v5, (__int64)&v80);
      Length = v80.Length;
      if ( v80.Length )
      {
        v66 = 1;
      }
      else
      {
        RtlInitUnicodeString(&v80, L"Unknown");
        Length = v80.Length;
      }
      if ( !P )
        RtlInitUnicodeString(&v88, L"Unknown");
      if ( v24 && *(_WORD *)v24 )
      {
        v68[0] = *(_WORD *)v24 >> 1;
        UserData.Ptr = (ULONGLONG)v68;
        *(_QWORD *)&UserData.Size = 2LL;
        v27 = *(unsigned __int16 *)v24;
        v28 = (const wchar_t *)v24[1];
      }
      else
      {
        v68[0] = 6;
        UserData.Ptr = (ULONGLONG)v68;
        v28 = L"(null)";
        v27 = 12;
        *(_QWORD *)&UserData.Size = 2LL;
      }
      v151 = v27;
      P = v80.Buffer;
      v150 = v28;
      v152 = 0;
      v154 = 2LL;
      if ( Length )
      {
        Buffer = v80.Buffer;
        v29 = Length;
        v153 = v69;
        v30 = Length >> 1;
      }
      else
      {
        Buffer = L"(null)";
        v153 = v69;
        v30 = 6;
        v29 = 12;
      }
      v69[0] = v30;
      v156 = v29;
      v157 = 0;
      v31 = EtwpTiFillProcessIdentity(v158, (__int64)v5, &v81);
      v35 = 2LL * (unsigned int)(v31 + 4);
      v36 = v31 + 4;
      v37 = v31 + 5;
      *(&UserData.Ptr + v35) = (ULONGLONG)&v159;
      *((_QWORD *)&UserData.Size + v35) = 4LL;
      if ( v33 && *v33 )
      {
        v38 = *((_QWORD *)v33 + 1);
        v39 = v31 + 6;
        v32 = *v33;
        v40 = *v33 >> 1;
      }
      else
      {
        v40 = 6;
        v39 = v36 + 2;
        v38 = v34;
      }
      v70 = v40;
      v41 = 16LL * v37;
      v42 = 16LL * v39;
      *(ULONGLONG *)((char *)&UserData.Ptr + v41) = (ULONGLONG)&v70;
      v43 = v39 + 2;
      *(ULONG *)((char *)&UserData.Size + v41) = 2;
      *(ULONG *)((char *)&UserData.Reserved + v41) = 0;
      v44 = 0;
      *(ULONGLONG *)((char *)&UserData.Ptr + v42) = v38;
      *(ULONG *)((char *)&UserData.Size + v42) = v32;
      *(ULONG *)((char *)&UserData.Reserved + v42) = 0;
      v45 = DestinationString.Buffer;
      v46 = v7;
      v47 = DestinationString.Length;
      v48 = 2LL * (v39 + 1);
      *((_QWORD *)&UserData.Size + v48) = 4LL;
      v49 = Callers;
      *(&UserData.Ptr + v48) = (ULONGLONG)&v75;
      MaximumLength = DestinationString.MaximumLength;
      v67 = DestinationString.MaximumLength;
      do
      {
        if ( v44 < v11 && v7 )
        {
          if ( v46 && (v51 = v46->Buffer) != 0LL && (v52 = v46->Length, (_WORD)v52) )
          {
            v53 = 16LL * v43;
            v54 = v52 + 2;
            if ( v46->MaximumLength <= (unsigned int)(v52 + 1) )
              v54 = v46->Length;
          }
          else
          {
            v51 = L"(null)";
            v53 = 16LL * v43;
            v54 = 14;
          }
          *(ULONGLONG *)((char *)&UserData.Ptr + v53) = (ULONGLONG)v51;
          *(ULONG *)((char *)&UserData.Size + v53) = v54;
          *(ULONG *)((char *)&UserData.Reserved + v53) = 0;
        }
        else if ( v45 && (_WORD)v47 )
        {
          v55 = v47 + 2;
          if ( MaximumLength <= v47 + 1 )
            v55 = v47;
          *(&UserData.Size + 4 * v43) = v55;
          *(&UserData.Ptr + 2 * v43) = (ULONGLONG)v45;
          *(&UserData.Reserved + 4 * v43) = 0;
        }
        else
        {
          v56 = 2LL * v43;
          *(&UserData.Ptr + v56) = (ULONGLONG)L"(null)";
          *((_QWORD *)&UserData.Size + v56) = 14LL;
        }
        ++v44;
        v46 += 5;
        v57 = v43 + 1;
        v43 += 2;
        v58 = 2LL * v57;
        *(&UserData.Ptr + v58) = (ULONGLONG)v49++;
        *((_QWORD *)&UserData.Size + v58) = 8LL;
        MaximumLength = v67;
      }
      while ( v44 < 0x10u );
      EtwWrite(EtwSecurityMitigationsRegHandle, EventDescriptor, 0LL, v43, &UserData);
      if ( v7 )
      {
        if ( (unsigned int)dword_140E09198 > 5 && tlgKeywordOn((__int64)&dword_140E09198, 0x400000000000LL) )
        {
          v82 = 0x2000000LL;
          v91 = &v82;
          v72 = v159;
          v93 = &v72;
          v73 = v71;
          v95 = &v73;
          LOBYTE(v67) = a5;
          v97 = &v67;
          v92 = 8LL;
          v94 = (unsigned int)(v59 - 1);
          v96 = v94;
          v98 = (unsigned int)(v59 - 4);
          if ( v11 <= (unsigned __int16)(v59 - 4) || (p_DestinationString = v7 + 5, !v7[5].Buffer) )
            p_DestinationString = &DestinationString;
          v102[1] = 0;
          v99 = v102;
          v101 = p_DestinationString->Buffer;
          v102[0] = p_DestinationString->Length;
          v83 = Callers[1];
          v103 = &v83;
          v100 = 2LL;
          v104 = 8LL;
          if ( v11 <= 2u || (v61 = v7 + 10, !v7[10].Buffer) )
            v61 = &DestinationString;
          v106 = 2LL;
          v105 = v108;
          v107 = v61->Buffer;
          v108[0] = v61->Length;
          v84 = Callers[2];
          v109 = &v84;
          v108[1] = 0;
          v110 = 8LL;
          if ( v11 <= 3u || (v62 = v7 + 15, !v7[15].Buffer) )
            v62 = &DestinationString;
          v112 = 2LL;
          v111 = v114;
          v113 = v62->Buffer;
          v114[0] = v62->Length;
          v85 = Callers[3];
          v115 = &v85;
          v114[1] = 0;
          v116 = 8LL;
          if ( v11 <= (unsigned __int16)(v59 - 1) || (v63 = v7 + 20, !v7[20].Buffer) )
            v63 = &DestinationString;
          v118 = 2LL;
          v117 = v120;
          v119 = v63->Buffer;
          v120[0] = v63->Length;
          v86 = Callers[4];
          v121 = &v86;
          v120[1] = 0;
          v122 = 8LL;
          if ( v11 <= (unsigned __int16)v59 || (v64 = v7 + 25, !v7[25].Buffer) )
            v64 = &DestinationString;
          v124 = 2LL;
          v123 = v126;
          v125 = v64->Buffer;
          v126[0] = v64->Length;
          v87 = Callers[5];
          v127 = &v87;
          v126[1] = 0;
          v128 = 8LL;
          if ( v11 <= 6u || (v65 = v7 + 30, !v7[30].Buffer) )
            v65 = &DestinationString;
          v130 = 2LL;
          v129 = v132;
          v131 = v65->Buffer;
          v132[0] = v65->Length;
          v78 = (__int64)Callers[6];
          v133 = &v78;
          v132[1] = 0;
          v134 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09198,
            (unsigned __int8 *)&word_140053EDE,
            0LL,
            0LL,
            0x18u,
            &v90);
        }
      }
      else if ( (unsigned int)dword_140E09198 > 5 && tlgKeywordOn((__int64)&dword_140E09198, 0x400000000000LL) )
      {
        v78 = 0x2000000LL;
        v136 = &v78;
        v73 = v159;
        v138 = &v73;
        v72 = v71;
        v140 = &v72;
        LOBYTE(v67) = a5;
        v142 = &v67;
        v144 = v147;
        v137 = 8LL;
        v139 = 4LL;
        v141 = 4LL;
        v143 = 1LL;
        v145 = 2LL;
        v146 = v45;
        v147[0] = v47;
        v147[1] = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09198,
          (unsigned __int8 *)byte_140053FA9,
          0LL,
          0LL,
          8u,
          &v135);
      }
      if ( v66 )
        ExFreePoolWithTag(P, 0);
      if ( v79 )
        ExFreePoolWithTag(v79, 0);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      return;
    }
  }
}
