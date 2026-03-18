/*
 * XREFs of VidMmTerminateWorkerThread @ 0x140099010
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     VidMmRequestWorkerThreadStatus @ 0x1400FEEF4 (VidMmRequestWorkerThreadStatus.c)
 */

void __fastcall VidMmTerminateWorkerThread(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  ObfReferenceObject(*(PVOID *)(a1 + 8));
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 2;
  VidMmRequestWorkerThreadStatus(a1, v3, v2);
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ObfDereferenceObject(*(PVOID *)(a1 + 8));
  operator delete(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0LL;
}
