/*
 * XREFs of ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003DF8C
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140010BB0 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x14005D708 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402C7A94 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x140033AB4 (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003E560 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 */

void __fastcall DXGADAPTER::ScheduleAdapterActivityCheck(DXGADAPTER *this)
{
  struct _KTHREAD *v1; // rdx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v8; // [rsp+28h] [rbp-30h]
  char v9; // [rsp+48h] [rbp-10h]

  v1 = (struct _KTHREAD *)*((_QWORD *)this + 462);
  v8 = (char *)this + 3688;
  v9 = 0;
  if ( v1 != KeGetCurrentThread() )
    DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v7);
  *(_QWORD *)(*((_QWORD *)this + 448) + 392LL) = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(*((_QWORD *)this + 448) + 392LL) += *((_QWORD *)this + 441);
  v3 = (_QWORD *)(*((_QWORD *)this + 448) + 400LL);
  if ( !*v3 )
  {
    v4 = (_QWORD *)((char *)this + 3672);
    v5 = *((_QWORD *)this + 459);
    if ( *(DXGADAPTER **)(v5 + 8) != (DXGADAPTER *)((char *)this + 3672) )
      __fastfail(3u);
    *v3 = v5;
    v3[1] = v4;
    *(_QWORD *)(v5 + 8) = v3;
    *v4 = v3;
  }
  if ( !*((_BYTE *)this + 3660) )
  {
    v6 = *((_QWORD *)this + 391);
    *((_BYTE *)this + 3660) = 1;
    VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
      *(VIDMM_EXPORT **)(v6 + 736),
      *(struct VIDMM_MONITORED_FENCE_STORAGE **)(v6 + 744),
      1);
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v7);
}
