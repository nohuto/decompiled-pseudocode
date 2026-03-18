/*
 * XREFs of MiMarkRetpolineBits @ 0x140A88520
 * Callers:
 *     HvlPhase1Initialize @ 0x140582A60 (HvlPhase1Initialize.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A884D4 (MiMarkKernelImageRetpolineBits.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5560C (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140C558EC (MiInitializeRetpoline.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiSplitBitmapPages @ 0x1403A52F4 (MiSplitBitmapPages.c)
 *     RtlAreBitsClearEx @ 0x14041D1F0 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x1404C7F08 (MiAddressToRetpolineBit.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
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
    if ( !RtlAreBitsClearEx((unsigned __int64 *)&qword_140E2D758, v5, v7 - v5) )
    {
      RtlClearBitsEx((__int64)&qword_140E2D758, v5, v10);
      goto LABEL_8;
    }
  }
  if ( (unsigned int)MiSplitBitmapPages(4LL) )
    RtlSetBitsEx((__int64)&qword_140E2D758, v5, v10);
  else
    v8 = -1073741801;
LABEL_8:
  MmReleaseLoadLock(Lock);
  return v8;
}
