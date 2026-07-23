/*
 * XREFs of MiUnmapFrameBuffer @ 0x14038E570
 * Callers:
 *     MiDeleteRotateVa @ 0x14038DD68 (MiDeleteRotateVa.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnmapFrameBuffer(__int64 a1, __int64 a2, int a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 DemandZeroPte; // rax
  __int64 v9; // rdx
  int v10; // r9d
  unsigned __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rcx

  v3 = *(_QWORD *)a2;
  v5 = a2;
  v6 = a1;
  if ( (*(_QWORD *)a2 & 0x42) != 0 )
  {
    a2 = *(unsigned int *)(a1 + 48);
    if ( (a2 & 0x600000) == 0x600000 && (a2 & 4) == 0 )
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(v5 << 25) >> 16, a1);
  }
  v7 = (v3 >> 12) & 0xFFFFFFFFFFLL;
  if ( v7 <= qword_140E2DD20 )
  {
    a2 = 1LL;
    if ( ((*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      BugCheckParameter4 = 48 * v7 - 0x220000000000LL;
      if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x10000000000LL) != 0
        || (v6 = 0x3FFFFFFFFELL, (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL) )
      {
        a2 = 2LL;
      }
      if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter4 + 32) < (unsigned __int16)a2 )
        KeBugCheckEx(0x1Au, 0x6081uLL, v5, v3, BugCheckParameter4);
    }
  }
  if ( a3 == 3 )
  {
    result = 0LL;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL, a2, v6, 2LL);
    v9 = DemandZeroPte;
    if ( a3 == v10 )
    {
      v9 = DemandZeroPte | 0x300;
    }
    else if ( !a3 )
    {
      v9 = DemandZeroPte | 0x100;
    }
    result = (v9 & 0xFFFFFFFFFFFFFF1FuLL | ((v3 & 0x800) != 0 ? 128LL : 32LL)) ^ (v9 & 0xFFFFFFFFFFFFFF1FuLL ^ (v9 & 0xFFFFFFFFFFFFFF1FuLL | ((v3 & 0x800) != 0 ? 128LL : 32LL))) & 0xFFFFFFFFFFFFFC1FuLL;
  }
  *(_QWORD *)v5 = result;
  return result;
}
