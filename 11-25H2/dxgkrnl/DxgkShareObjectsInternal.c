/*
 * XREFs of DxgkShareObjectsInternal @ 0x14029DC00
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x140099200 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022A070 (-VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkShareObjects @ 0x14029DB30 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426890 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140042268 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401DB880 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14029D190 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14029EE74 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        char a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        HANDLE *a8,
        PVOID *a9)
{
  __int64 v9; // r13
  char v10; // r15
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r14
  char *v13; // rcx
  __int64 inserted; // rdi
  char *v15; // r12
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int EntryType; // esi
  __int64 v19; // rcx
  __int64 v20; // r9
  DXGKEYEDMUTEX *v21; // r14
  __int64 v22; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  KPROCESSOR_MODE v26; // r12
  char v27; // r13
  __int64 v28; // rcx
  struct _KPROCESS *v29; // rdi
  void *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rdx
  const wchar_t *v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  DXGGLOBAL *v48; // rax
  _QWORD *v49; // rax
  int Handle; // [rsp+28h] [rbp-150h]
  char v52; // [rsp+51h] [rbp-127h]
  char v53; // [rsp+52h] [rbp-126h]
  PVOID Object; // [rsp+60h] [rbp-118h] BYREF
  HANDLE v55; // [rsp+68h] [rbp-110h] BYREF
  char v56[8]; // [rsp+70h] [rbp-108h] BYREF
  char v57; // [rsp+78h] [rbp-100h]
  struct DXGPROCESS *v58; // [rsp+80h] [rbp-F8h]
  __int64 v59; // [rsp+88h] [rbp-F0h]
  HANDLE *v60; // [rsp+90h] [rbp-E8h]
  int v61; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-D8h]
  char v63; // [rsp+A8h] [rbp-D0h]
  PRKPROCESS PROCESS; // [rsp+B0h] [rbp-C8h]
  PVOID *v65; // [rsp+B8h] [rbp-C0h]
  _BYTE v66[24]; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v67[24]; // [rsp+D8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v69; // [rsp+120h] [rbp-58h] BYREF
  unsigned int v70; // [rsp+128h] [rbp-50h]

  v9 = a4;
  PROCESS = a3;
  v10 = a1;
  v52 = a1;
  v59 = a6;
  v60 = a8;
  v65 = a9;
  v61 = -1;
  v62 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v63 = 1;
    v61 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v61, 2074);
  Object = 0LL;
  v55 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v53 = 0;
  Current = DXGPROCESS::GetCurrent(v11);
  v58 = Current;
  if ( !Current )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 636;
    v43 = L"Invalid process context. Returning 0x%I64x";
LABEL_75:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v43, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_77;
  }
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Input handle count is out of range. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_67;
  }
  v69 = 0LL;
  v70 = 0;
  if ( v10 == 1 )
  {
    v13 = &Src[4 * v9];
    if ( v13 < Src || (unsigned __int64)v13 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v69, Src, 4 * v9);
  if ( !a6 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 677;
    v43 = L"Invalid object attributes. Returning 0x%I64x";
    goto LABEL_75;
  }
  inserted = (unsigned int)v69;
  if ( !(_DWORD)v69 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 688;
    v43 = L"Input object handle is NULL. Returning 0x%I64x";
    goto LABEL_75;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67, Current);
  v15 = (char *)Current + 280;
  v16 = ((unsigned int)inserted >> 6) & 0xFFFFFF;
  if ( v16 < *((_DWORD *)Current + 74)
    && (v17 = *(_DWORD *)(*(_QWORD *)v15 + 16LL * v16 + 8), (unsigned int)inserted >> 30 == ((v17 >> 5) & 3))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 280);
  }
  else
  {
    EntryType = 0;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v67);
  if ( EntryType == 4 )
  {
    v21 = 0LL;
    v22 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56, Global, 0);
    if ( (unsigned int)v9 <= 1 )
    {
LABEL_18:
      v26 = a2;
      LOBYTE(Handle) = a2;
      v27 = v52;
      LOBYTE(v25) = v52;
      LODWORD(inserted) = CreateSharedResourceNtObject(v25, v24, (unsigned int)inserted, 0LL, v59, Handle, &Object);
      if ( (int)inserted < 0 )
      {
        if ( Object )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 813;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pObject == NULL", 813LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v21 )
          DXGKEYEDMUTEX::ReleaseReference(v21);
        if ( v22 )
        {
          v48 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::DestroySyncObject(v48, (struct DXGSYNCOBJECT *)v22, 0);
        }
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56);
LABEL_32:
        if ( (int)inserted >= 0 )
          goto LABEL_33;
        goto LABEL_78;
      }
      if ( v21 || v22 )
      {
        v49 = Object;
        *((_QWORD *)Object + 3) = v21;
        v49[4] = v22;
      }
      if ( v57 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v56);
      Current = v58;
LABEL_24:
      v29 = PROCESS;
      if ( PROCESS && v29 != (struct _KPROCESS *)PsGetCurrentProcess(v28) )
      {
        KeStackAttachProcess(v29, &ApcState);
        v53 = 1;
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &v55);
      if ( v53 )
        KeUnstackDetachProcess(&ApcState);
      if ( (int)inserted < 0 )
      {
        WdLogSingleEntry3(3LL, Object, Current, inserted);
        WdLogGlobalForLineNumber = 924;
      }
      else if ( v27 == 1 )
      {
        v30 = v60;
        if ( (unsigned __int64)v60 >= MmUserProbeAddress )
          v30 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v30, &v55, 8uLL);
      }
      else
      {
        *v60 = v55;
        if ( v65 )
          *v65 = Object;
      }
      goto LABEL_32;
    }
    if ( (_DWORD)v9 != 3 )
    {
      v41 = inserted;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry2(3LL, v41, -1073741811LL);
      WdLogGlobalForLineNumber = 729;
      goto LABEL_65;
    }
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v56);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v66, v58);
    inserted = HIDWORD(v69);
    v35 = (HIDWORD(v69) >> 6) & 0xFFFFFF;
    if ( v35 < *((_DWORD *)v15 + 4) )
    {
      v36 = *(_DWORD *)(*(_QWORD *)v15 + 16LL * v35 + 8);
      if ( HIDWORD(v69) >> 30 == ((v36 >> 5) & 3) && (v36 & 0x2000) == 0 )
      {
        v37 = v36 & 0x1F;
        if ( v37 )
        {
          if ( v37 == 9 )
          {
            v21 = *(DXGKEYEDMUTEX **)(*(_QWORD *)v15 + 16LL * v35);
LABEL_53:
            if ( v21 )
            {
              if ( (*((_DWORD *)v21 + 43) & 1) == 0 )
              {
                _InterlockedIncrement(&dword_14015D20C);
                LODWORD(inserted) = -1073741811;
                WdLogSingleEntry2(2LL, v21, -1073741811LL);
                WdLogGlobalForLineNumber = 763;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
                  (__int64)v21,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
LABEL_93:
                DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
                DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56);
LABEL_67:
                v26 = a2;
                goto LABEL_32;
              }
              inserted = v70;
              v38 = (v70 >> 6) & 0xFFFFFF;
              if ( v38 < *((_DWORD *)v15 + 4) )
              {
                v39 = *(_DWORD *)(*(_QWORD *)v15 + 16LL * v38 + 8);
                if ( v70 >> 30 == ((v39 >> 5) & 3) && (v39 & 0x2000) == 0 )
                {
                  v40 = v39 & 0x1F;
                  if ( v40 )
                  {
                    if ( v40 == 8 )
                    {
                      v22 = *(_QWORD *)(*(_QWORD *)v15 + 16LL * v38);
                      goto LABEL_61;
                    }
                    WdLogSingleEntry0(2LL);
                    WdLogGlobalForLineNumber = 318;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
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
                if ( (*(_DWORD *)(v22 + 212) & 2) != 0 )
                {
                  DXGKEYEDMUTEX::AcquireReference(v21);
                  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
                  _InterlockedIncrement((volatile signed __int32 *)(v22 + 24));
                  LODWORD(inserted) = v69;
                  goto LABEL_18;
                }
                _InterlockedIncrement(&dword_14015D20C);
                LODWORD(inserted) = -1073741811;
                WdLogSingleEntry2(2LL, v22, -1073741811LL);
                WdLogGlobalForLineNumber = 789;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
                  v22,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                v47 = inserted;
                LODWORD(inserted) = -1073741811;
                WdLogSingleEntry2(3LL, v47, -1073741811LL);
                WdLogGlobalForLineNumber = 778;
              }
              goto LABEL_93;
            }
            v42 = inserted;
            LODWORD(inserted) = -1073741811;
            WdLogSingleEntry2(3LL, v42, -1073741811LL);
            WdLogGlobalForLineNumber = 752;
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
LABEL_65:
            if ( v57 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v56);
            goto LABEL_67;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
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
      v45 = inserted;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry3(3LL, v45, EntryType, -1073741811LL);
      WdLogGlobalForLineNumber = 885;
      goto LABEL_77;
    }
    if ( (_DWORD)v9 != 1 )
    {
      v46 = inserted;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry2(3LL, v46, -1073741811LL);
      WdLogGlobalForLineNumber = 864;
      goto LABEL_77;
    }
    v26 = a2;
    v27 = v52;
    LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v52, 14, inserted, v20, v59, a2, &Object);
    if ( (int)inserted >= 0 )
      goto LABEL_24;
    if ( !Object )
      goto LABEL_32;
    WdLogSingleEntry0(1LL);
    v34 = 876LL;
LABEL_42:
    WdLogGlobalForLineNumber = v34;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pObject == NULL", v34, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_32;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v26 = a2;
    v27 = v52;
    LOBYTE(v19) = v52;
    LODWORD(inserted) = CreateSharedSyncNtObject(v19, EntryType, inserted, 0LL, v59, a2, &Object);
    if ( (int)inserted >= 0 )
      goto LABEL_24;
    if ( !Object )
      goto LABEL_32;
    WdLogSingleEntry0(1LL);
    v34 = 853LL;
    goto LABEL_42;
  }
  v44 = inserted;
  LODWORD(inserted) = -1073741811;
  WdLogSingleEntry2(3LL, v44, -1073741811LL);
  WdLogGlobalForLineNumber = 841;
LABEL_77:
  v26 = a2;
LABEL_78:
  if ( v55 )
    ObCloseHandle(v55, v26);
LABEL_33:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v61);
  return (unsigned int)inserted;
}
