/*
 * XREFs of ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093DB4
 * Callers:
 *     RemoveDmaBufferFromPool @ 0x1400AF894 (RemoveDmaBufferFromPool.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4C3C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreePagingBufferResources(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rax
  bool v5; // r8
  _QWORD v6[13]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, 0x58uLL);
  v4 = *(_QWORD *)a2;
  LODWORD(v6[0]) = 105;
  v6[2] = a2;
  HIDWORD(v6[0]) = *(_DWORD *)(*(_QWORD *)v4 + 24LL) & 0x3F;
  VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v6, v5);
}
