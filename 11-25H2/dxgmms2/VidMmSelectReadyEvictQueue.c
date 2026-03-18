/*
 * XREFs of VidMmSelectReadyEvictQueue @ 0x1400DC7CC
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x1400DEEE0 (VidMmFlushDeferredEvictions.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 **__fastcall VidMmSelectReadyEvictQueue(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 **i; // rbx
  _QWORD *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v1 = a1 + 23;
  v5 = a1 + 23;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v1[1] = KeGetCurrentThread();
  i = (__int64 **)a1[4];
  v6 = 1;
  while ( i != a1 + 4 )
  {
    if ( ((_DWORD)i[14] & 0x18) == 0x10 )
      goto LABEL_14;
    i = (__int64 **)*i;
  }
  for ( i = (__int64 **)a1[6]; i != a1 + 6; i = (__int64 **)*i )
  {
    if ( ((_DWORD)i[14] & 0x18) == 0x10 )
      goto LABEL_14;
  }
  for ( i = (__int64 **)a1[8]; i != a1 + 8; i = (__int64 **)*i )
  {
    if ( ((_DWORD)i[14] & 0x18) == 0x10 )
      goto LABEL_14;
  }
  i = 0LL;
LABEL_14:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v5);
  return i;
}
