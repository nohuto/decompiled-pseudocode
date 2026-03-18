/*
 * XREFs of ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x140038D6C
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 *     VidSchInitializeAdapter @ 0x140115F70 (VidSchInitializeAdapter.c)
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
