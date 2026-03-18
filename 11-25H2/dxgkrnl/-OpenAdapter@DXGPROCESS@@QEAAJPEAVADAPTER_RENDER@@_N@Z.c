/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14037DFF0
 * Callers:
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B188 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14031F1A0 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1403427F0 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x140366348 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403A0D64 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AddProcessAdapterInfo@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400418E8 (-AddProcessAdapterInfo@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403354B4 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B8AE0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  int v4; // edi
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  struct _LIST_ENTRY *v11; // rdx
  _QWORD *v12; // rax
  int v13; // eax

  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 72, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)a2 + 10) = KeGetCurrentThread();
  v8 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL);
  v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8);
  if ( !v9 )
  {
    v10 = operator new(0x98uLL, 0x4B677844u, 256LL, v7);
    v9 = v10;
    if ( !v10 )
    {
      v4 = -1073741801;
      goto LABEL_7;
    }
    *(_QWORD *)(v10 + 8) = 0LL;
    v11 = (struct _LIST_ENTRY *)(v10 + 88);
    *(_DWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_QWORD *)(v10 + 80) = 0LL;
    *(_DWORD *)(v10 + 104) = 0;
    *(_WORD *)(v10 + 108) = 0;
    *(_QWORD *)(v10 + 112) = 0LL;
    *(_QWORD *)(v10 + 120) = 0LL;
    *(_DWORD *)(v10 + 128) = 0;
    *(_DWORD *)(v10 + 132) = 1;
    v12 = (_QWORD *)(v10 + 136);
    v12[1] = v12;
    *v12 = v12;
    *(_QWORD *)(v9 + 64) = this;
    *(_QWORD *)(v9 + 80) = a2;
    ADAPTER_RENDER::AddProcessAdapterInfo((struct _KTHREAD **)a2, v11);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8) = v9;
  }
  ++*(_DWORD *)(v9 + 56);
  if ( a3 )
  {
    v13 = DXGPROCESS_RENDER_ADAPTER_INFO::Initialize((DXGPROCESS_RENDER_ADAPTER_INFO *)v9, this, a2);
    v4 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(3LL, v13);
      WdLogGlobalForLineNumber = 2661;
    }
  }
LABEL_7:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 < 0 )
    DXGPROCESS::CloseAdapter(this, a2);
  return (unsigned int)v4;
}
