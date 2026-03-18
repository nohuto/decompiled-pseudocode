/*
 * XREFs of ?KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z @ 0x1401CBDA0
 * Callers:
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403CF180 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DdiBuildTestCommandBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDTESTCOMMANDBUFFER@@@Z @ 0x14019ED90 (-DdiBuildTestCommandBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDTESTCOMMANDBUFFER@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x140224378 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall KnownEscapeBuildTestCommandBuffer(
        struct DXGPROCESS *a1,
        struct DXGADAPTER *a2,
        _DWORD *a3,
        unsigned int a4)
{
  struct DXGPROCESS *v5; // r13
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
  __int64 v28; // r9
  char *v29; // r12
  char *v30; // r15
  __int64 v31; // rax
  const wchar_t *v32; // r9
  __int64 v33; // r14
  unsigned int v34; // r13d
  _OWORD *Pool2; // rax
  _OWORD *v36; // r14
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // eax
  __int64 v41; // rax
  size_t v42; // r8
  const void *v43; // rdx
  char *v44; // rcx
  size_t v45; // r8
  const void *v46; // rdx
  void *v47; // rcx
  ULONG64 v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rsi
  __int64 v54; // [rsp+50h] [rbp-F8h]
  __int64 v55; // [rsp+58h] [rbp-F0h]
  ADAPTER_RENDER *v56; // [rsp+70h] [rbp-D8h]
  _QWORD v57[14]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v58[88]; // [rsp+F0h] [rbp-58h] BYREF

  v5 = a1;
  if ( !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 747;
    return 3221225485LL;
  }
  if ( a4 < 0x70 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 752LL;
    v7 = L"Invalid private driver size";
LABEL_96:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v56 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 391);
  if ( !v56 )
    return 3221225485LL;
  v8 = a3[20];
  if ( !v8 || v8 >= 5 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 763LL;
    v7 = L"Invalid command";
    goto LABEL_96;
  }
  if ( (unsigned int)(a3[26] - 4) > 0xFFC || a3[27] > 0x400u )
  {
    WdLogSingleEntry0(2LL);
    v6 = 770LL;
    v7 = L"Invalid DMA buffer or private data size";
    goto LABEL_96;
  }
  v9 = -1073741823;
  memset(v57, 0, sizeof(v57));
  v55 = 0LL;
  v54 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v58, v5);
  v10 = (_QWORD *)((char *)v5 + 280);
  v11 = (a3[2] >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)v5 + 74)
    && (v12 = *(_DWORD *)(*v10 + 16LL * v11 + 8), a3[2] >> 30 == ((v12 >> 5) & 3))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)v5 + 280);
  }
  else
  {
    EntryType = 0;
  }
  v14 = a3[2];
  v15 = *((_DWORD *)v5 + 74);
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
            v55 = *(_QWORD *)(*v10 + 16LL * v16);
            goto LABEL_37;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v55 = 0LL;
  }
  else
  {
    v20 = (v14 >> 6) & 0xFFFFFF;
    v21 = v14 >> 30;
    if ( v20 >= v15
      || (v22 = *(_DWORD *)(*v10 + 16LL * v20 + 8), v21 != ((v22 >> 5) & 3))
      || (v22 & 0x2000) != 0
      || (v22 & 0x1F) == 0
      || (unsigned int)HMGRTABLE::GetEntryType((char *)v5 + 280) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 796;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid context handle", 796LL, 0LL, 0LL, 0LL, 0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v58);
      return 3221225485LL;
    }
    v23 = (a3[2] >> 6) & 0xFFFFFF;
    if ( v23 < *((_DWORD *)v5 + 74) )
    {
      v24 = *(_DWORD *)(*v10 + 16LL * v23 + 8);
      if ( a3[2] >> 30 == ((v24 >> 5) & 3) && (v24 & 0x2000) == 0 )
      {
        v25 = v24 & 0x1F;
        if ( v25 )
        {
          if ( v25 == 7 )
          {
            v54 = *(_QWORD *)(*v10 + 16LL * v23);
            goto LABEL_37;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v54 = 0LL;
  }
LABEL_37:
  v26 = (a3[2] >> 6) & 0xFFFFFF;
  if ( (unsigned int)v26 < *((_DWORD *)v5 + 74) )
  {
    v27 = *(_DWORD *)(*v10 + 16 * v26 + 8);
    if ( a3[2] >> 30 == ((v27 >> 5) & 3) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
      *(_DWORD *)(*v10 + 16 * (((unsigned __int64)(unsigned int)a3[2] >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v58);
  v29 = 0LL;
  v30 = 0LL;
  if ( (a3[3] & 1) == 0 )
  {
    v33 = v54;
    if ( !v54 )
    {
      WdLogSingleEntry0(2LL);
      v31 = 817LL;
      v32 = L"Invalid context handle";
      goto LABEL_45;
    }
LABEL_50:
    if ( *((_BYTE *)a2 + 209) )
    {
      v34 = a3[27] + 112 + a3[26];
      Pool2 = (_OWORD *)ExAllocatePool2(256LL, v34, 1265072196LL, v28);
      v36 = Pool2;
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
      v37 = v55;
      if ( (a3[3] & 1) == 0 )
        v37 = v54;
      *((_DWORD *)v36 + 2) = *(_DWORD *)(v37 + 28);
      *((_QWORD *)v36 + 11) = 0LL;
      *((_QWORD *)v36 + 12) = 0LL;
      v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
             (struct DXGADAPTER *)((char *)a2 + 4664),
             *((_DWORD *)a1 + 122),
             *((_DWORD *)a2 + 1188),
             0,
             0,
             D3DKMT_ESCAPE_DRIVERPRIVATE,
             (struct _D3DDDI_ESCAPEFLAGS)64,
             v34,
             (unsigned __int8 *)v36);
      if ( v9 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 856;
        ExFreePoolWithTag(v36, 0);
        goto LABEL_81;
      }
      v57[12] = *((_QWORD *)v36 + 13);
      v57[10] = v36 + 7;
      v57[11] = (char *)v36 + (unsigned int)a3[26] + 112;
      v5 = a1;
    }
    else
    {
      v38 = (unsigned int)a3[26];
      if ( (*((_DWORD *)v5 + 102) & 0x100) != 0 )
      {
        if ( a4 < (unsigned __int64)(unsigned int)(v38 + a3[27]) + 112 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 871;
          goto LABEL_81;
        }
        v29 = (char *)(a3 + 28);
        v30 = (char *)a3 + v38 + 112;
      }
      else
      {
        v29 = (char *)ExAllocatePool2(256LL, (unsigned int)a3[26], 1265072196LL, v28);
        if ( !v29 )
          goto LABEL_52;
        v40 = a3[27];
        if ( v40 )
        {
          v30 = (char *)ExAllocatePool2(256LL, v40, 1265072196LL, v39);
          if ( !v30 )
            goto LABEL_52;
        }
      }
      if ( (a3[3] & 1) != 0 )
      {
        LODWORD(v57[13]) |= 1u;
        v41 = *(_QWORD *)(v55 + 32);
      }
      else
      {
        v41 = *(_QWORD *)(v33 + 184);
      }
      v57[0] = v41;
      *(_OWORD *)&v57[1] = *((_OWORD *)a3 + 1);
      *(_OWORD *)&v57[3] = *((_OWORD *)a3 + 2);
      *(_OWORD *)&v57[5] = *((_OWORD *)a3 + 3);
      *(_OWORD *)&v57[7] = *((_OWORD *)a3 + 4);
      v57[9] = *((_QWORD *)a3 + 10);
      v57[12] = *((_QWORD *)a3 + 13);
      v57[10] = v29;
      v57[11] = v30;
      v9 = ADAPTER_RENDER::DdiBuildTestCommandBuffer(v56, (struct _DXGKARG_BUILDTESTCOMMANDBUFFER *)v57, v38);
      if ( v9 < 0 )
        goto LABEL_81;
    }
    if ( HIDWORD(v57[12]) > a3[27] || LODWORD(v57[12]) > a3[26] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 921;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Driver returned invalid DMA buffer size",
        921LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741823;
    }
    else
    {
      if ( (*((_DWORD *)v5 + 102) & 0x100) == 0 )
      {
        v42 = LODWORD(v57[12]);
        v43 = (const void *)v57[10];
        v44 = (char *)*((_QWORD *)a3 + 11);
        if ( (unsigned __int64)&v44[LODWORD(v57[12])] > MmUserProbeAddress || &v44[LODWORD(v57[12])] <= v44 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v44, v43, v42);
        v45 = HIDWORD(v57[12]);
        v46 = (const void *)v57[11];
        v47 = (void *)*((_QWORD *)a3 + 12);
        v48 = (ULONG64)v47 + HIDWORD(v57[12]);
        if ( v48 > MmUserProbeAddress || v48 <= (unsigned __int64)v47 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v47, v46, v45);
      }
      *((_QWORD *)a3 + 13) = v57[12];
      v9 = 0;
    }
    goto LABEL_81;
  }
  if ( v55 )
  {
    v33 = v54;
    goto LABEL_50;
  }
  WdLogSingleEntry0(2LL);
  v31 = 808LL;
  v32 = L"Invalid HwQueue handle";
LABEL_45:
  WdLogGlobalForLineNumber = v31;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v32, v31, 0LL, 0LL, 0LL, 0LL);
  v9 = -1073741811;
LABEL_81:
  if ( (*((_DWORD *)a1 + 102) & 0x100) == 0 )
  {
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    if ( v30 )
      ExFreePoolWithTag(v30, 0);
  }
  v49 = (unsigned int)a3[2];
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a1 + 248));
  v50 = ((unsigned int)v49 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v50 < *((_DWORD *)a1 + 74) )
  {
    v51 = *((_QWORD *)a1 + 35);
    if ( (((unsigned int)v49 >> 25) & 0x60) == (*(_BYTE *)(v51 + 16 * v50 + 8) & 0x60)
      && (*(_DWORD *)(v51 + 16 * v50 + 8) & 0x1F) != 0 )
    {
      v52 = 2 * ((v49 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v51 + 8 * v52 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)a1 + 35) + 8 * v52 + 8) &= ~0x2000u;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)a1 + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
