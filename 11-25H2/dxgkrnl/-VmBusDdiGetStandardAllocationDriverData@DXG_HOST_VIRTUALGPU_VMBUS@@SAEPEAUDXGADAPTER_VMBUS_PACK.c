/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021B600
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140058A7C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140360EC0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  _DWORD *v3; // rax
  __int64 v4; // r9
  _DWORD *v5; // rdi
  unsigned int v6; // ecx
  unsigned int v7; // r12d
  int *v8; // rbx
  __int64 v9; // rcx
  char v10; // r15
  __int64 v11; // r14
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v12; // rax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v19; // rax
  const wchar_t *v20; // r9
  int v21; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  _BYTE v23[24]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v24[24]; // [rsp+70h] [rbp-11h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v25; // [rsp+88h] [rbp+7h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2969;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      2969LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    return 0;
  }
  v3 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  v5 = v3;
  if ( !v3 )
    goto LABEL_72;
  if ( v3[9] >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 296LL) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2975;
    goto LABEL_3;
  }
  v6 = v3[7] + 36;
  if ( v3[7] >= 0xFFFFFFDC
    || (v7 = v6 + v3[8], v7 < v6)
    || (v8 = (int *)operator new[](v7, 0x4B677844u, 64LL, v4)) == 0LL )
  {
LABEL_72:
    v10 = 0;
    goto LABEL_73;
  }
  v9 = *((_QWORD *)a1 + 10);
  memset(&v25, 0, sizeof(v25));
  v10 = 1;
  v11 = *(_QWORD *)(v9 + 16);
  v25.StandardAllocationType = v5[6];
  v25.PhysicalAdapterIndex = v5[9];
  switch ( v5[6] )
  {
    case 1:
      v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 10);
      if ( !v5[11] || !v12->Width || (v16 = v5[12]) == 0 || v16 > 199 || !v5[13] || !v5[14] || v5[15] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3067;
        goto LABEL_70;
      }
      break;
    case 2:
      v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 10);
      if ( !v5[11] || !v12->Width || v5[13] || (v15 = v5[12]) == 0 || v15 > 199 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3026;
        goto LABEL_70;
      }
      break;
    case 3:
      v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 10);
      if ( !v5[11] || !v12->Width || v5[12] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3008;
        goto LABEL_70;
      }
      break;
    case 4:
      v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 10);
      if ( !v5[11]
        || !v12->Width
        || (v13 = v5[13]) == 0
        || v13 > 8
        || v5[15]
        || (v14 = v5[12]) == 0 && v13 != 7
        || v14 > 199
        || v5[14] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3047;
        goto LABEL_70;
      }
      break;
    default:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3078;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid standard allocation type",
        3078LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_70:
      *v8 = -1073741811;
      goto LABEL_71;
  }
  v25.pCreateSharedPrimarySurfaceData = v12;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v23,
    (struct DXGADAPTER *)v11,
    1);
  if ( *(_DWORD *)(v11 + 200) == 1 )
  {
    if ( v5[7] || (v17 = 0LL, v5[8]) )
    {
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                       *(ADAPTER_RENDER **)(v11 + 3128),
                                       &v25);
      *v8 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        WdLogSingleEntry1(2LL, StandardAllocationDriverData);
        WdLogGlobalForLineNumber = 3099;
        goto LABEL_50;
      }
      v17 = (unsigned int)v5[7];
      if ( v25.AllocationPrivateDriverDataSize > (unsigned int)v17 || v25.ResourcePrivateDriverDataSize > v5[8] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3106;
        *v8 = -1073741811;
        goto LABEL_44;
      }
      v25.AllocationPrivateDriverDataSize = v5[7];
      if ( (_DWORD)v17 )
        v25.pAllocationPrivateDriverData = v8 + 9;
    }
    else
    {
      v25.AllocationPrivateDriverDataSize = 0;
    }
    v25.ResourcePrivateDriverDataSize = v5[8];
    if ( v25.ResourcePrivateDriverDataSize )
      v25.pResourcePrivateDriverData = (char *)v8 + v17 + 36;
    v21 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*(ADAPTER_RENDER **)(v11 + 3128), &v25);
    *v8 = v21;
    if ( v21 >= 0 )
    {
      v8[1] = v25.AllocationPrivateDriverDataSize;
      v8[2] = v25.ResourcePrivateDriverDataSize;
      switch ( v25.StandardAllocationType )
      {
        case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
          goto LABEL_67;
        case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
          *(_OWORD *)(v8 + 3) = *(_OWORD *)v25.pCreateSharedPrimarySurfaceData;
          goto LABEL_44;
        case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
          pCreateSharedPrimarySurfaceData = v25.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v8 + 3) = *(_QWORD *)v25.pCreateSharedPrimarySurfaceData;
          v8[5] = pCreateSharedPrimarySurfaceData->Format;
          goto LABEL_44;
        case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_67:
          *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v8 + 3) = *v25.pCreateSharedPrimarySurfaceData;
          goto LABEL_44;
      }
      WdLogSingleEntry0(2LL);
      v19 = 3147LL;
      v20 = L"Invalid standard allocation type";
      WdLogGlobalForLineNumber = 3147;
      goto LABEL_51;
    }
    WdLogSingleEntry1(2LL, v21);
    WdLogGlobalForLineNumber = 3126;
LABEL_50:
    v19 = *v8;
    v20 = L"DdiGetStandardAllocationDriverData failed: 0x%I64x";
LABEL_51:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v20, v19, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_44;
  }
  *v8 = -1073741130;
LABEL_44:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
LABEL_71:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v8, v7);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
LABEL_73:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  return v10;
}
