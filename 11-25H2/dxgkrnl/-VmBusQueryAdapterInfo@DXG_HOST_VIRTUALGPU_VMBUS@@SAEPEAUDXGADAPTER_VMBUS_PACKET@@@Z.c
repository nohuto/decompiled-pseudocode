/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059588 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // r9
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  UINT v7; // r15d
  __int64 v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rax
  const wchar_t *v11; // r9
  int v12; // edx
  int v13; // eax
  UINT PrivateDriverDataSize; // r8d
  void *pPrivateDriverData; // rdx
  _D3DKMT_QUERYADAPTERINFO v16; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v17[24]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+88h] [rbp+27h] BYREF
  int v19; // [rsp+90h] [rbp+2Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4867;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4867LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v5 )
  {
    memset(&v16, 0, sizeof(v16));
    v16.Type = *(_DWORD *)(v5 + 24);
    v6 = *(unsigned int *)(v5 + 28);
    v7 = v6 + 4;
    if ( !(_DWORD)v6 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4903;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid OutputBufferSize for DXGKVMB_COMMAND_QUERYADAPTERINFO, size is zero",
        4903LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v18 = 55798249LL;
      v19 = 0;
      RtlLogUnexpectedCodepath(&v18);
      goto LABEL_18;
    }
    if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 32 < v6 || (unsigned int)v6 > 0x20000 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v6);
      v10 = *(unsigned int *)(v5 + 28);
      v11 = L"Invalid OutputBufferSize";
      v12 = 0x40000;
      WdLogGlobalForLineNumber = 4881;
      goto LABEL_9;
    }
    v16.PrivateDriverDataSize = *(_DWORD *)(v5 + 28);
    v8 = operator new[](v7, 0x4B677844u, 64LL, v4);
    v9 = (_DWORD *)v8;
    if ( !v8 )
    {
      WdLogSingleEntry0(6LL);
      v10 = 4891LL;
      v11 = L"Failed to allocate pPrivateDriverDate";
      WdLogGlobalForLineNumber = 4891;
      v12 = 262145;
LABEL_9:
      DxgkLogInternalTriageEvent(0LL, v12, 0xFFFFFFFFLL, v11, v10, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_18;
    }
    v16.pPrivateDriverData = (void *)(v8 + 4);
    memmove((void *)(v8 + 4), (const void *)(v5 + 32), *(unsigned int *)(v5 + 28));
    v13 = DxgkQueryAdapterInfoImpl(&v16, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
    if ( *((_DWORD *)a1 + 38) < 0x27u )
    {
      if ( v13 < 0 )
      {
LABEL_15:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
        goto LABEL_18;
      }
      PrivateDriverDataSize = v16.PrivateDriverDataSize;
      pPrivateDriverData = v16.pPrivateDriverData;
    }
    else
    {
      *v9 = v13;
      PrivateDriverDataSize = v7;
      pPrivateDriverData = v9;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), pPrivateDriverData, PrivateDriverDataSize);
    v2 = 1;
    goto LABEL_15;
  }
LABEL_18:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  return v2;
}
