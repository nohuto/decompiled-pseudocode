/*
 * XREFs of ?RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z @ 0x140045C68
 * Callers:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x14003C0B4 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  struct _MDL *v9; // rbx
  unsigned __int64 LogicalAddress; // rax
  char *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v2 = (char *)this + 3760;
  v11 = (char *)this + 3760;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v5);
  v6 = (_QWORD *)((char *)a2 + 8);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v7 = *((_QWORD *)a2 + 1);
  v12 = 1;
  if ( *(struct VIDMM_SCH_LOG **)(v7 + 8) != (struct VIDMM_SCH_LOG *)((char *)a2 + 8)
    || (v8 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v8 != v6) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( *((_BYTE *)this + 40109) )
  {
    v9 = (struct _MDL *)*((_QWORD *)a2 + 9);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL);
    SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v9, 0);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v11);
  *v6 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
}
