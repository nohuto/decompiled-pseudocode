/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1403611F0
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140360EC0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  __int64 v6; // r9
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v11; // rax
  UINT v12; // r15d
  int *v13; // rax
  int *v14; // rsi
  int v15; // ebp
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v16; // rax
  UINT v17; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v18; // rcx
  UINT v19; // eax
  unsigned int v21[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v22; // [rsp+60h] [rbp-158h] BYREF
  int v23; // [rsp+70h] [rbp-148h]

  if ( a3->AllocationPrivateDriverDataSize <= 0x20000 && a3->ResourcePrivateDriverDataSize <= 0x20000 )
  {
    v22 = 0LL;
    v23 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v22, this, 0x40u, 0LL, 0LL, 0LL);
    v7 = v22;
    if ( !(_QWORD)v22 )
      goto LABEL_31;
    v8 = *((_DWORD *)a2 + 122);
    *(_BYTE *)(v22 + 12) = 0;
    *(_DWORD *)(v7 + 12) &= 0x1FFu;
    *(_QWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v7 + 16) = 39LL;
    *(_DWORD *)(v7 + 24) = a3->StandardAllocationType;
    *(_DWORD *)(v7 + 36) = a3->PhysicalAdapterIndex;
    *(_DWORD *)(v7 + 32) = a3->ResourcePrivateDriverDataSize;
    *(_DWORD *)(v7 + 28) = a3->AllocationPrivateDriverDataSize;
    if ( a3->StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
    {
      if ( a3->StandardAllocationType == D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE )
      {
        *(_OWORD *)(v7 + 40) = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
        goto LABEL_12;
      }
      if ( a3->StandardAllocationType == D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE )
      {
        pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)(v7 + 40) = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
        *(_DWORD *)(v7 + 48) = pCreateSharedPrimarySurfaceData->Format;
        goto LABEL_12;
      }
      if ( a3->StandardAllocationType != D3DKMDT_STANDARDALLOCATION_GDISURFACE )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11599;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid standard allocation type",
          11599LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v9 = -1073741811;
LABEL_32:
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v22);
        return v9;
      }
    }
    v11 = a3->pCreateSharedPrimarySurfaceData;
    *(_OWORD *)(v7 + 40) = *(_OWORD *)&v11->Width;
    *(_QWORD *)(v7 + 56) = *(_QWORD *)&v11->RefreshRate.Denominator;
LABEL_12:
    v12 = (a3->AllocationPrivateDriverDataSize + 43 + a3->ResourcePrivateDriverDataSize) & 0xFFFFFFF8;
    v13 = (int *)operator new[](v12, 0x4B677844u, 64LL, v6);
    v14 = v13;
    if ( v13 )
    {
      v21[0] = v12;
      v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v22, v13, v21);
      if ( v15 < 0 || (v15 = -1073741823, v21[0] < v12) || (v15 = *v14, *v14 < 0) )
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 11663;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"VmBusSendDdiGetStandardAllocationDriverData failed: 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_30:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v22);
        return (unsigned int)v15;
      }
      switch ( a3->StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
          goto LABEL_20;
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v14 + 3);
          break;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          v18 = a3->pCreateSharedPrimarySurfaceData;
          *(_QWORD *)&v18->Width = *(_QWORD *)(v14 + 3);
          v18->Format = v14[5];
          break;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_20:
          v16 = a3->pCreateSharedPrimarySurfaceData;
          *(_OWORD *)&v16->Width = *(_OWORD *)(v14 + 3);
          *(_QWORD *)&v16->RefreshRate.Denominator = *(_QWORD *)(v14 + 7);
          break;
      }
      v17 = v14[1];
      if ( *(_DWORD *)(v7 + 28) )
        memmove(a3->pAllocationPrivateDriverData, v14 + 9, v17);
      else
        a3->AllocationPrivateDriverDataSize = v17;
      v19 = v14[2];
      if ( *(_DWORD *)(v7 + 32) )
        memmove(a3->pResourcePrivateDriverData, (char *)v14 + (unsigned int)v14[1] + 36, v19);
      else
        a3->ResourcePrivateDriverDataSize = v19;
      goto LABEL_30;
    }
LABEL_31:
    v9 = -1073741801;
    goto LABEL_32;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 11569;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"AllocationPrivateDriverDataSize or ResourcePrivateDriverDataSize is invalid",
    11569LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
