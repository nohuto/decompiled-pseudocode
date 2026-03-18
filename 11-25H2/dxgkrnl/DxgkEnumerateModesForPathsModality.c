/*
 * XREFs of DxgkEnumerateModesForPathsModality @ 0x1402EB1B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x140060FFC (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x140189190 (--0CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1402E9984 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1402EB7A4 (-PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1402EBB40 (--0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402EBB8C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 */

__int64 __fastcall DxgkEnumerateModesForPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3,
        PVOID *a4,
        unsigned int *a5)
{
  int v7; // edi
  int v8; // r15d
  int v9; // eax
  NTSTATUS v10; // edi
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp-178h] BYREF
  int v26; // [rsp+58h] [rbp-170h] BYREF
  __int64 v27; // [rsp+60h] [rbp-168h]
  char v28; // [rsp+68h] [rbp-160h]
  unsigned int i; // [rsp+70h] [rbp-158h]
  int v30; // [rsp+74h] [rbp-154h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-150h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-148h]
  _BYTE v33[48]; // [rsp+88h] [rbp-140h] BYREF
  unsigned int v34; // [rsp+B8h] [rbp-110h]
  _DWORD v35[28]; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v36[76]; // [rsp+130h] [rbp-98h] BYREF
  int v37; // [rsp+17Ch] [rbp-4Ch]
  int v38; // [rsp+184h] [rbp-44h]
  unsigned int v39; // [rsp+1D8h] [rbp+10h]
  unsigned int v40; // [rsp+1E0h] [rbp+18h]

  v40 = a3;
  v7 = a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2171;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2171);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2171);
  if ( a2 && a4 && a5 )
  {
    *a4 = 0LL;
    *a5 = 0;
    if ( (v7 & 0xFEFD7FFF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 290;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(Flags & ~(D3DKMT_GETPATHSMODALITY_DIAG_LOG_FUNCTIONAL_VIDPN | D3DKMT_GETPATHSMODALITY_ALLOW_BML_RAWMODE | D3DKM"
         "T_GETPATHSMODALITY_INCLUDING_NON_DESKTOP)) == 0",
        290LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, a2);
    v8 = v37;
    v30 = v37;
    if ( (v7 & 0x8000) != 0 )
      v37 |= 1u;
    if ( (v7 & 0x1000000) != 0 )
      v38 |= 1u;
    CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v33);
    v9 = CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
           (CCD_TOPOLOGY *)v36,
           v7 | 0x40000u,
           v40,
           (struct CCD_MODE_RESULT_SET *)v33);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 1021;
    }
    if ( v10 < 0 )
      goto LABEL_36;
    v39 = v34;
    v11 = v34;
    v12 = 88LL * v34;
    v13 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v13 = 88 * v34;
    v10 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v12 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(2LL, v34);
      WdLogGlobalForLineNumber = 319;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to allocated a buffer to store %I64d modes.",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_25:
      CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v33);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v26);
      }
      return (unsigned int)v10;
    }
    BaseAddress = 0LL;
    Length = v13;
    RegionSize = v13;
    v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v10 >= 0 )
    {
      ProbeForWrite(BaseAddress, Length, 1u);
      v14 = 0;
      for ( i = 0; v14 < v39; i = v14 )
      {
        memset(v35, 0, sizeof(v35));
        if ( !CCD_MODE_RESULT_SET::PopLastMode(
                (CCD_MODE_RESULT_SET *)v33,
                (struct D3DKMT_PATHMODALITY_MODE_RESULT *)v35) )
          break;
        v15 = 88LL * v14;
        *(_DWORD *)((char *)BaseAddress + v15 + 48) = v35[16];
        *(_DWORD *)((char *)BaseAddress + v15 + 52) = v35[17];
        *(_DWORD *)((char *)BaseAddress + v15 + 56) = v35[19];
        *((_BYTE *)BaseAddress + v15 + 76) = v35[26];
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)v35, (__int64)BaseAddress + v15);
        *(_DWORD *)((char *)BaseAddress + v16 + 60) = v35[22];
        *(_DWORD *)((char *)BaseAddress + v16 + 64) = v35[23];
        *(_DWORD *)((char *)BaseAddress + v16 + 68) = v35[24];
        *(_DWORD *)((char *)BaseAddress + v16 + 72) = v35[25];
        v17 = v35[27] >> 2;
        *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= ((unsigned __int8)*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ (unsigned __int8)(v35[27] >> 2)) & 0x3F;
        *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ v17) & 0xFC0000;
        *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ v17) & 0x3F000;
        *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= ((unsigned __int16)*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ (unsigned __int16)v17) & 0xFC0;
        *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ v17) & 0x3F000000;
        ++v14;
      }
      *a4 = BaseAddress;
      *a5 = v39;
LABEL_36:
      v37 = v8;
      goto LABEL_25;
    }
    WdLogSingleEntry1(6LL, v11);
    WdLogGlobalForLineNumber = 329;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate virtual memory for %I64d modes.",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v33);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v26);
    return 3221225626LL;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v26);
    return 3221225485LL;
  }
}
