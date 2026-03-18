/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1401A9A08
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004AB20 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x14004C1F4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x140051978 (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403364E8 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403B1998 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3)
{
  struct DXGDEVICE *v4; // r12
  struct DXGPROCESS *Current; // r14
  struct DXGADAPTER *v7; // rdi
  char *v8; // r14
  struct DXGADAPTER *v9; // r15
  struct _KTHREAD **v10; // rsi
  struct _KTHREAD **v11; // rdi
  bool v12; // zf
  struct _KTHREAD *CurrentThread; // rax
  struct DXGADAPTER **v14; // rax
  struct DXGADAPTER *v15; // r13
  __int64 v16; // rsi
  struct DXGADAPTER *v17; // rdx
  __int64 v18; // r15
  struct DXGADAPTER *v19; // r13
  struct DXGADAPTER *v20; // rdx
  struct DXGADAPTER **v21; // rax
  struct DXGADAPTER *v22; // rsi
  int v23; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  struct DXGDEVICE *v25; // r13
  unsigned int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  __int64 CurrentProcess; // rax
  __int64 v30; // rax
  int v31; // eax
  struct DXGADAPTER *v32; // r10
  unsigned int v33; // esi
  unsigned int v34; // r8d
  ADAPTER_RENDER *v35; // r10
  char v36; // al
  struct _D3DDDI_CREATECONTEXTFLAGS v37; // r11d
  int v38; // eax
  int v39; // [rsp+28h] [rbp-D8h]
  int v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  struct DXGDEVICE *v45; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v46; // [rsp+78h] [rbp-88h]
  _DWORD *v47; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v48[2]; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTER *v49; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGADAPTER *v51; // [rsp+A8h] [rbp-58h]
  struct DXGCONTEXT *v52; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v53; // [rsp+B8h] [rbp-48h]
  _BYTE v54[16]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v55; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v56; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v57; // [rsp+108h] [rbp+8h]
  _BYTE v58[144]; // [rsp+110h] [rbp+10h] BYREF

  v47 = a3;
  *a2 = 0;
  *a3 = 0;
  v4 = 0LL;
  v53 = a2;
  v45 = 0LL;
  v52 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12844;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v48[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v48, a1);
  v7 = v48[0];
  if ( !v48[0] )
  {
    WdLogSingleEntry3(3LL, a1->HighPart, a1->LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 12858;
    goto LABEL_61;
  }
  if ( (*((_DWORD *)v48[0] + 111) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v48[0], -1073741811LL);
    WdLogGlobalForLineNumber = 12871;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_61:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v48, 0LL);
    return 3221225711LL;
  }
  v8 = (char *)Current + 216;
  v9 = 0LL;
  v10 = (struct _KTHREAD **)(v8 + 8);
  v11 = (struct _KTHREAD **)(v8 + 8);
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v12 = (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() == 0;
    CurrentThread = KeGetCurrentThread();
    if ( v12 )
    {
      *v11 = CurrentThread;
    }
    else
    {
      v11 = v10;
      *((_QWORD *)v8 + 1) = CurrentThread;
    }
    v43 = 0LL;
    v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v43);
    v15 = v48[0];
    LODWORD(v16) = DxgkpGetPairingAdapters(v48[0], 0, v14, &v44, 0LL, 0LL, 0);
    if ( (int)v16 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v43, 0LL);
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      goto LABEL_48;
    }
    v17 = v43;
    if ( !v43 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12892;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"RenderAdapterRef", 12892LL, 0LL, 0LL, 0LL, 0LL);
      v17 = v43;
    }
    if ( v9 == v17 )
    {
      LODWORD(v16) = -1073741275;
      WdLogSingleEntry3(1LL, v17, v15, -1073741275LL);
      WdLogGlobalForLineNumber = 12905;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v43,
        (__int64)v15,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v43, 0LL);
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
        *((_QWORD *)v8 + 1) = 0LL;
      else
        *v11 = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_58;
    }
    v18 = *((_QWORD *)v17 + 391) + 24LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v18, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v19 = v48[0];
    *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
    v20 = v43;
    v51 = v19;
    if ( v43 == v19 )
      goto LABEL_20;
    v49 = 0LL;
    v21 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v49);
    LODWORD(v16) = DxgkpGetPairingAdapters(v19, 0, v21, &v50, 0LL, 0LL, 0);
    if ( (int)v16 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v49, 0LL);
