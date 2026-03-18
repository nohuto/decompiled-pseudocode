/*
 * XREFs of ?RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z @ 0x140043EC8
 * Callers:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x140039B14 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  char *v2; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct _MDL *v8; // rbx
  unsigned __int64 LogicalAddress; // rax
  char *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v2 = (char *)this + 3760;
  v10 = (char *)this + 3760;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  v5 = (_QWORD *)((char *)a2 + 8);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = *((_QWORD *)a2 + 1);
  v11 = 1;
  if ( *(struct VIDMM_SCH_LOG **)(v6 + 8) != (struct VIDMM_SCH_LOG *)((char *)a2 + 8)
    || (v7 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v7 != v5) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( *((_BYTE *)this + 40109) )
  {
    v8 = (struct _MDL *)*((_QWORD *)a2 + 9);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL);
    SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v8, 0);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v10);
  *v5 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
}
