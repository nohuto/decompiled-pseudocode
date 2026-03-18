/*
 * XREFs of DxgkShareObjectsInternal @ 0x14032A300
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x14009B350 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401FDB34 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140230960 (-VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkShareObjects @ 0x14032A230 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404253E0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140041BF8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140076CD4 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E0B10 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1403289FC (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14032AEB8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14032B210 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        char a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        _QWORD *a8,
        PVOID *a9)
{
  __int64 v9; // r13
  char v10; // r12
  _QWORD *v11; // r14
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  char *v14; // rcx
  __int64 v15; // r12
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int EntryType; // edi
  __int64 v19; // rcx
  __int64 v20; // r9
  DXGKEYEDMUTEX *v21; // r14
  struct DXGSYNCOBJECT *v22; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  KPROCESSOR_MODE v26; // r13
  __int64 v27; // r8
  char v28; // r12
  __int64 v29; // rcx
  __int64 inserted; // rdi
  struct _KPROCESS *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v35; // r8d
  __int64 v36; // rax
  struct DXGPROCESS *v37; // r14
  unsigned int v38; // eax
  char *v39; // rsi
  unsigned int v40; // ecx
  int v41; // ecx
  unsigned int v42; // eax
  __int64 v43; // rsi
  unsigned int v44; // ecx
  int v45; // ecx
  __int64 v46; // rdx
  const wchar_t *v47; // r9
  __int64 v48; // r8
  unsigned int v49; // r8d
  __int64 v50; // rdx
  PERESOURCE *v51; // rax
  _QWORD *v52; // rax
  int Handle; // [rsp+28h] [rbp-150h]
  char v55; // [rsp+51h] [rbp-127h]
  char v56; // [rsp+52h] [rbp-126h]
  PVOID Object; // [rsp+60h] [rbp-118h] BYREF
  HANDLE v58; // [rsp+68h] [rbp-110h] BYREF
  char v59[8]; // [rsp+70h] [rbp-108h] BYREF
  char v60; // [rsp+78h] [rbp-100h]
  struct DXGPROCESS *v61; // [rsp+80h] [rbp-F8h]
  __int64 v62; // [rsp+88h] [rbp-F0h]
  __int64 v63; // [rsp+90h] [rbp-E8h]
  int v64; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-D8h]
  char v66; // [rsp+A8h] [rbp-D0h]
  PRKPROCESS PROCESS; // [rsp+B0h] [rbp-C8h]
  PVOID *v68; // [rsp+B8h] [rbp-C0h]
  _BYTE v69[24]; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v70[24]; // [rsp+D8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v72; // [rsp+120h] [rbp-58h] BYREF
  unsigned int v73; // [rsp+128h] [rbp-50h]

  v9 = a4;
  PROCESS = a3;
  v10 = a1;
  v55 = a1;
  v62 = a6;
  v11 = a8;
  v63 = (__int64)a8;
  v68 = a9;
  v64 = -1;
  v65 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v66 = 1;
    v64 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 2074);
  Object = 0LL;
  v58 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v56 = 0;
  Current = DXGPROCESS::GetCurrent(v12);
  v61 = Current;
  if ( !Current )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 634;
    v47 = L"Invalid process context. Returning 0x%I64x";
LABEL_75:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v47, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_77;
  }
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 643;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Input handle count is out of range. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_67;
  }
  v72 = 0LL;
  v73 = 0;
  if ( v10 == 1 )
  {
    v14 = &Src[4 * v9];
    if ( v14 < Src || (unsigned __int64)v14 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v72, Src, 4 * v9);
  if ( !a6 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 675;
    v47 = L"Invalid object attributes. Returning 0x%I64x";
    goto LABEL_75;
  }
  v15 = (unsigned int)v72;
  if ( !(_DWORD)v72 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 686;
    v47 = L"Input object handle is NULL. Returning 0x%I64x";
    goto LABEL_75;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, Current);
  v16 = ((unsigned int)v15 >> 6) & 0xFFFFFF;
  if ( v16 < *((_DWORD *)Current + 74)
    && (v17 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v16 + 8), (unsigned int)v15 >> 30 == ((v17 >> 5) & 3))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 280);
  }
  else
  {
    EntryType = 0;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v70);
  if ( EntryType == 4 )
  {
    v21 = 0LL;
    v22 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v59, Global, 0);
    if ( (unsigned int)v9 <= 1 )
    {
LABEL_18:
      v26 = a2;
      LOBYTE(Handle) = a2;
      v27 = (unsigned int)v15;
      v28 = v55;
      LOBYTE(v25) = v55;
      LODWORD(inserted) = CreateSharedResourceNtObject(v25, v24, v27, 0LL, v62, Handle, &Object);
      if ( (int)inserted < 0 )
      {
        if ( Object )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 811;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pObject == NULL", 811LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v21 )
          DXGKEYEDMUTEX::ReleaseReference(v21);
        if ( v22 )
        {
          v51 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
          DXGGLOBAL::DestroySyncObject(v51, v22, 0, 0);
        }
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v59);
LABEL_32:
        if ( (int)inserted >= 0 )
          goto LABEL_33;
        goto LABEL_78;
      }
      if ( v21 || v22 )
      {
        v52 = Object;
        *((_QWORD *)Object + 3) = v21;
        v52[4] = v22;
      }
      if ( v60 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v59);
      v11 = (_QWORD *)v63;
      Current = v61;
LABEL_24:
      v31 = PROCESS;
      if ( PROCESS && v31 != (struct _KPROCESS *)PsGetCurrentProcess(v29) )
      {
        KeStackAttachProcess(v31, &ApcState);
        v56 = 1;
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &v58);
      if ( v56 )
        KeUnstackDetachProcess(&ApcState);
      if ( (int)inserted < 0 )
      {
        WdLogSingleEntry3(3LL, Object, Current, inserted);
        WdLogGlobalForLineNumber = 922;
      }
      else if ( v28 == 1 )
      {
        if ( (unsigned __int64)v11 >= MmUserProbeAddress )
          v11 = (_QWORD *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v11, &v58, 8uLL);
      }
      else
      {
        *v11 = v58;
        if ( v68 )
          *v68 = Object;
      }
      goto LABEL_32;
    }
    if ( (_DWORD)v9 != 3 )
    {
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry2(3LL, v15, -1073741811LL);
      WdLogGlobalForLineNumber = 727;
      goto LABEL_65;
    }
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v59);
    v37 = v61;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v69, v61);
    inserted = HIDWORD(v72);
    v38 = (HIDWORD(v72) >> 6) & 0xFFFFFF;
    v39 = (char *)v37 + 280;
    if ( v38 < *((_DWORD *)v37 + 74) )
    {
      v40 = *(_DWORD *)(*(_QWORD *)v39 + 16LL * v38 + 8);
      if ( HIDWORD(v72) >> 30 == ((v40 >> 5) & 3) && (v40 & 0x2000) == 0 )
      {
        v41 = v40 & 0x1F;
        if ( v41 )
        {
          if ( v41 == 9 )
          {
            v21 = *(DXGKEYEDMUTEX **)(*(_QWORD *)v39 + 16LL * v38);
LABEL_53:
            if ( v21 )
            {
              if ( (*((_DWORD *)v21 + 43) & 1) == 0 )
              {
                _InterlockedIncrement(&dword_14016022C);
                LODWORD(inserted) = -1073741811;
                WdLogSingleEntry2(2LL, v21, -1073741811LL);
                WdLogGlobalForLineNumber = 761;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
                  (__int64)v21,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
LABEL_93:
                DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v69);
                DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v59);
LABEL_67:
                v26 = a2;
                goto LABEL_32;
              }
              inserted = v73;
              v42 = (v73 >> 6) & 0xFFFFFF;
              if ( v42 < *((_DWORD *)v39 + 4) )
              {
                v43 = *(_QWORD *)v39;
                v44 = *(_DWORD *)(v43 + 16LL * v42 + 8);
                if ( v73 >> 30 == ((v44 >> 5) & 3) && (v44 & 0x2000) == 0 )
                {
                  v45 = v44 & 0x1F;
                  if ( v45 )
                  {
                    if ( v45 == 8 )
                    {
                      v22 = *(struct DXGSYNCOBJECT **)(v43 + 16LL * v42);
                      goto LABEL_61;
                    }
                    WdLogSingleEntry0(2LL);
                    WdLogGlobalForLineNumber = 318;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"Handle type mismatch",
                      318LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                }
              }
              v22 = 0LL;
LABEL_61:
              if ( v22 )
              {
                if ( (*((_DWORD *)v22 + 53) & 2) != 0 )
                {
                  DXGKEYEDMUTEX::AcquireReference(v21);
                  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v69);
                  DXGSYNCOBJECT::AddReference(v22);
                  goto LABEL_18;
                }
                _InterlockedIncrement(&dword_14016022C);
                LODWORD(inserted) = -1073741811;
                WdLogSingleEntry2(2LL, v22, -1073741811LL);
                WdLogGlobalForLineNumber = 787;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
                  (__int64)v22,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                v50 = inserted;
                LODWORD(inserted) = -1073741811;
                WdLogSingleEntry2(3LL, v50, -1073741811LL);
                WdLogGlobalForLineNumber = 776;
              }
              goto LABEL_93;
            }
            v46 = inserted;
            LODWORD(inserted) = -1073741811;
            WdLogSingleEntry2(3LL, v46, -1073741811LL);
            WdLogGlobalForLineNumber = 750;
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v69);
LABEL_65:
            if ( v60 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v59);
            goto LABEL_67;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v21 = 0LL;
    goto LABEL_53;
  }
  if ( EntryType != 11 && EntryType != 8 )
  {
    if ( EntryType != 14 )
    {
      v48 = EntryType;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry3(3LL, v15, v48, -1073741811LL);
      WdLogGlobalForLineNumber = 883;
      goto LABEL_77;
    }
    if ( (_DWORD)v9 != 1 )
    {
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry2(3LL, v15, -1073741811LL);
      WdLogGlobalForLineNumber = 862;
      goto LABEL_77;
    }
    v26 = a2;
    v49 = v15;
    v28 = v55;
    LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v55, 14, v49, v20, v62, a2, &Object);
    if ( (int)inserted >= 0 )
      goto LABEL_24;
    if ( !Object )
      goto LABEL_32;
    WdLogSingleEntry0(1LL);
    v36 = 874LL;
LABEL_42:
    WdLogGlobalForLineNumber = v36;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pObject == NULL", v36, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_32;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v26 = a2;
    v35 = v15;
    v28 = v55;
    LOBYTE(v19) = v55;
    LODWORD(inserted) = CreateSharedSyncNtObject(v19, EntryType, v35, 0LL, v62, a2, &Object);
    if ( (int)inserted >= 0 )
      goto LABEL_24;
    if ( !Object )
      goto LABEL_32;
    WdLogSingleEntry0(1LL);
    v36 = 851LL;
    goto LABEL_42;
  }
  LODWORD(inserted) = -1073741811;
  WdLogSingleEntry2(3LL, v15, -1073741811LL);
  WdLogGlobalForLineNumber = 839;
LABEL_77:
  v26 = a2;
LABEL_78:
  if ( v58 )
    ObCloseHandle(v58, v26);
LABEL_33:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v64);
  return (unsigned int)inserted;
}
