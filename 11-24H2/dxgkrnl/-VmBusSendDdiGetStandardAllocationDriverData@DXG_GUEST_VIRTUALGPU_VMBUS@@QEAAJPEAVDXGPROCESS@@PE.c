/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140356020
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140355CF0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v10; // rax
  UINT v11; // r15d
  int *v12; // rax
  int *v13; // rsi
  int v14; // ebp
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v15; // rax
  UINT v16; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v17; // rcx
  UINT v18; // eax
  unsigned int v20[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v21; // [rsp+60h] [rbp-158h] BYREF
  int v22; // [rsp+70h] [rbp-148h]

  if ( a3->AllocationPrivateDriverDataSize <= 0x20000 && a3->ResourcePrivateDriverDataSize <= 0x20000 )
  {
    v21 = 0LL;
    v22 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v21, this, 0x40u, 0LL, 0LL, 0LL);
    v6 = v21;
    if ( !(_QWORD)v21 )
      goto LABEL_31;
    v7 = *((_DWORD *)a2 + 122);
    *(_BYTE *)(v21 + 12) = 0;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = v7;
    *(_QWORD *)(v6 + 16) = 39LL;
    *(_DWORD *)(v6 + 24) = a3->StandardAllocationType;
    *(_DWORD *)(v6 + 36) = a3->PhysicalAdapterIndex;
    *(_DWORD *)(v6 + 32) = a3->ResourcePrivateDriverDataSize;
    *(_DWORD *)(v6 + 28) = a3->AllocationPrivateDriverDataSize;
    if ( a3->StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
    {
      if ( a3->StandardAllocationType == D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE )
      {
        *(_OWORD *)(v6 + 40) = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
        goto LABEL_12;
      }
      if ( a3->StandardAllocationType == D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE )
      {
        pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)(v6 + 40) = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
        *(_DWORD *)(v6 + 48) = pCreateSharedPrimarySurfaceData->Format;
        goto LABEL_12;
      }
      if ( a3->StandardAllocationType != D3DKMDT_STANDARDALLOCATION_GDISURFACE )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11787;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid standard allocation type",
          11787LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v8 = -1073741811;
LABEL_32:
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v21);
        return v8;
      }
    }
    v10 = a3->pCreateSharedPrimarySurfaceData;
    *(_OWORD *)(v6 + 40) = *(_OWORD *)&v10->Width;
    *(_QWORD *)(v6 + 56) = *(_QWORD *)&v10->RefreshRate.Denominator;
LABEL_12:
    v11 = (a3->AllocationPrivateDriverDataSize + 43 + a3->ResourcePrivateDriverDataSize) & 0xFFFFFFF8;
    v12 = (int *)operator new[](v11, 0x4B677844u, 64LL);
    v13 = v12;
    if ( v12 )
    {
      v20[0] = v11;
      v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v21, v12, v20);
      if ( v14 < 0 || (v14 = -1073741823, v20[0] < v11) || (v14 = *v13, *v13 < 0) )
      {
        WdLogSingleEntry1(2LL, v14);
        WdLogGlobalForLineNumber = 11851;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VmBusSendDdiGetStandardAllocationDriverData failed: 0x%I64x",
          v14,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_30:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v21);
        return (unsigned int)v14;
      }
      switch ( a3->StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
          goto LABEL_20;
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v13 + 3);
          break;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          v17 = a3->pCreateSharedPrimarySurfaceData;
          *(_QWORD *)&v17->Width = *(_QWORD *)(v13 + 3);
          v17->Format = v13[5];
          break;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_20:
          v15 = a3->pCreateSharedPrimarySurfaceData;
          *(_OWORD *)&v15->Width = *(_OWORD *)(v13 + 3);
          *(_QWORD *)&v15->RefreshRate.Denominator = *(_QWORD *)(v13 + 7);
          break;
      }
      v16 = v13[1];
      if ( *(_DWORD *)(v6 + 28) )
        memmove(a3->pAllocationPrivateDriverData, v13 + 9, v16);
      else
        a3->AllocationPrivateDriverDataSize = v16;
      v18 = v13[2];
      if ( *(_DWORD *)(v6 + 32) )
        memmove(a3->pResourcePrivateDriverData, (char *)v13 + (unsigned int)v13[1] + 36, v18);
      else
        a3->ResourcePrivateDriverDataSize = v18;
      goto LABEL_30;
    }
LABEL_31:
    v8 = -1073741801;
    goto LABEL_32;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 11757;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"AllocationPrivateDriverDataSize or ResourcePrivateDriverDataSize is invalid",
    11757LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
