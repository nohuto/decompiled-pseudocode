/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426AE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059048 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // r14
  unsigned __int64 v5; // rcx
  UINT v6; // r15d
  __int64 v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  UINT PrivateDriverDataSize; // r8d
  void *pPrivateDriverData; // rdx
  struct _D3DKMT_QUERYADAPTERINFO v15; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v16[24]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+27h] BYREF
  int v18; // [rsp+90h] [rbp+2Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v16,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4873;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4873LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v4 )
  {
    memset(&v15, 0, sizeof(v15));
    v15.Type = *(_DWORD *)(v4 + 24);
    v5 = *(unsigned int *)(v4 + 28);
    v6 = v5 + 4;
    if ( !(_DWORD)v5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4909;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid OutputBufferSize for DXGKVMB_COMMAND_QUERYADAPTERINFO, size is zero",
        4909LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = 55798249LL;
      v18 = 0;
      RtlLogUnexpectedCodepath(&v17);
      goto LABEL_18;
    }
    if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 32 < v5 || (unsigned int)v5 > 0x20000 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v5);
      v9 = *(unsigned int *)(v4 + 28);
      v10 = L"Invalid OutputBufferSize";
      v11 = 0x40000LL;
      WdLogGlobalForLineNumber = 4887;
      goto LABEL_9;
    }
    v15.PrivateDriverDataSize = *(_DWORD *)(v4 + 28);
    v7 = operator new[](v6, 0x4B677844u, 64LL);
    v8 = (_DWORD *)v7;
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      v9 = 4897LL;
      v10 = L"Failed to allocate pPrivateDriverDate";
      WdLogGlobalForLineNumber = 4897;
      v11 = 262145LL;
LABEL_9:
      DxgkLogInternalTriageEvent(0LL, v11, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_18;
    }
    v15.pPrivateDriverData = (void *)(v7 + 4);
    memmove((void *)(v7 + 4), (const void *)(v4 + 32), *(unsigned int *)(v4 + 28));
    v12 = DxgkQueryAdapterInfoImpl(&v15, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
    if ( *((_DWORD *)a1 + 38) < 0x27u )
    {
      if ( v12 < 0 )
      {
LABEL_15:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
        goto LABEL_18;
      }
      PrivateDriverDataSize = v15.PrivateDriverDataSize;
      pPrivateDriverData = v15.pPrivateDriverData;
    }
    else
    {
      *v8 = v12;
      PrivateDriverDataSize = v6;
      pPrivateDriverData = v8;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), pPrivateDriverData, PrivateDriverDataSize);
    v2 = 1;
    goto LABEL_15;
  }
LABEL_18:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  return v2;
}
