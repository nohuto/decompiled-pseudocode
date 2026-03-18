/*
 * XREFs of MiMakeCombineCandidateClean @ 0x140239E58
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x140239824 (MiCrcStillIntact.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MiMakeCombineCandidateClean(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
  MiWriteValidPteNewProtection(a1);
  result = MiLockPageAndSetDirty(48 * v4 - 0x220000000000LL, 1LL);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x600000;
    if ( (_DWORD)result == 6291456 )
      return MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
  return result;
}
