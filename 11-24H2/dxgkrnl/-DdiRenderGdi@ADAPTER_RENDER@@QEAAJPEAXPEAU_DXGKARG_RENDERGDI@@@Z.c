/*
 * XREFs of ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x14029E570
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14042303C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400300D8 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?EvaluateException@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1401AA758 (-EvaluateException@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRenderGdi(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDERGDI *a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER **v7; // r14
  KIRQL CurrentIrql; // r12
  struct DXGTHREAD *DxgThread; // rdi
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  KIRQL v19; // al
  unsigned int v20; // [rsp+58h] [rbp-100h]
  struct DXGTHREAD *v21; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGTHREAD *v22; // [rsp+68h] [rbp-F0h]
  void *v23; // [rsp+70h] [rbp-E8h]
  int v24; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+80h] [rbp-D8h]
  char v26; // [rsp+88h] [rbp-D0h]
  ADAPTER_RENDER *v27; // [rsp+90h] [rbp-C8h]
  void *v28; // [rsp+98h] [rbp-C0h]
  struct _DXGKARG_RENDERGDI *v29; // [rsp+A0h] [rbp-B8h]
  char *v30; // [rsp+B0h] [rbp-A8h]
  _BYTE v31[24]; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE v32[56]; // [rsp+D8h] [rbp-80h] BYREF

  v23 = a2;
  v27 = this;
  v28 = a2;
  v29 = a3;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5066);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 5066);
  Current = DXGPROCESS::GetCurrent(v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v31, Current);
  v7 = (struct DXGADAPTER **)((char *)this + 16);
  v30 = (char *)this + 16;
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  DxgThread = 0LL;
  v22 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v21 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v21) < 0 )
    {
      v22 = 0LL;
    }
    else
    {
      DxgThread = v21;
      if ( !v21 )
      {
        DxgThread = DxgkThreadObjectCreateDxgThread(1);
        v21 = DxgThread;
      }
      v22 = DxgThread;
    }
  }
  v10 = 0;
  if ( DxgThread )
    v10 = *((_DWORD *)DxgThread + 12);
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v32, *v7);
  v20 = (*((__int64 (__fastcall **)(void *, struct _DXGKARG_RENDERGDI *))*v7 + 116))(v23, a3);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v32);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v19 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v19);
    WdLogGlobalForLineNumber = 3289;
  }
  if ( DxgThread )
  {
    v12 = *((int *)DxgThread + 12);
    if ( (_DWORD)v12 != v10 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), v10, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)*v7 + 1201);
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v15[3] = (int)v20;
  v15[4] = v23;
  v15[5] = a3->pDmaBuffer;
  v15[6] = a3->DmaSize;
  v15[7] = a3->pAllocationList;
  WdLogGlobalForLineNumber = 3296;
  if ( v20 != -1073741816
    && v20 != -1073741811
    && v20 != -1073741801
    && v20 != -1073741592
    && v20 != -1071775743
    && v20 != -1071775232
    && v20 )
  {
    WdLogSingleEntry1(2LL, (int)v20);
    WdLogGlobalForLineNumber = 3298;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      (int)v20,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*v7);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v24);
  return v20;
}
