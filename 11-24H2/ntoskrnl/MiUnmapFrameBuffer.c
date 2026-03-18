/*
 * XREFs of MiUnmapFrameBuffer @ 0x1403CE530
 * Callers:
 *     MiDeleteRotateVa @ 0x1403CDA5C (MiDeleteRotateVa.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnmapFrameBuffer(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rbx
  int v6; // edx
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // dx
  __int64 DemandZeroPte; // rax
  __int64 v10; // rdx
  int v11; // r9d
  unsigned __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rcx

  v3 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x42) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 48);
    if ( (v6 & 0x600000) == 0x600000 && (v6 & 4) == 0 )
      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a2 << 25) >> 16, a1);
  }
  v7 = (v3 >> 12) & 0xFFFFFFFFFFLL;
  if ( v7 <= qword_140E2DBE0 )
  {
    v8 = 1;
    if ( ((*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      BugCheckParameter4 = 48 * v7 - 0x220000000000LL;
      if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x10000000000LL) != 0
        || (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      {
        v8 = 2;
      }
      if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter4 + 32) < v8 )
        KeBugCheckEx(0x1Au, 0x6081uLL, a2, v3, BugCheckParameter4);
    }
  }
  if ( a3 == 3 )
  {
    result = 0LL;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v10 = DemandZeroPte;
    if ( a3 == v11 )
    {
      v10 = DemandZeroPte | 0x300;
    }
    else if ( !a3 )
    {
      v10 = DemandZeroPte | 0x100;
    }
    result = (v10 & 0xFFFFFFFFFFFFFF1FuLL | ((v3 & 0x800) != 0 ? 128LL : 32LL)) ^ (v10 & 0xFFFFFFFFFFFFFF1FuLL ^ (v10 & 0xFFFFFFFFFFFFFF1FuLL | ((v3 & 0x800) != 0 ? 128LL : 32LL))) & 0xFFFFFFFFFFFFFC1FuLL;
  }
  *(_QWORD *)a2 = result;
  return result;
}