LABEL_23:
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v18 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v18, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v43, 0LL);
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
LABEL_48:
      if ( IsEnabledDeviceUsageNoInline )
        *((_QWORD *)v8 + 1) = 0LL;
      else
        *v11 = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      v25 = v45;
      goto LABEL_52;
    }
    v22 = v43;
    if ( v43 == v49 )
      break;
    WdLogSingleEntry1(3LL, v43);
    WdLogGlobalForLineNumber = 12933;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v49, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v18 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v43, 0LL);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      v11 = (struct _KTHREAD **)(v8 + 8);
    *v11 = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    v9 = v22;
    v10 = (struct _KTHREAD **)(v8 + 8);
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v49, 0LL);
  v20 = v43;
LABEL_20:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v58, v20, v19);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58, 0LL);
  LODWORD(v16) = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry3(3LL, v43, v19, v23);
    WdLogGlobalForLineNumber = 12945;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
    goto LABEL_23;
  }
  v25 = v45;
  v26 = 0;
  v46 = 0;
  while ( 1 )
  {
    LOBYTE(v42) = 0;
    v4 = v25;
    v27 = *((_QWORD *)v43 + 391);
    LOBYTE(v41) = v26 == 0;
    LOBYTE(v40) = 0;
    LOBYTE(v39) = 0;
    v45 = 0LL;
    v28 = ADAPTER_RENDER::CreateDevice(v27, &v45, 0LL, 1LL, v51, v39, v40, v41, 0LL, 0LL, v42);
    v25 = v45;
    v16 = v28;
    if ( v28 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      WdLogSingleEntry3(2LL, v43, CurrentProcess, v16);
      WdLogGlobalForLineNumber = 12989;
      v30 = PsGetCurrentProcess();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)v43,
        v30,
        v16,
        0LL,
        0LL);
      goto LABEL_34;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v58);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v25);
    v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58, 0LL);
    LODWORD(v16) = v31;
    if ( v31 < 0 )
      break;
    v32 = v43;
    v56 = 0LL;
    v57 = 0;
    v33 = *((_DWORD *)v43 + 786);
    HIDWORD(v56) = v33;
    v57 = 1;
    if ( (*((_DWORD *)v43 + 111) & 0x10) != 0 )
    {
      memset(&v55, 0, 24);
      v55.Type = DXGKQAITYPE_PREFERREDGPUNODE;
      *(_OWORD *)&v55.OutputDataSize = 0LL;
      v55.pOutputData = &v56;
      v55.OutputDataSize = 12;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v43, &v55) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 13040;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 13040LL, 0LL, 0LL, 0LL, 0LL);
      }
      v33 = HIDWORD(v56);
      v32 = v43;
    }
    ADAPTER_RENDER::NodeSupportsContextScheduling(*((ADAPTER_RENDER **)v32 + 391), 0, v33);
    v36 = ADAPTER_RENDER::NodeSupportsGpuVa(v35, 0, v34);
    v38 = DXGDEVICE::CreateContext(v25, &v52, v33, v57, v37, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v36);
    LODWORD(v16) = v38;
    if ( v38 >= 0 )
      goto LABEL_37;
    WdLogSingleEntry2(4LL, v43, v38);
    WdLogGlobalForLineNumber = 13061;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
LABEL_34:
    v26 = v46 + 1;
    v46 = v26;
    if ( v26 > 1 )
      goto LABEL_38;
  }
  WdLogSingleEntry3(3LL, v43, v51, v31);
  WdLogGlobalForLineNumber = 13017;
LABEL_37:
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
LABEL_38:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v18 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v43, 0LL);
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    *((_QWORD *)v8 + 1) = 0LL;
  else
    *v11 = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( (int)v16 >= 0 )
  {
    *v53 = *((_DWORD *)v25 + 117);
    *v47 = *((_DWORD *)v52 + 6);
    goto LABEL_55;
  }
LABEL_52:
  if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
LABEL_55:
  if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v4 + 2), v4);
LABEL_58:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v48, 0LL);
  return (unsigned int)v16;
}
