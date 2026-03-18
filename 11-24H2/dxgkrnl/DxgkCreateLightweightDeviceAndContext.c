/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1401ABF08
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x14004BCA8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x1400513CC (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402CFA78 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A4C78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3)
{
  struct DXGDEVICE *v4; // r15
  struct DXGADAPTER *v6; // rdi
  struct DXGADAPTER *v7; // rsi
  char *v8; // r14
  struct DXGADAPTER *v9; // rdx
  __int64 v10; // r13
  struct DXGADAPTER *v11; // rbx
  struct DXGADAPTER *v12; // rdx
  struct DXGADAPTER **v13; // rax
  __int64 v14; // rdi
  struct DXGADAPTER **v15; // rax
  struct DXGADAPTER *v16; // rbx
  struct DXGDEVICE *v17; // rsi
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 CurrentProcess; // rax
  __int64 v23; // rax
  int v24; // eax
  struct DXGADAPTER *v25; // r10
  unsigned int v26; // edi
  unsigned int v27; // r8d
  ADAPTER_RENDER *v28; // r10
  unsigned __int8 v29; // al
  struct _D3DDDI_CREATECONTEXTFLAGS v30; // r11d
  int v31; // eax
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+38h] [rbp-C8h]
  int v35; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  struct DXGDEVICE *v38; // [rsp+70h] [rbp-90h] BYREF
  struct DXGPROCESS *Current; // [rsp+78h] [rbp-88h]
  struct DXGADAPTER *v40[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v41; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v42; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGCONTEXT *v44; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGADAPTER *v45; // [rsp+B0h] [rbp-50h]
  _DWORD *v46; // [rsp+B8h] [rbp-48h]
  _BYTE v47[16]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v48; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v49; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v50; // [rsp+108h] [rbp+8h]
  _BYTE v51[144]; // [rsp+110h] [rbp+10h] BYREF

  v41 = a3;
  *a2 = 0;
  *a3 = 0;
  v4 = 0LL;
  v46 = a2;
  v38 = 0LL;
  v44 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12905;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v40[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v40, a1);
  v6 = v40[0];
  if ( !v40[0] )
  {
    WdLogSingleEntry3(3LL, a1->HighPart, a1->LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 12919;
    goto LABEL_47;
  }
  if ( (*((_DWORD *)v40[0] + 111) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v40[0], -1073741811LL);
    WdLogGlobalForLineNumber = 12932;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_47:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v40, 0LL);
    return 3221225711LL;
  }
  v7 = 0LL;
  v8 = (char *)Current + 216;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
    v36 = 0LL;
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v36);
    v16 = v40[0];
    LODWORD(v14) = DxgkpGetPairingAdapters(v40[0], 0, v15, &v37, 0LL, 0LL, 0);
    if ( (int)v14 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
      goto LABEL_15;
    }
    v9 = v36;
    if ( !v36 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12953;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"RenderAdapterRef", 12953LL, 0LL, 0LL, 0LL, 0LL);
      v9 = v36;
    }
    if ( v7 == v9 )
    {
      LODWORD(v14) = -1073741275;
      WdLogSingleEntry3(1LL, v9, v16, -1073741275LL);
      WdLogGlobalForLineNumber = 12966;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v36,
        (__int64)v16,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
      *((_QWORD *)v8 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_22;
    }
    v10 = *((_QWORD *)v9 + 391) + 24LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = v40[0];
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v12 = v36;
    v45 = v11;
    if ( v36 == v11 )
      goto LABEL_24;
    v42 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v42);
    LODWORD(v14) = DxgkpGetPairingAdapters(v11, 0, v13, &v43, 0LL, 0LL, 0);
    if ( (int)v14 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v42, 0LL);
      *(_QWORD *)(v10 + 8) = 0LL;
LABEL_27:
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
LABEL_15:
      *((_QWORD *)v8 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      v17 = v38;
      goto LABEL_16;
    }
    v7 = v36;
    if ( v36 == v42 )
      break;
    WdLogSingleEntry1(3LL, v36);
    WdLogGlobalForLineNumber = 12994;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v42, 0LL);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v42, 0LL);
  v12 = v36;
LABEL_24:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, v12, v11);
  v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51, 0LL);
  LODWORD(v14) = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry3(3LL, v36, v11, v18);
    WdLogGlobalForLineNumber = 13006;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    *(_QWORD *)(v10 + 8) = 0LL;
    goto LABEL_27;
  }
  v17 = v38;
  v19 = 0;
  LODWORD(Current) = 0;
  while ( 1 )
  {
    LOBYTE(v35) = 0;
    v4 = v17;
    v20 = *((_QWORD *)v36 + 391);
    LOBYTE(v34) = v19 == 0;
    LOBYTE(v33) = 0;
    LOBYTE(v32) = 0;
    v38 = 0LL;
    v21 = ADAPTER_RENDER::CreateDevice(v20, &v38, 0LL, 1LL, v11, v32, v33, v34, 0LL, 0LL, v35);
    v17 = v38;
    v14 = v21;
    if ( v21 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      WdLogSingleEntry3(2LL, v36, CurrentProcess, v14);
      WdLogGlobalForLineNumber = 13050;
      v23 = PsGetCurrentProcess();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)v36,
        v23,
        v14,
        0LL,
        0LL);
      v11 = v45;
      goto LABEL_38;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v51);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v17);
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51, 0LL);
    LODWORD(v14) = v24;
    if ( v24 < 0 )
      break;
    v25 = v36;
    v49 = 0LL;
    v50 = 0;
    v26 = *((_DWORD *)v36 + 786);
    HIDWORD(v49) = v26;
    v50 = 1;
    if ( (*((_DWORD *)v36 + 111) & 0x10) != 0 )
    {
      memset(&v48, 0, 24);
      v48.Type = DXGKQAITYPE_PREFERREDGPUNODE;
      *(_OWORD *)&v48.OutputDataSize = 0LL;
      v48.pOutputData = &v49;
      v48.OutputDataSize = 12;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v36, &v48) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 13101;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 13101LL, 0LL, 0LL, 0LL, 0LL);
      }
      v26 = HIDWORD(v49);
      v25 = v36;
    }
    ADAPTER_RENDER::NodeSupportsContextScheduling(*((ADAPTER_RENDER **)v25 + 391), 0, v26);
    v29 = ADAPTER_RENDER::NodeSupportsGpuVa(v28, 0, v27);
    v31 = DXGDEVICE::CreateContext(v17, &v44, v26, v50, v30, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v29);
    LODWORD(v14) = v31;
    if ( v31 >= 0 )
      goto LABEL_41;
    WdLogSingleEntry2(4LL, v36, v31);
    WdLogGlobalForLineNumber = 13122;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
LABEL_38:
    v19 = (_DWORD)Current + 1;
    LODWORD(Current) = v19;
    if ( v19 > 1 )
      goto LABEL_42;
  }
  WdLogSingleEntry3(3LL, v36, v11, v24);
  WdLogGlobalForLineNumber = 13078;
LABEL_41:
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
LABEL_42:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
  *(_QWORD *)(v10 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( (int)v14 >= 0 )
  {
    *v46 = *((_DWORD *)v17 + 117);
    *v41 = *((_DWORD *)v44 + 6);
    goto LABEL_19;
  }
LABEL_16:
  if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
LABEL_19:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v4 + 2), v4);
  }
LABEL_22:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v40, 0LL);
  return (unsigned int)v14;
}
