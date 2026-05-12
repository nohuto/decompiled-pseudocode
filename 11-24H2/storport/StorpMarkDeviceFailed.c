/*
 * XREFs of StorpMarkDeviceFailed @ 0x140075234
 * Callers:
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     RaidAdapterGetFirstUnit @ 0x14005A4C4 (RaidAdapterGetFirstUnit.c)
 *     McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer @ 0x140071E70 (McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer.c)
 *     StorpPopulateErrorData @ 0x14007B0AC (StorpPopulateErrorData.c)
 *     StorpWheaReportError @ 0x14007B20C (StorpWheaReportError.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall StorpMarkDeviceFailed(
        __int64 a1,
        __int64 a2,
        int a3,
        __int16 a4,
        const wchar_t *a5,
        unsigned __int16 a6,
        void *a7,
        unsigned __int16 a8,
        void *a9)
{
  __int64 v10; // r13
  __int64 v12; // rdi
  bool v13; // zf
  wchar_t *v15; // r15
  __int64 *Unit; // rax
  char v17; // r8
  int v18; // r10d
  __int64 v19; // r13
  char v20; // al
  char v21; // r11
  bool v22; // cl
  __int64 v23; // r10
  __int64 v24; // r12
  unsigned __int8 v25; // al
  __int64 FirstUnit; // rax
  char v27; // cl
  int v28; // edx
  char v29; // al
  const char *v30; // rax
  char v31; // al
  __int64 v32; // rdx
  wchar_t *v33; // r9
  wchar_t *v34; // r8
  _DWORD *v35; // r12
  int v36; // edx
  int *v37; // rcx
  int v38; // r8d
  int v39; // edx
  unsigned int v40; // ecx
  __int128 v41; // xmm0
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r12
  const wchar_t *v45; // rcx
  const char *v46; // r8
  const char *v47; // rdx
  const char *v48; // rax
  const wchar_t *v49; // rcx
  const char *v50; // r8
  const char *v51; // rdx
  const char *v52; // rax
  const wchar_t *v53; // rcx
  const char *v54; // r8
  const char *v55; // rdx
  const char *v56; // rax
  wchar_t *v57; // rdx
  int v58; // r9d
  __int64 v59; // r8
  __int64 v60; // r9
  struct _DEVICE_OBJECT *v61; // rcx
  size_t Size; // [rsp+40h] [rbp-110h]
  char v63; // [rsp+D0h] [rbp-80h]
  __int16 v64; // [rsp+D1h] [rbp-7Fh] BYREF
  char v65; // [rsp+D3h] [rbp-7Dh]
  char v66; // [rsp+D4h] [rbp-7Ch] BYREF
  int v67; // [rsp+D8h] [rbp-78h] BYREF
  __int16 v68; // [rsp+DCh] [rbp-74h]
  int v69; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v70; // [rsp+E4h] [rbp-6Ch]
  __int64 v71; // [rsp+E8h] [rbp-68h]
  const char *v72; // [rsp+F0h] [rbp-60h]
  const wchar_t *v73; // [rsp+F8h] [rbp-58h]
  __int64 v74; // [rsp+100h] [rbp-50h]
  void *Src; // [rsp+108h] [rbp-48h]
  void *v76; // [rsp+110h] [rbp-40h]
  int *v77; // [rsp+118h] [rbp-38h]
  int v78[4]; // [rsp+120h] [rbp-30h] BYREF
  __int128 v79; // [rsp+130h] [rbp-20h] BYREF
  int v80[4]; // [rsp+140h] [rbp-10h] BYREF
  _OWORD v81[2]; // [rsp+150h] [rbp+0h] BYREF
  int v82; // [rsp+170h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v83[2]; // [rsp+180h] [rbp+30h] BYREF
  __int128 *v84; // [rsp+1A0h] [rbp+50h]
  __int64 v85; // [rsp+1A8h] [rbp+58h]
  int *v86; // [rsp+1B0h] [rbp+60h]
  __int64 v87; // [rsp+1B8h] [rbp+68h]
  int *v88; // [rsp+1C0h] [rbp+70h]
  __int64 v89; // [rsp+1C8h] [rbp+78h]
  char *v90; // [rsp+1D0h] [rbp+80h]
  __int64 v91; // [rsp+1D8h] [rbp+88h]
  __int16 *v92; // [rsp+1E0h] [rbp+90h]
  __int64 v93; // [rsp+1E8h] [rbp+98h]
  char *v94; // [rsp+1F0h] [rbp+A0h]
  __int64 v95; // [rsp+1F8h] [rbp+A8h]
  _DWORD *v96; // [rsp+200h] [rbp+B0h]
  __int64 v97; // [rsp+208h] [rbp+B8h]
  __int64 v98; // [rsp+210h] [rbp+C0h]
  _DWORD v99[2]; // [rsp+218h] [rbp+C8h] BYREF
  char v100[16]; // [rsp+220h] [rbp+D0h] BYREF
  char v101[16]; // [rsp+230h] [rbp+E0h] BYREF
  int *v102; // [rsp+240h] [rbp+F0h]
  __int64 v103; // [rsp+248h] [rbp+F8h]
  char v104[16]; // [rsp+250h] [rbp+100h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+158h]

  v73 = a5;
  v76 = a7;
  v10 = a2;
  Src = a9;
  v12 = 0LL;
  v67 = RaidNullAddress;
  v13 = *(_DWORD *)a1 == 1314275652;
  v68 = a4;
  v69 = a3;
  v71 = a2;
  v70 = 0;
  *(_OWORD *)v78 = 0LL;
  v82 = 0;
  *(_OWORD *)v80 = 0LL;
  v65 = 0;
  v79 = 0LL;
  v72 = 0LL;
  memset(v81, 0, sizeof(v81));
  if ( v13 )
    return 3238002690LL;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)v78);
  v15 = (wchar_t *)&word_140150F48;
  v79 = *(_OWORD *)(a1 + 5064);
  if ( !v10 )
  {
    FirstUnit = RaidAdapterGetFirstUnit(a1);
    v27 = *(_BYTE *)(a1 + 104);
    v12 = FirstUnit;
    v28 = *(_DWORD *)(a1 + 92);
    v23 = *(_QWORD *)(a1 + 8);
    v74 = v23;
    v19 = (unsigned __int16)(((v27 >> 15) & 2) + 1) | 4u;
    if ( !v28 )
      LOWORD(v19) = ((v27 >> 15) & 2) + 1;
    v29 = *(_BYTE *)(a1 + 110);
    if ( (v29 & 1) != 0 )
    {
      v21 = 0;
    }
    else
    {
      v21 = 1;
      *(_BYTE *)(a1 + 110) = v29 | 1;
    }
    LODWORD(v30) = a3;
    if ( (a3 & 3) == 1 && v27 >= 0 && !v28 )
    {
      v31 = *(_BYTE *)(a1 + 109);
      if ( (v31 & 8) == 0 )
      {
        v65 = 1;
        *(_BYTE *)(a1 + 109) = v31 | 8;
      }
    }
    v24 = v12;
    v64 = *(_WORD *)((char *)&v67 + 1);
    v63 = v67;
    if ( !v12 )
      goto LABEL_38;
LABEL_32:
    v30 = *(const char **)(v12 + 160);
    if ( v30 )
    {
      v30 += 90;
    }
    else
    {
      v32 = *(_QWORD *)(v12 + 152);
      if ( !v32
        || (LODWORD(v30) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 608LL) + 184LL),
            ((unsigned __int8)v30 & 0x40) == 0) )
      {
LABEL_38:
        if ( (v19 & 6) == 0 || (v69 & 2) != 0 )
          LOBYTE(v30) = 0;
        else
          LODWORD(v30) = ReportAllWheaErrorsAsNonFatal == 0;
        v67 = (int)v30;
        if ( (v21 || (_BYTE)v30) && !_InterlockedCompareExchange(&WheaPendingError, 1, 0) )
        {
          if ( v12 )
          {
            v33 = (wchar_t *)(v12 + 177);
            v34 = (wchar_t *)(v12 + 168);
          }
          else
          {
            v33 = (wchar_t *)&word_140150F48;
            v34 = (wchar_t *)&word_140150F48;
            v74 = v23;
          }
          if ( v71 )
          {
            v35 = (_DWORD *)(v12 + 3432);
            v36 = *(_DWORD *)(v12 + 3432);
          }
          else
          {
            v36 = *(_DWORD *)(a1 + 4276);
            v35 = (_DWORD *)(v24 + 3432);
          }
          v37 = (int *)&v79;
          if ( v71 )
            v37 = v80;
          LODWORD(Size) = a6;
          v77 = v37;
          StorpPopulateErrorData((int)v37, v36, (int)v78, (int)v33, v68, v19, v34, v33, Size, v76);
          v39 = v67;
          if ( (_BYTE)v67 )
          {
            v40 = a8;
            if ( !v71 )
              v35 = (_DWORD *)(a1 + 4276);
            BYTE1(v81[0]) = *v35;
            WORD3(v81[0]) = v68;
            *((_QWORD *)&v81[1] + 1) = 0LL;
            v82 = 0;
            LOBYTE(v81[0]) = 1;
            v41 = *(_OWORD *)v77;
            WORD1(v81[0]) = v19;
            WORD2(v81[0]) = 1;
            *(_OWORD *)((char *)v81 + 8) = v41;
            if ( Src )
            {
              if ( a8 > 8u )
                v40 = 8;
              memmove((char *)&v81[1] + 8, Src, v40);
              v39 = v67;
            }
          }
          v10 = v71;
          v42 = a1;
          if ( v71 )
            v42 = v12;
          StorpWheaReportError(v74, v39, v38, (unsigned __int64)v81 & -(__int64)((_BYTE)v39 != 0), v42);
          _InterlockedExchange(&WheaPendingError, 0);
        }
        else
        {
          v10 = v71;
        }
        goto LABEL_64;
      }
      v30 = (const char *)(v32 + 41);
    }
    v72 = v30;
    goto LABEL_38;
  }
  if ( *(_WORD *)v10 == 1 && *(_DWORD *)(v10 + 4) >= 4u )
  {
    LOBYTE(v67) = *(_BYTE *)(v10 + 8);
    v63 = v67;
    BYTE1(v67) = *(_BYTE *)(v10 + 9);
    LOBYTE(v64) = BYTE1(v67);
    BYTE2(v67) = *(_BYTE *)(v10 + 10);
    HIBYTE(v64) = BYTE2(v67);
    Unit = RaidAdapterFindUnit(a1, v67);
    v12 = (__int64)Unit;
    if ( !Unit )
    {
      v70 = -1056964601;
LABEL_64:
      v25 = v63;
      goto LABEL_65;
    }
    *(_OWORD *)v80 = *(_OWORD *)(Unit + 263);
    v17 = *((_BYTE *)Unit + 506);
    v18 = *((_DWORD *)Unit + 259);
    v74 = Unit[1];
    LOWORD(v19) = (2 * (v17 & 1)) | 4;
    if ( !v18 )
      LOWORD(v19) = 2 * (v17 & 1);
    v20 = *((_BYTE *)Unit + 507);
    if ( (v20 & 8) != 0 )
    {
      v21 = 0;
    }
    else
    {
      v21 = 1;
      *(_BYTE *)(v12 + 507) = v20 | 8;
    }
    v22 = 0;
    if ( (a3 & 3) == 1 )
      v22 = !(v17 & 1);
    if ( v22 && !v18 && (v17 & 0x20) == 0 )
    {
      v65 = 1;
      *(_BYTE *)(v12 + 506) = v17 | 0x20;
    }
    v23 = v74;
    v24 = v12;
    goto LABEL_32;
  }
  v70 = -1056964601;
  v64 = *(_WORD *)((char *)&v67 + 1);
  v25 = v67;
  v63 = v67;
LABEL_65:
  DbgLogRequest(
    a1,
    44,
    a1,
    retaddr,
    (__int64)v73,
    HIBYTE(v64) | (unsigned __int64)(((unsigned __int8)v64 | (v25 << 8)) << 8),
    0LL);
  v44 = *(_QWORD *)&v78[2];
  if ( StorEtwLoggingEnabled )
  {
    if ( (v69 & 1) != 0 )
    {
      if ( (byte_140171465 & 8) != 0 )
      {
        v45 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(a1 + 5080) )
          v45 = *(const wchar_t **)(a1 + 5080);
        if ( v12 )
        {
          v46 = (const char *)(v12 + 242);
          v47 = (const char *)(v12 + 177);
          v48 = (const char *)(v12 + 168);
        }
        else
        {
          v46 = (const char *)&word_140150F48;
          v47 = (const char *)&word_140150F48;
          v48 = (const char *)&word_140150F48;
        }
        McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
          (__int64)v45,
          &EventMarkAndRemoveFailedDevice,
          (__int64)v46,
          *(_DWORD *)(a1 + 392),
          *(_DWORD *)(a1 + 936),
          *(_DWORD *)(a1 + 944),
          *(_DWORD *)(a1 + 948),
          *(_DWORD *)(a1 + 56),
          v63,
          v64,
          SHIBYTE(v64),
          (__int64)v80,
          (__int64)&v79,
          *(const wchar_t **)&v78[2],
          v48,
          v47,
          v46,
          v45,
          v72,
          v68,
          v73,
          a6,
          (__int64)v76,
          a8,
          (__int64)Src,
          v69);
      }
    }
    else if ( (v69 & 2) != 0 )
    {
      if ( (byte_140171465 & 8) != 0 )
      {
        v49 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(a1 + 5080) )
          v49 = *(const wchar_t **)(a1 + 5080);
        if ( v12 )
        {
          v50 = (const char *)(v12 + 242);
          v51 = (const char *)(v12 + 177);
          v52 = (const char *)(v12 + 168);
        }
        else
        {
          v50 = (const char *)&word_140150F48;
          v51 = (const char *)&word_140150F48;
          v52 = (const char *)&word_140150F48;
        }
        McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
          (__int64)v49,
          &EventMarkDevicePotentiallyFailed,
          (__int64)v50,
          *(_DWORD *)(a1 + 392),
          *(_DWORD *)(a1 + 936),
          *(_DWORD *)(a1 + 944),
          *(_DWORD *)(a1 + 948),
          *(_DWORD *)(a1 + 56),
          v63,
          v64,
          SHIBYTE(v64),
          (__int64)v80,
          (__int64)&v79,
          *(const wchar_t **)&v78[2],
          v52,
          v51,
          v50,
          v49,
          v72,
          v68,
          v73,
          a6,
          (__int64)v76,
          a8,
          (__int64)Src,
          v69);
      }
    }
    else if ( (byte_140171465 & 8) != 0 )
    {
      v53 = (const wchar_t *)&unk_140151214;
      if ( *(_QWORD *)(a1 + 5080) )
        v53 = *(const wchar_t **)(a1 + 5080);
      if ( v12 )
      {
        v54 = (const char *)(v12 + 242);
        v55 = (const char *)(v12 + 177);
        v56 = (const char *)(v12 + 168);
      }
      else
      {
        v54 = (const char *)&word_140150F48;
        v55 = (const char *)&word_140150F48;
        v56 = (const char *)&word_140150F48;
      }
      McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
        (__int64)v53,
        &EventMarkDeviceFailed,
        (__int64)v54,
        *(_DWORD *)(a1 + 392),
        *(_DWORD *)(a1 + 936),
        *(_DWORD *)(a1 + 944),
        *(_DWORD *)(a1 + 948),
        *(_DWORD *)(a1 + 56),
        v63,
        v64,
        SHIBYTE(v64),
        (__int64)v80,
        (__int64)&v79,
        *(const wchar_t **)&v78[2],
        v56,
        v55,
        v54,
        v53,
        v72,
        v68,
        v73,
        a6,
        (__int64)v76,
        a8,
        (__int64)Src,
        v69);
    }
  }
  if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v43, 0x400000000000LL) )
  {
    v85 = 16LL;
    v84 = &v79;
    v86 = v80;
    v57 = (wchar_t *)(v12 + 168);
    v69 = *(_DWORD *)(a1 + 56);
    v88 = &v69;
    v66 = v63;
    v90 = &v66;
    v92 = &v64;
    v94 = (char *)&v64 + 1;
    v96 = v99;
    v99[0] = LOWORD(v78[0]);
    v87 = 16LL;
    v89 = 4LL;
    v91 = 1LL;
    v93 = 1LL;
    v95 = 1LL;
    v97 = 2LL;
    v98 = v44;
    v99[1] = 0;
    if ( !v12 )
      v57 = (wchar_t *)&word_140150F48;
    tlgCreate1Sz_char((__int64)v100, v57);
    if ( v12 )
      v15 = (wchar_t *)(v12 + 177);
    tlgCreate1Sz_char((__int64)v101, v15);
    v102 = &v67;
    v67 = v58;
    v103 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v104, v73);
    tlgWriteTransfer_EtwWriteTransfer((__int64)v83, (unsigned __int8 *)dword_14015E1CD, v59, v60, 0xEu, v83);
  }
  if ( v65 )
  {
    if ( v10 )
      v61 = *(struct _DEVICE_OBJECT **)(v12 + 8);
    else
      v61 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    IoInvalidateDeviceState(v61);
  }
  return v70;
}
