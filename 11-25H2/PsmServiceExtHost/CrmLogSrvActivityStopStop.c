/*
 * XREFs of CrmLogSrvActivityStopStop @ 0x180033C20
 * Callers:
 *     CrmSrvActivityStop @ 0x1800336F0 (CrmSrvActivityStop.c)
 *     CrmRpcSrvActivityStop @ 0x180033980 (CrmRpcSrvActivityStop.c)
 * Callees:
 *     CreateNewEventEntry @ 0x180034618 (CreateNewEventEntry.c)
 *     _tlgCreate1Sz_wchar_t @ 0x180034870 (_tlgCreate1Sz_wchar_t.c)
 *     DestroyEventEntry @ 0x180064618 (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x180071CEC (EnableFlushTimer.c)
 *     AggregateField @ 0x180091660 (AggregateField.c)
 *     memcmp_0 @ 0x1800A77F6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall CrmLogSrvActivityStopStop(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // rsi
  unsigned int v8; // ecx
  __int64 v11; // rdx
  __int64 v12; // rbx
  const wchar_t *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  bool v16; // zf
  int v17; // eax
  const wchar_t *v18; // rax
  int v19; // ebx
  unsigned __int8 v20; // r12
  char *v21; // rcx
  char v22; // al
  char v25; // al
  char v26; // dl
  char v27; // r8
  volatile signed __int64 v28; // r11
  unsigned __int8 v29; // r10
  char v30; // r10
  __int64 v31; // rax
  signed __int64 v32; // r13
  __int64 v33; // r15
  unsigned __int8 v34; // dl
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  struct _EVENT_DATA_DESCRIPTOR *v40; // r10
  __int64 v41; // r11
  unsigned __int64 i; // rdx
  int v43; // ecx
  unsigned int v44; // r14d
  int v45; // edx
  volatile signed __int64 *j; // rsi
  volatile signed __int64 v47; // rbx
  int v48; // ecx
  __int64 v49; // rdi
  int v50; // eax
  unsigned int k; // ebx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rdx
  const wchar_t *v55; // rdx
  ULONGLONG v56; // r9
  unsigned int v57; // eax
  int NewEventEntry; // eax
  signed __int64 v59; // [rsp+30h] [rbp-D0h] BYREF
  int v60; // [rsp+38h] [rbp-C8h] BYREF
  int v61; // [rsp+3Ch] [rbp-C4h] BYREF
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v64; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+4Ch] [rbp-B4h] BYREF
  int v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+54h] [rbp-ACh] BYREF
  int v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v71; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+80h] [rbp-80h] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h] BYREF
  __int64 v75; // [rsp+98h] [rbp-68h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+E0h] [rbp-20h] BYREF
  void *Buf1; // [rsp+F0h] [rbp-10h] BYREF
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+FCh] [rbp-4h]
  __int64 *v86; // [rsp+100h] [rbp+0h]
  _QWORD v87[14]; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+178h] [rbp+78h]
  int v89; // [rsp+17Ch] [rbp+7Ch]
  const wchar_t *v90; // [rsp+180h] [rbp+80h]
  int v91; // [rsp+188h] [rbp+88h]
  int v92; // [rsp+18Ch] [rbp+8Ch]
  int *v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  __int64 *v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v98; // [rsp+1C0h] [rbp+C0h]
  int v99; // [rsp+1C8h] [rbp+C8h]
  int v100; // [rsp+1CCh] [rbp+CCh]
  UUID *v101; // [rsp+1D0h] [rbp+D0h]
  __int64 v102; // [rsp+1D8h] [rbp+D8h]
  int *v103; // [rsp+1E0h] [rbp+E0h]
  __int64 v104; // [rsp+1E8h] [rbp+E8h]
  __int64 v105; // [rsp+1F0h] [rbp+F0h]
  int v106; // [rsp+1F8h] [rbp+F8h]
  int v107; // [rsp+1FCh] [rbp+FCh]
  int *v108; // [rsp+200h] [rbp+100h]
  __int64 v109; // [rsp+208h] [rbp+108h]
  __int64 *v110; // [rsp+210h] [rbp+110h]
  __int64 v111; // [rsp+218h] [rbp+118h]
  __int64 *v112; // [rsp+220h] [rbp+120h]
  __int64 v113; // [rsp+228h] [rbp+128h]
  __int64 *v114; // [rsp+230h] [rbp+130h]
  __int64 v115; // [rsp+238h] [rbp+138h]
  __int64 *v116; // [rsp+240h] [rbp+140h]
  __int64 v117; // [rsp+248h] [rbp+148h]
  __int64 *v118; // [rsp+250h] [rbp+150h]
  __int64 v119; // [rsp+258h] [rbp+158h]
  int *v120; // [rsp+260h] [rbp+160h]
  __int64 v121; // [rsp+268h] [rbp+168h]
  int *v122; // [rsp+270h] [rbp+170h]
  __int64 v123; // [rsp+278h] [rbp+178h]
  int *v124; // [rsp+280h] [rbp+180h]
  __int64 v125; // [rsp+288h] [rbp+188h]
  _BYTE v126[16]; // [rsp+290h] [rbp+190h] BYREF
  char v127[16]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v128; // [rsp+2B0h] [rbp+1B0h]
  __int64 v129; // [rsp+2B8h] [rbp+1B8h]

  v6 = a4;
  v8 = dword_1800E72E8;
  v11 = qword_1800E7300;
  v12 = -1LL;
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 && (qword_1800E7300 & 1) == qword_1800E7300 )
  {
    v102 = 16LL;
    v101 = &Uuid;
    v65 = *(_DWORD *)(a1 + 24);
    v103 = &v65;
    v52 = *(unsigned __int8 *)(a1 + 73);
    v104 = 4LL;
    v105 = a1 + 72;
    v107 = 0;
    v109 = 4LL;
    v106 = 4 * v52 + 8;
    v69 = a2;
    v111 = 8LL;
    v113 = 8LL;
    if ( a3 )
    {
      v60 = *(_DWORD *)(a3 + 64);
      v108 = &v60;
      v110 = &v69;
      v70 = *(_QWORD *)(a3 + 200);
      v112 = &v70;
      v53 = *(_QWORD *)(a3 + 208);
    }
    else
    {
      v60 = 1601;
      v108 = &v60;
      v110 = &v69;
      v112 = &v70;
      v53 = -1LL;
      v70 = -1LL;
    }
    v72 = v53;
    v114 = &v72;
    v73 = a5;
    v116 = &v73;
    v115 = 8LL;
    v117 = 8LL;
    v74 = MEMORY[0x7FFE0008];
    v118 = &v74;
    v119 = 8LL;
    v121 = 4LL;
    v62 = a4;
    v123 = 4LL;
    if ( a3 )
    {
      v61 = *(_DWORD *)(a3 + 160);
      v120 = &v61;
      v122 = &v62;
      v54 = *(_QWORD *)(a3 + 224);
      v63 = *(_DWORD *)(a3 + 72);
      v124 = &v63;
      v125 = 4LL;
      tlgCreate1Sz_wchar_t(v126, v54);
      v55 = *(const wchar_t **)(a3 + 232);
    }
    else
    {
      v61 = 0;
      v120 = &v61;
      v63 = 0;
      v122 = &v62;
      v124 = &v63;
      v125 = 4LL;
      tlgCreate1Sz_wchar_t(v126, &word_1800C10AC);
      v55 = &word_1800C10AC;
    }
    tlgCreate1Sz_wchar_t(v127, v55);
    EventDescriptor.Keyword = v56;
    v128 = &v66;
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800E72F0;
    v66 = a6;
    v129 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E72F0;
    v98 = &unk_1800D18F4;
    v100 = v56;
    UserData.Reserved = 2;
    v99 = 245;
    v64 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E7308, &EventDescriptor, 0LL, 0LL, 0x11u, &UserData);
    v11 = qword_1800E7300;
    v8 = dword_1800E72E8;
  }
  if ( !a3 || v8 <= 5 || (qword_1800E72F8 & 0x400000000000LL) == 0 || (v11 & 0x400000000000LL) != v11 )
    return;
  v13 = *(const wchar_t **)(a3 + 224);
  v86 = &v75;
  v76 = *(_QWORD *)(a3 + 200);
  v87[1] = &v76;
  v77 = *(_QWORD *)(a3 + 208);
  v87[3] = &v77;
  v78 = *(unsigned int *)(a3 + 160);
  v87[5] = &v78;
  v87[7] = &v79;
  v64 = *(_DWORD *)(a1 + 24);
  v87[9] = &v64;
  v14 = *(_DWORD *)(a3 + 64);
  v79 = v6;
  v67 = v14;
  v87[11] = &v67;
  v75 = 1LL;
  v87[0] = 8LL;
  v87[2] = 8LL;
  v87[4] = 8LL;
  v87[6] = 8LL;
  v87[8] = 8LL;
  v87[10] = 4LL;
  v87[12] = 4LL;
  if ( v13 )
  {
    v15 = -1LL;
    do
      v16 = v13[++v15] == 0;
    while ( !v16 );
    v17 = 2 * v15 + 2;
  }
  else
  {
    v13 = &word_1800C10AC;
    v17 = 2;
  }
  v88 = v17;
  v18 = *(const wchar_t **)(a3 + 232);
  v87[13] = v13;
  v89 = 0;
  if ( v18 )
  {
    do
      v16 = v18[++v12] == 0;
    while ( !v16 );
    v19 = 2 * v12 + 2;
  }
  else
  {
    v18 = &word_1800C10AC;
    v19 = 2;
  }
  v90 = v18;
  v91 = v19;
  v93 = &v68;
  v95 = &v80;
  *(_DWORD *)&v71.Level = 517;
  v82.Ptr = (ULONGLONG)off_1800E72F0;
  v92 = 0;
  v68 = a6;
  v94 = 4LL;
  v80 = 0x2000000LL;
  v96 = 8LL;
  *(_DWORD *)&v71.Id = 184549376;
  v71.Keyword = 0x400000000000LL;
  v82.Size = *(unsigned __int16 *)off_1800E72F0;
  Buf1 = &unk_1800D17F0;
  v82.Reserved = 2;
  v84 = 248;
  v85 = 1;
  LODWORD(v59) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1800E7310 != TlgAggregateInternalRegisteredProviderEtwCallback )
    return;
  v20 = 0;
  v21 = (char *)&unk_1800D17F2;
  do
    v22 = *v21++;
  while ( v22 < 0 );
  while ( *v21++ )
    ;
  while ( v21 < byte_1800D18E8 )
  {
    while ( *v21++ )
      ;
    if ( *v21 >= 0 )
      break;
    v25 = v21[1];
    v26 = *v21 & 0x7F;
    v21 += 2;
    if ( v25 >= 0 )
      break;
    while ( 1 )
    {
      v27 = *v21;
      if ( *v21 >= 0 )
        break;
      if ( v27 != (char)0x80 )
        goto LABEL_32;
      ++v21;
    }
    if ( v26 != 9 || (unsigned __int8)(v27 - 113) > 2u )
      break;
    v31 = 2LL * v20++;
    BYTE5(v87[v31]) = v27;
  }
LABEL_32:
  if ( !v20 )
  {
    EventWriteTransfer(qword_1800E7308, &v71, 0LL, 0LL, 0xDu, &v82);
    return;
  }
  v32 = 0LL;
  v33 = qword_1800E7318;
  v59 = 0LL;
  v34 = v20 + 2;
  v35 = 1025
      * (BYTE4(Buf1)
       + ((1025
         * (BYTE3(Buf1)
          + ((1025
            * (BYTE2(Buf1)
             + ((1025
               * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) ^ ((1025 * (BYTE2(Buf1) + ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) >> 6)))) ^ ((1025 * (BYTE3(Buf1) + ((1025 * (BYTE2(Buf1) + ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) ^ ((1025 * (BYTE2(Buf1) + ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) ^ ((1025 * (BYTE1(Buf1) + ((1025 * (unsigned __int8)Buf1) ^ ((1025 * (unsigned int)(unsigned __int8)Buf1) >> 6)))) >> 6)))) >> 6)))) >> 6)));
  v36 = 1025 * (BYTE5(Buf1) + (v35 ^ (v35 >> 6)));
  v37 = 1025 * (BYTE6(Buf1) + (v36 ^ (v36 >> 6)));
  v38 = 1025 * (HIBYTE(Buf1) + (v37 ^ (v37 >> 6)));
  v39 = (v38 >> 6) ^ v38;
  if ( (unsigned __int8)(v20 + 2) < 0xDu )
  {
    v40 = &v82 + v34;
    v41 = (unsigned __int8)(13 - v34);
    do
    {
      for ( i = 0LL; i < v40->Size; v39 = ((1025 * (v39 + v43)) >> 6) ^ (1025 * (v39 + v43)) )
      {
        v43 = *(unsigned __int8 *)(i + v40->Ptr);
        ++i;
      }
      ++v40;
      --v41;
    }
    while ( v41 );
  }
  v44 = 32769 * ((9 * v39) ^ ((9 * v39) >> 11));
  AcquireSRWLockShared((PSRWLOCK)(qword_1800E7318 + 264));
  for ( j = (volatile signed __int64 *)(v33 + 8LL * (v44 & 0x1F));
        ;
        j = (volatile signed __int64 *)((((__int64)v50 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + *j + 32) )
  {
    if ( !*j )
    {
      if ( *(_DWORD *)(v33 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v33 + 300);
        goto LABEL_27;
      }
      if ( !v32 )
      {
        NewEventEntry = CreateNewEventEntry((unsigned int)&v71, v45, (unsigned int)&v82, v20, v44, (__int64)&v59);
        v32 = v59;
        if ( !v59 )
        {
          if ( NewEventEntry == 8 )
            ++*(_DWORD *)(v33 + 304);
          else
            ++*(_DWORD *)(v33 + 308);
          goto LABEL_27;
        }
      }
      if ( !_InterlockedCompareExchange64(j, v32, 0LL) )
      {
        v59 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v33 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v33 + 344), *(unsigned int *)(v33 + 352));
        v57 = *(_DWORD *)(v33 + 256);
        v32 = v59;
        if ( *(_DWORD *)(v33 + 288) < v57 )
          *(_DWORD *)(v33 + 288) = v57;
        goto LABEL_27;
      }
      v32 = v59;
    }
    v47 = *j;
    v48 = *(_DWORD *)(*j + 40);
    if ( v44 == v48 )
      break;
    v50 = v44 - v48;
LABEL_57:
    ;
  }
  v49 = *(_QWORD *)(v47 + 16);
  v50 = memcmp_0(&Buf1, (const void *)(v49 + 16), 8uLL);
  if ( v50 )
    goto LABEL_57;
  for ( k = *(unsigned __int8 *)(v47 + 45) + 2; k < 0xD; ++k )
  {
    v50 = *(&v82.Size + 4 * k) - *(_DWORD *)(v49 + 16LL * k + 8);
    if ( v50 )
      goto LABEL_57;
    v50 = memcmp_0(*((const void **)&v82.Ptr + 2 * k), *(const void **)(v49 + 16LL * k), *(&v82.Size + 4 * k));
    if ( v50 )
      goto LABEL_57;
  }
  v28 = *j;
  if ( *j )
  {
    v29 = 2;
    do
    {
      AggregateField(
        *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL * v29),
        **((_QWORD **)&v82.Ptr + 2 * v29),
        *(unsigned __int8 *)(*(_QWORD *)(v28 + 16) + 16LL * v29 + 13));
      v29 = v30 + 1;
    }
    while ( v29 < (unsigned int)v20 + 2 );
  }
LABEL_27:
  ReleaseSRWLockShared((PSRWLOCK)(v33 + 264));
  if ( v32 )
    DestroyEventEntry(v32);
}
