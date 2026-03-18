/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C
 * Callers:
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D5F4 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x140330650 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14034F628 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x14035AC38 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403973B4 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AddProcessAdapterInfo@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140041CB4 (-AddProcessAdapterInfo@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402CEA6C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403ACC00 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  int v4; // edi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  struct _LIST_ENTRY *v10; // rdx
  _QWORD *v11; // rax
  int v12; // eax

  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 72, 0LL);
  *((_QWORD *)a2 + 10) = KeGetCurrentThread();
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL);
  v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7);
  if ( !v8 )
  {
    v9 = operator new(0x98uLL, 0x4B677844u, 256LL);
    v8 = v9;
    if ( !v9 )
    {
      v4 = -1073741801;
      goto LABEL_7;
    }
    *(_QWORD *)(v9 + 8) = 0LL;
    v10 = (struct _LIST_ENTRY *)(v9 + 88);
    *(_DWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_DWORD *)(v9 + 104) = 0;
    *(_WORD *)(v9 + 108) = 0;
    *(_QWORD *)(v9 + 112) = 0LL;
    *(_QWORD *)(v9 + 120) = 0LL;
    *(_DWORD *)(v9 + 128) = 0;
    *(_DWORD *)(v9 + 132) = 1;
    v11 = (_QWORD *)(v9 + 136);
    v11[1] = v11;
    *v11 = v11;
    *(_QWORD *)(v8 + 64) = this;
    *(_QWORD *)(v8 + 80) = a2;
    ADAPTER_RENDER::AddProcessAdapterInfo((struct _KTHREAD **)a2, v10);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7) = v8;
  }
  ++*(_DWORD *)(v8 + 56);
  if ( a3 )
  {
    v12 = DXGPROCESS_RENDER_ADAPTER_INFO::Initialize((DXGPROCESS_RENDER_ADAPTER_INFO *)v8, this, a2);
    v4 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(3LL, v12);
      WdLogGlobalForLineNumber = 2662;
    }
  }
LABEL_7:
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 < 0 )
    DXGPROCESS::CloseAdapter(this, a2);
  return (unsigned int)v4;
}
