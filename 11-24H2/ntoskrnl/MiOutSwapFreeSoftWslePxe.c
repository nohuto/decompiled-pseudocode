/*
 * XREFs of MiOutSwapFreeSoftWslePxe @ 0x1406921E8
 * Callers:
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 */

__int64 __fastcall MiOutSwapFreeSoftWslePxe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rbx
  __int64 result; // rax

  v4 = (volatile signed __int64 *)&unk_140E388B8;
  if ( (*(_DWORD *)(a1 + 1208) & 0xF) != 1 )
    v4 = (volatile signed __int64 *)(a1 + 1272);
  result = MiLockAndDecrementShareCount(48 * a2 - 0x220000000000LL, 3LL, a3, a4);
  _InterlockedDecrement64(v4);
  return result;
}
