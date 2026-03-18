/*
 * XREFs of ?GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHINT@@@Z @ 0x140338B94
 * Callers:
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x140337FCC (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

struct DXG_CLIENT_STATISTICS *__fastcall DXGPROCESS_RENDER_ADAPTER_INFO::GetClientStatistics(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        enum _D3DKMT_CLIENTHINT a2)
{
  char *v3; // rdi
  __int64 v5; // r9
  __int64 **v6; // rsi
  __int64 *i; // rbx
  __int64 v8; // rax
  __int64 ***v9; // rax

  v3 = (char *)this + 112;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v6 = (__int64 **)((char *)this + 136);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
LABEL_12:
      *((_QWORD *)v3 + 1) = 0LL;
      goto LABEL_14;
    }
  }
  v8 = operator new(0x20uLL, 0x4B677844u, 256LL, v5);
  i = (__int64 *)v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_DWORD *)(v8 + 16) = a2;
    v9 = (__int64 ***)v6[1];
    if ( *v9 != v6 )
      __fastfail(3u);
    *i = (__int64)v6;
    i[1] = (__int64)v9;
    *v9 = (__int64 **)i;
    v6[1] = i;
  }
  else
  {
    i = 0LL;
  }
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_12;
  *((_QWORD *)v3 + 1) = 0LL;
LABEL_14:
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXG_CLIENT_STATISTICS *)i;
}
