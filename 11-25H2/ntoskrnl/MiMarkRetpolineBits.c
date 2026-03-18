/*
 * XREFs of MiMarkRetpolineBits @ 0x140A83A24
 * Callers:
 *     HvlPhase1Initialize @ 0x14057F2B0 (HvlPhase1Initialize.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A839D8 (MiMarkKernelImageRetpolineBits.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C44324 (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140C44604 (MiInitializeRetpoline.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     RtlSetBitsEx @ 0x14038E280 (RtlSetBitsEx.c)
 *     MiSplitBitmapPages @ 0x14038E594 (MiSplitBitmapPages.c)
 *     RtlAreBitsClearEx @ 0x140420500 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x1404C73E0 (MiAddressToRetpolineBit.c)
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
  Lock = (struct _KTHREAD *)MmAcquireLoadLock();
  if ( a3 )
  {
    v10 = v7 - v5;
  }
  else
  {
    v10 = v7 - v5;
    if ( !RtlAreBitsClearEx((unsigned __int64 *)&qword_140E2D518, v5, v7 - v5) )
    {
      RtlClearBitsEx((__int64)&qword_140E2D518, v5, v10);
      goto LABEL_8;
    }
  }
  if ( (unsigned int)MiSplitBitmapPages(4LL) )
    RtlSetBitsEx((__int64)&qword_140E2D518, v5, v10);
  else
    v8 = -1073741801;
LABEL_8:
  MmReleaseLoadLock(Lock);
  return v8;
}
