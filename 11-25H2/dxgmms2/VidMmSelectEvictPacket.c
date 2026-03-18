/*
 * XREFs of VidMmSelectEvictPacket @ 0x1400DCAD4
 * Callers:
 *     VidMmFlushEvictQueue @ 0x1400DC9C0 (VidMmFlushEvictQueue.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

_QWORD *__fastcall VidMmSelectEvictPacket(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v2 = a1 + 184;
  v9 = a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  v4 = *(_DWORD *)(a2 + 104) == 1;
  v10 = 1;
  if ( v4 )
  {
    v6 = (_QWORD *)(a2 + 32);
    v7 = *(_QWORD **)(a2 + 32);
    if ( v7[1] != a2 + 32 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    *v7 = 0LL;
    v7[1] = 0LL;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v9);
    return v7;
  }
  else
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v9);
    return 0LL;
  }
}
