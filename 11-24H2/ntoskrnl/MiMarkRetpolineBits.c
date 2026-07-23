/*
 * XREFs of MiMarkRetpolineBits @ 0x140A84A10
 * Callers:
 *     HvlPhase1Initialize @ 0x14057FDE0 (HvlPhase1Initialize.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A849C4 (MiMarkKernelImageRetpolineBits.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5779C (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140C57A7C (MiInitializeRetpoline.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     RtlAreBitsClearEx @ 0x140411AE0 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x1404C163C (MiAddressToRetpolineBit.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MiMarkRetpolineBits(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned int v8; // esi
  struct _KTHREAD *Lock; // r14
  unsigned __int64 v10; // rbx

  v5 = MiAddressToRetpolineBit(a1);
  v7 = MiAddressToRetpolineBit((v4 + 0xFFFF + v6) & 0xFFFFFFFFFFFF0000uLL);
  v8 = 0;
  Lock = MmAcquireLoadLock();
  if ( a3 )
  {
    v10 = v7 - v5;
  }
  else
  {
    v10 = v7 - v5;
    if ( !RtlAreBitsClearEx((unsigned __int64 *)&qword_140E2D898, v5, v7 - v5) )
    {
      RtlClearBitsEx((__int64)&qword_140E2D898, v5, v10);
      goto LABEL_8;
    }
  }
  if ( (unsigned int)MiSplitBitmapPages(4LL) )
    RtlSetBitsEx((__int64)&qword_140E2D898, v5, v10);
  else
    v8 = -1073741801;
LABEL_8:
  MmReleaseLoadLock(Lock);
  return v8;
}
