/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x140227BDC
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401EFCAC (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030635C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x140323610 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401EE930 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x14022891C (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x14022A7DC (-VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 a9,
        void *const *a10,
        bool a11,
        bool a12,
        struct DXGDEVICE *a13)
{
  __int64 v14; // rax
  const wchar_t *v15; // r9
  __int64 v16; // rbx
  char v18; // r13
  struct DXGPROCESS *v19; // r10
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // r11d
  __int64 v23; // r10
  unsigned int v24; // edx
  bool v25; // zf
  NTSTATUS v26; // esi
  PVOID v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  const wchar_t *v33; // r9
  unsigned int i; // r13d
  unsigned int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // edx
  __int64 v39; // rax
  void *const *v40; // r15
  void *v41; // rcx
  PVOID v42; // rax
  unsigned int v43; // r15d
  unsigned __int64 *v44; // r13
  unsigned int v45; // edx
  unsigned int v46; // eax
  unsigned int v47; // r10d
  __int64 v48; // r9
  unsigned int v49; // ecx
  DXGSYNCOBJECT *v50; // rbx
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // r8
  unsigned int v54; // ecx
  int v55; // ecx
  __int64 v56; // rbx
  unsigned __int64 *v57; // rdx
  int v60; // [rsp+5Ch] [rbp-1DCh]
  PVOID v61; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 *v62; // [rsp+68h] [rbp-1D0h]
  unsigned int *v63; // [rsp+70h] [rbp-1C8h]
  unsigned __int64 *v64; // [rsp+78h] [rbp-1C0h]
  unsigned int *v65; // [rsp+80h] [rbp-1B8h]
  void *const *v66; // [rsp+88h] [rbp-1B0h]
  PVOID Object; // [rsp+90h] [rbp-1A8h]
  _BYTE v68[24]; // [rsp+98h] [rbp-1A0h] BYREF
  struct DXGPROCESS *v69; // [rsp+B0h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v70; // [rsp+C0h] [rbp-178h]
  __int128 v71; // [rsp+D0h] [rbp-168h] BYREF
  int v72; // [rsp+E0h] [rbp-158h]

  v65 = a4;
  v70 = this;
  v69 = a2;
  v64 = a8;
  v66 = a10;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    WdLogSingleEntry0(2LL);
    v14 = 9119LL;
    v15 = L"ObjectCount or BroadcastContextCount is too big";
    goto LABEL_93;
  }
  if ( a12 && (!a13 || a6 || a7 || (*(_BYTE *)&a5.0 & 2) != 0) )
  {
    WdLogSingleEntry0(2LL);
    v14 = 9127LL;
    v15 = L"Invalid parameters for signal from CPU";
LABEL_93:
    WdLogGlobalForLineNumber = v14;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v60 = a8 != 0LL ? 8 * a3 : 0;
  v71 = 0LL;
  v72 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v71, this, v60 + 4 * (a6 + a3 + 14), 0LL, 0LL, 0LL);
  v16 = v71;
  if ( !(_QWORD)v71 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 9140;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to allocate memory", 9140LL, 0LL, 0LL, 0LL, 0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v71);
    return 3221225495LL;
  }
  *(_QWORD *)v71 = 0LL;
  *(_DWORD *)(v16 + 8) = 0;
  *(_BYTE *)(v16 + 12) = 0;
  *(_DWORD *)(v16 + 12) &= 0x1FFu;
  *(_QWORD *)(v16 + 16) = 26LL;
  *(_DWORD *)(v16 + 8) = DXGPROCESS::GetHostProcess(a2);
  *(_DWORD *)(v16 + 32) = a6;
  *(struct _D3DDDICB_SIGNALFLAGS *)(v16 + 28) = a5;
  if ( a12 )
    *(_DWORD *)(v16 + 48) = *((_DWORD *)a13 + 118);
  *(_DWORD *)(v16 + 24) = a3;
  *(_QWORD *)(v16 + 40) = a9;
  v63 = (unsigned int *)(v16 + 56);
  v61 = (PVOID)(v16 + 56 + 4LL * a3);
  if ( v60 )
    v62 = (unsigned __int64 *)(v16 + 56 + 4LL * a3 + 4LL * a6);
  else
    v62 = 0LL;
  Object = 0LL;
  v18 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v68, a2);
  v19 = a2;
  if ( a12 )
    goto LABEL_22;
  v20 = (*a7 >> 6) & 0xFFFFFF;
  v21 = *a7 >> 30;
  v22 = *((_DWORD *)a2 + 74);
  if ( v20 >= v22 )
    goto LABEL_37;
  v23 = *((_QWORD *)a2 + 35);
  v24 = *(_DWORD *)(v23 + 16LL * v20 + 8);
  if ( v21 != ((v24 >> 5) & 3) || (v24 & 0x2000) != 0 || (v24 & 0x1F) != 7 )
  {
    v19 = a2;
    goto LABEL_31;
  }
  v25 = *(_QWORD *)(v23 + 16LL * v20) == 0LL;
  v19 = a2;
  if ( v25 )
  {
LABEL_31:
    if ( v20 < v22 )
    {
      v28 = 2LL * v20;
      v29 = *((_QWORD *)v19 + 35);
      v30 = *(_DWORD *)(v29 + 16LL * v20 + 8);
      if ( v21 == ((v30 >> 5) & 3) && (v30 & 0x2000) == 0 )
      {
        v31 = v30 & 0x1F;
        if ( v31 )
        {
          if ( v31 == 15 )
          {
            if ( *(_QWORD *)(v29 + 8 * v28) )
            {
              v18 = 1;
              goto LABEL_22;
            }
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
LABEL_37:
    WdLogSingleEntry1(2LL, *a7);
    WdLogGlobalForLineNumber = 9176;
    v32 = *a7;
LABEL_38:
    v33 = L"Invalid context handle: 0x%I64x";
LABEL_39:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v33, v32, 0LL, 0LL, 0LL, 0LL);
    v26 = -1073741811;
    goto LABEL_40;
  }
LABEL_22:
  if ( v18 )
  {
    v26 = VmBusSubmitSignalToHwQueueHelper(v19, a11, a3, a6, a7, v65, v64, (unsigned int *)v61, v63, v62);
    if ( v26 >= 0 )
    {
LABEL_24:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v68);
      v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v70, (struct DXGVMBUSMESSAGE *)&v71);
      v27 = Object;
      goto LABEL_25;
    }
LABEL_40:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v68);
    v27 = 0LL;
    goto LABEL_25;
  }
  for ( i = 0; i < a6; ++i )
  {
    v35 = a7[i];
    v36 = (v35 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 >= *((_DWORD *)v19 + 74) )
      goto LABEL_51;
    v37 = *((_QWORD *)v19 + 35);
    v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
    if ( ((v35 >> 25) & 0x60) != (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60) || (v38 & 0x2000) != 0 || (v38 & 0x1F) == 0 )
      goto LABEL_51;
    if ( (*(_BYTE *)(v37 + 16LL * ((v35 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v19 = a2;
LABEL_51:
      v39 = 0LL;
      goto LABEL_52;
    }
    v39 = *(_QWORD *)(v37 + 16LL * ((v35 >> 6) & 0xFFFFFF));
LABEL_52:
    if ( !v39 )
    {
      WdLogSingleEntry1(2LL, a7[i]);
      WdLogGlobalForLineNumber = 9220;
      v32 = a7[i];
      goto LABEL_38;
    }
    *((_DWORD *)v61 + i) = *(_DWORD *)(v39 + 28);
  }
  if ( (*(_BYTE *)&a5.0 & 2) == 0 )
  {
    v43 = 0;
    v44 = v62;
    while ( 1 )
    {
      if ( v43 >= a3 )
        goto LABEL_24;
      v45 = v65[v43];
      v46 = (v45 >> 6) & 0xFFFFFF;
      v47 = *((_DWORD *)v19 + 74);
      if ( v46 < v47
        && (v48 = *((_QWORD *)a2 + 35), v49 = *(_DWORD *)(v48 + 16LL * v46 + 8), v65[v43] >> 30 == ((v49 >> 5) & 3))
        && (v49 & 0x2000) == 0
        && (v49 & 0x1F) == 8 )
      {
        v50 = *(DXGSYNCOBJECT **)(v48 + 16LL * v46);
      }
      else
      {
        v50 = 0LL;
      }
      if ( v50 )
      {
        v63[v43] = DXGSYNCOBJECT::GetHostHandle(v50, v45);
        goto LABEL_83;
      }
      v51 = (v45 >> 6) & 0xFFFFFF;
      v52 = v45 >> 30;
      if ( v51 >= v47 )
        goto LABEL_80;
      v53 = *((_QWORD *)a2 + 35);
      v54 = *(_DWORD *)(v53 + 16LL * v51 + 8);
      if ( v52 != ((v54 >> 5) & 3) )
        goto LABEL_80;
      if ( (v54 & 0x2000) != 0 )
        goto LABEL_80;
      v55 = v54 & 0x1F;
      if ( !v55 )
        goto LABEL_80;
      if ( v55 != 11 )
        break;
      v56 = *(_QWORD *)(v53 + 16LL * v51);
LABEL_81:
      if ( !v56 )
      {
        WdLogSingleEntry1(2LL, v65[v43]);
        WdLogGlobalForLineNumber = 9276;
        v32 = v65[v43];
        v33 = L"Invalid sync object handle 0x%I64x";
        goto LABEL_39;
      }
      v63[v43] = *(_DWORD *)(v56 + 44);
      v50 = *(DXGSYNCOBJECT **)(v56 + 32);
LABEL_83:
      if ( v60 && *((_DWORD *)v50 + 101) == 5 )
      {
        if ( a11 )
        {
          v57 = &v64[v43];
          if ( (unsigned __int64)v57 >= MmUserProbeAddress )
            v57 = (unsigned __int64 *)MmUserProbeAddress;
          RtlCopyVolatileMemory(&v44[v43], v57, 8uLL);
        }
        else
        {
          v44[v43] = v64[v43];
        }
      }
      ++v43;
      v19 = a2;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_80:
    v56 = 0LL;
    goto LABEL_81;
  }
  v40 = v66;
  if ( (*((_DWORD *)v19 + 102) & 0x10) != 0 )
  {
    v42 = *v66;
    goto LABEL_62;
  }
  v41 = *v66;
  v61 = 0LL;
  v26 = ObReferenceObjectByHandle(v41, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v61, 0LL);
  v27 = v61;
  Object = v61;
  if ( v26 >= 0 )
  {
    v42 = v61;
LABEL_62:
    *(_QWORD *)(v16 + 48) = v42;
    goto LABEL_24;
  }
  WdLogSingleEntry1(3LL, *v40);
  WdLogGlobalForLineNumber = 9237;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v68);
LABEL_25:
  if ( v26 < 0 )
  {
    if ( v27 )
      ObfDereferenceObject(v27);
    WdLogSingleEntry1(2LL, v26);
    WdLogGlobalForLineNumber = 9324;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBusSendSignalSyncObject failed: 0x%I64x",
      v26,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v71);
  return (unsigned int)v26;
}
