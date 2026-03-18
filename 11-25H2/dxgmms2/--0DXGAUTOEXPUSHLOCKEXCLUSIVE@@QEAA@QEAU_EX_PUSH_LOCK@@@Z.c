/*
 * XREFs of ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003AD6C
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092750 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093E90 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 *     VidSchInitializeAdapter @ 0x140115D50 (VidSchInitializeAdapter.c)
 * Callees:
 *     <none>
 */

DXGAUTOEXPUSHLOCKEXCLUSIVE *__fastcall DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
        DXGAUTOEXPUSHLOCKEXCLUSIVE *this,
        struct _EX_PUSH_LOCK *const a2)
{
  DXGAUTOEXPUSHLOCKEXCLUSIVE *result; // rax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
