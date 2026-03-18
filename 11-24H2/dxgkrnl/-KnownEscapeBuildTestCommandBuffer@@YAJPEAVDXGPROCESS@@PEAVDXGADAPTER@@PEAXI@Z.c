/*
 * XREFs of ?KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z @ 0x1401D1030
 * Callers:
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403C1B14 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DdiBuildTestCommandBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDTESTCOMMANDBUFFER@@@Z @ 0x1401A12AC (-DdiBuildTestCommandBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDTESTCOMMANDBUFFER@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022AC64 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14032AEB8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall KnownEscapeBuildTestCommandBuffer(
        struct DXGPROCESS *a1,
        struct DXGADAPTER *a2,
        _DWORD *a3,
        unsigned int a4)
{
  __int64 v6; // rax
  const wchar_t *v7; // r9
  int v8; // eax
  int v9; // edi
  _QWORD *v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int EntryType; // eax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // ecx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  unsigned int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // ecx
  __int64 v26; // rax
  unsigned int v27; // ecx
  char *v28; // r12
  char *v29; // r15
  __int64 v30; // rax
  const wchar_t *v31; // r9
  __int64 v32; // r14
  _OWORD *Pool2; // rax
  _OWORD *v34; // r14
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rax
  size_t v39; // r8
  const void *v40; // rdx
  char *v41; // rcx
  size_t v42; // r8
  const void *v43; // rdx
  void *v44; // rcx
  ULONG64 v45; // rax
  unsigned __int64 v46; // rsi
  char *v47; // r14
  unsigned int v48; // eax
  __int64 v50; // rsi
  __int64 v52; // [rsp+50h] [rbp-F8h]
  __int64 v53; // [rsp+58h] [rbp-F0h]
  ADAPTER_RENDER *v54; // [rsp+60h] [rbp-E8h]
  unsigned int v55; // [rsp+60h] [rbp-E8h]
  _QWORD v57[14]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v58[88]; // [rsp+F0h] [rbp-58h] BYREF

  if ( !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 759;
    return 3221225485LL;
  }
  if ( a4 < 0x70 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 764LL;
    v7 = L"Invalid private driver size";
LABEL_98:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v54 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 391);
  if ( !v54 )
    return 3221225485LL;
  v8 = a3[20];
  if ( !v8 || v8 >= 5 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 775LL;
    v7 = L"Invalid command";
    goto LABEL_98;
  }
  if ( (unsigned int)(a3[26] - 4) > 0xFFC || a3[27] > 0x400u )
  {
    WdLogSingleEntry0(2LL);
    v6 = 782LL;
    v7 = L"Invalid DMA buffer or private data size";
    goto LABEL_98;
  }
  v9 = -1073741823;
  memset(v57, 0, sizeof(v57));
  v53 = 0LL;
  v52 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v58, a1);
  v10 = (_QWORD *)((char *)a1 + 280);
  v11 = (a3[2] >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)a1 + 74)
    && (v12 = *(_DWORD *)(*v10 + 16LL * v11 + 8), a3[2] >> 30 == ((v12 >> 5) & 3))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)a1 + 280);
  }
  else
  {
    EntryType = 0;
  }
  v14 = a3[2];
  v15 = *((_DWORD *)a1 + 74);
  if ( EntryType == 15 )
  {
    v16 = (v14 >> 6) & 0xFFFFFF;
    v17 = v14 >> 30;
    if ( v16 < v15 )
    {
      v18 = *(_DWORD *)(*v10 + 16LL * v16 + 8);
      if ( v17 == ((v18 >> 5) & 3) && (v18 & 0x2000) == 0 )
      {
        v19 = v18 & 0x1F;
        if ( v19 )
        {
          if ( v19 == 15 )
          {
            v53 = *(_QWORD *)(*v10 + 16LL * v16);
            goto LABEL_37;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v53 = 0LL;
  }
  else
  {
    v20 = (v14 >> 6) & 0xFFFFFF;
    v21 = v14 >> 30;
    if ( v20 >= v15
      || (v22 = *(_DWORD *)(*v10 + 16LL * v20 + 8), v21 != ((v22 >> 5) & 3))
      || (v22 & 0x2000) != 0
      || (v22 & 0x1F) == 0
      || (unsigned int)HMGRTABLE::GetEntryType((char *)a1 + 280) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 808;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid context handle", 808LL, 0LL, 0LL, 0LL, 0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v58);
      return 3221225485LL;
    }
    v23 = (a3[2] >> 6) & 0xFFFFFF;
    if ( v23 < *((_DWORD *)a1 + 74) )
    {
      v24 = *(_DWORD *)(*v10 + 16LL * v23 + 8);
      if ( a3[2] >> 30 == ((v24 >> 5) & 3) && (v24 & 0x2000) == 0 )
      {
        v25 = v24 & 0x1F;
        if ( v25 )
        {
          if ( v25 == 7 )
          {
            v52 = *(_QWORD *)(*v10 + 16LL * v23);
            goto LABEL_37;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v52 = 0LL;
  }
LABEL_37:
  v26 = (a3[2] >> 6) & 0xFFFFFF;
  if ( (unsigned int)v26 < *((_DWORD *)a1 + 74) )
  {
    v27 = *(_DWORD *)(*v10 + 16 * v26 + 8);
    if ( a3[2] >> 30 == ((v27 >> 5) & 3) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
      *(_DWORD *)(*v10 + 16 * (((unsigned __int64)(unsigned int)a3[2] >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v58);
  v28 = 0LL;
  v29 = 0LL;
  if ( (a3[3] & 1) == 0 )
  {
    v32 = v52;
    if ( !v52 )
    {
      WdLogSingleEntry0(2LL);
      v30 = 829LL;
      v31 = L"Invalid context handle";
      goto LABEL_45;
    }
LABEL_50:
    if ( *((_BYTE *)a2 + 209) )
    {
      v55 = a3[26] + 112 + a3[27];
      Pool2 = (_OWORD *)ExAllocatePool2(256LL, v55, 1265072196LL);
      v34 = Pool2;
      if ( !Pool2 )
      {
LABEL_52:
        v9 = -1073741801;
        goto LABEL_81;
      }
      *Pool2 = *(_OWORD *)a3;
      Pool2[1] = *((_OWORD *)a3 + 1);
      Pool2[2] = *((_OWORD *)a3 + 2);
      Pool2[3] = *((_OWORD *)a3 + 3);
      Pool2[4] = *((_OWORD *)a3 + 4);
      Pool2[5] = *((_OWORD *)a3 + 5);
      Pool2[6] = *((_OWORD *)a3 + 6);
      v35 = v53;
      if ( (a3[3] & 1) == 0 )
        v35 = v52;
      *((_DWORD *)v34 + 2) = *(_DWORD *)(v35 + 28);
      *((_QWORD *)v34 + 11) = 0LL;
      *((_QWORD *)v34 + 12) = 0LL;
      v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
             (struct DXGADAPTER *)((char *)a2 + 4664),
             *((_DWORD *)a1 + 122),
             *((_DWORD *)a2 + 1188),
             0,
             0,
             D3DKMT_ESCAPE_DRIVERPRIVATE,
             (struct _D3DDDI_ESCAPEFLAGS)64,
             v55,
             (unsigned __int8 *)v34);
      if ( v9 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 868;
        ExFreePoolWithTag(v34, 0);
        goto LABEL_81;
      }
      v57[12] = *((_QWORD *)v34 + 13);
      v57[10] = v34 + 7;
      v57[11] = (char *)v34 + (unsigned int)a3[26] + 112;
    }
    else
    {
      v36 = (unsigned int)a3[26];
      if ( (*((_DWORD *)a1 + 102) & 0x100) != 0 )
      {
        if ( a4 < (unsigned __int64)(unsigned int)(v36 + a3[27]) + 112 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 883;
          goto LABEL_81;
        }
        v28 = (char *)(a3 + 28);
        v29 = (char *)a3 + v36 + 112;
      }
      else
      {
        v28 = (char *)ExAllocatePool2(256LL, (unsigned int)a3[26], 1265072196LL);
        if ( !v28 )
          goto LABEL_52;
        v37 = a3[27];
        if ( v37 )
        {
          v29 = (char *)ExAllocatePool2(256LL, v37, 1265072196LL);
          if ( !v29 )
            goto LABEL_52;
        }
      }
      if ( (a3[3] & 1) != 0 )
      {
        LODWORD(v57[13]) |= 1u;
        v38 = *(_QWORD *)(v53 + 32);
      }
      else
      {
        v38 = *(_QWORD *)(v32 + 184);
      }
      v57[0] = v38;
      *(_OWORD *)&v57[1] = *((_OWORD *)a3 + 1);
      *(_OWORD *)&v57[3] = *((_OWORD *)a3 + 2);
      *(_OWORD *)&v57[5] = *((_OWORD *)a3 + 3);
      *(_OWORD *)&v57[7] = *((_OWORD *)a3 + 4);
      v57[9] = *((_QWORD *)a3 + 10);
      v57[12] = *((_QWORD *)a3 + 13);
      v57[10] = v28;
      v57[11] = v29;
      v9 = ADAPTER_RENDER::DdiBuildTestCommandBuffer(v54, (struct _DXGKARG_BUILDTESTCOMMANDBUFFER *)v57, v36);
      if ( v9 < 0 )
        goto LABEL_81;
    }
    if ( HIDWORD(v57[12]) > a3[27] || LODWORD(v57[12]) > a3[26] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 933;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Driver returned invalid DMA buffer size",
        933LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741823;
    }
    else
    {
      if ( (*((_DWORD *)a1 + 102) & 0x100) == 0 )
      {
        v39 = LODWORD(v57[12]);
        v40 = (const void *)v57[10];
        v41 = (char *)*((_QWORD *)a3 + 11);
        if ( (unsigned __int64)&v41[LODWORD(v57[12])] > MmUserProbeAddress || &v41[LODWORD(v57[12])] <= v41 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v41, v40, v39);
        v42 = HIDWORD(v57[12]);
        v43 = (const void *)v57[11];
        v44 = (void *)*((_QWORD *)a3 + 12);
        v45 = (ULONG64)v44 + HIDWORD(v57[12]);
        if ( v45 > MmUserProbeAddress || v45 <= (unsigned __int64)v44 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v44, v43, v42);
      }
      *((_QWORD *)a3 + 13) = v57[12];
      v9 = 0;
    }
    goto LABEL_81;
  }
  if ( v53 )
  {
    v32 = v52;
    goto LABEL_50;
  }
  WdLogSingleEntry0(2LL);
  v30 = 820LL;
  v31 = L"Invalid HwQueue handle";
LABEL_45:
  WdLogGlobalForLineNumber = v30;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v31, v30, 0LL, 0LL, 0LL, 0LL);
  v9 = -1073741811;
LABEL_81:
  if ( (*((_DWORD *)a1 + 102) & 0x100) == 0 )
  {
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
  }
  v46 = (unsigned int)a3[2];
  v47 = (char *)a1 + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a1 + 248));
  v48 = ((unsigned int)v46 >> 6) & 0xFFFFFF;
  if ( v48 < *((_DWORD *)a1 + 74)
    && (((unsigned int)v46 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v48 + 8) & 0x60)
    && (*(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v48 + 8) & 0x1F) != 0 )
  {
    v50 = 2 * ((v46 >> 6) & 0xFFFFFF);
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 35) + 8 * v50 + 8) & 0x2000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 224;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pEntryTable[GetIndex(hObject)].Destroyed",
        224LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v47 = (char *)a1 + 248;
    }
    *(_DWORD *)(*((_QWORD *)a1 + 35) + 8 * v50 + 8) &= ~0x2000u;
  }
  *((_QWORD *)v47 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v47, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
