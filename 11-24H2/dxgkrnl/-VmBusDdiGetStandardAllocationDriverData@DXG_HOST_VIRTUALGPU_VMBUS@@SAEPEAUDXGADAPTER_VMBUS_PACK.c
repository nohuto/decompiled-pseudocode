/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221A60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400584FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140355CF0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // r12d
  int *v7; // rbx
  __int64 v8; // rcx
  char v9; // r15
  __int64 v10; // r14
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v11; // rax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v18; // rax
  const wchar_t *v19; // r9
  int v20; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  _BYTE v22[24]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v23[24]; // [rsp+70h] [rbp-11h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v24; // [rsp+88h] [rbp+7h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v23,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2968;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      2968LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
    return 0;
  }
  v3 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  v4 = v3;
  if ( !v3 )
    goto LABEL_72;
  if ( v3[9] >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 296LL) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2974;
    goto LABEL_3;
  }
  v5 = v3[7] + 36;
  if ( v3[7] >= 0xFFFFFFDC || (v6 = v5 + v3[8], v6 < v5) || (v7 = (int *)operator new[](v6, 0x4B677844u, 64LL)) == 0LL )
  {
LABEL_72:
    v9 = 0;
    goto LABEL_73;
  }
  v8 = *((_QWORD *)a1 + 10);
  memset(&v24, 0, sizeof(v24));
  v9 = 1;
  v10 = *(_QWORD *)(v8 + 16);
  v24.StandardAllocationType = v4[6];
  v24.PhysicalAdapterIndex = v4[9];
  switch ( v4[6] )
  {
    case 1:
      v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v4 + 10);
      if ( !v4[11] || !v11->Width || (v15 = v4[12]) == 0 || v15 > 199 || !v4[13] || !v4[14] || v4[15] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3066;
        goto LABEL_70;
      }
      break;
    case 2:
      v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v4 + 10);
      if ( !v4[11] || !v11->Width || v4[13] || (v14 = v4[12]) == 0 || v14 > 199 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3025;
        goto LABEL_70;
      }
      break;
    case 3:
      v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v4 + 10);
      if ( !v4[11] || !v11->Width || v4[12] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3007;
        goto LABEL_70;
      }
      break;
    case 4:
      v11 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v4 + 10);
      if ( !v4[11]
        || !v11->Width
        || (v12 = v4[13]) == 0
        || v12 > 8
        || v4[15]
        || (v13 = v4[12]) == 0 && v12 != 7
        || v13 > 199
        || v4[14] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3046;
        goto LABEL_70;
      }
      break;
    default:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3077;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid standard allocation type",
        3077LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_70:
      *v7 = -1073741811;
      goto LABEL_71;
  }
  v24.pCreateSharedPrimarySurfaceData = v11;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v22,
    (struct DXGADAPTER *)v10,
    1);
  if ( *(_DWORD *)(v10 + 200) == 1 )
  {
    if ( v4[7] || (v16 = 0LL, v4[8]) )
    {
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                       *(ADAPTER_RENDER **)(v10 + 3128),
                                       &v24);
      *v7 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        WdLogSingleEntry1(2LL, StandardAllocationDriverData);
        WdLogGlobalForLineNumber = 3098;
        goto LABEL_50;
      }
      v16 = (unsigned int)v4[7];
      if ( v24.AllocationPrivateDriverDataSize > (unsigned int)v16 || v24.ResourcePrivateDriverDataSize > v4[8] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3105;
        *v7 = -1073741811;
        goto LABEL_44;
      }
      v24.AllocationPrivateDriverDataSize = v4[7];
      if ( (_DWORD)v16 )
        v24.pAllocationPrivateDriverData = v7 + 9;
    }
    else
    {
      v24.AllocationPrivateDriverDataSize = 0;
    }
    v24.ResourcePrivateDriverDataSize = v4[8];
    if ( v24.ResourcePrivateDriverDataSize )
      v24.pResourcePrivateDriverData = (char *)v7 + v16 + 36;
    v20 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*(ADAPTER_RENDER **)(v10 + 3128), &v24);
    *v7 = v20;
    if ( v20 >= 0 )
    {
      v7[1] = v24.AllocationPrivateDriverDataSize;
      v7[2] = v24.ResourcePrivateDriverDataSize;
      switch ( v24.StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
          goto LABEL_67;
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)(v7 + 3) = *(_OWORD *)v24.pCreateSharedPrimarySurfaceData;
          goto LABEL_44;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          pCreateSharedPrimarySurfaceData = v24.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v7 + 3) = *(_QWORD *)v24.pCreateSharedPrimarySurfaceData;
          v7[5] = pCreateSharedPrimarySurfaceData->Format;
          goto LABEL_44;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_67:
          *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v7 + 3) = *v24.pCreateSharedPrimarySurfaceData;
          goto LABEL_44;
      }
      WdLogSingleEntry0(2LL);
      v18 = 3146LL;
      v19 = L"Invalid standard allocation type";
      WdLogGlobalForLineNumber = 3146;
      goto LABEL_51;
    }
    WdLogSingleEntry1(2LL, v20);
    WdLogGlobalForLineNumber = 3125;
LABEL_50:
    v18 = *v7;
    v19 = L"DdiGetStandardAllocationDriverData failed: 0x%I64x";
LABEL_51:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v19, v18, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_44;
  }
  *v7 = -1073741130;
LABEL_44:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
LABEL_71:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v7, v6);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
LABEL_73:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  return v9;
}
