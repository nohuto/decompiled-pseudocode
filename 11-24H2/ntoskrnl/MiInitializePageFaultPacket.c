/*
 * XREFs of MiInitializePageFaultPacket @ 0x140351870
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiFlushWaitForReadInProgress @ 0x140272338 (MiFlushWaitForReadInProgress.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiPfCompleteInPageSupport @ 0x140352CB4 (MiPfCompleteInPageSupport.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageFaultPacket(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // edx

  result = a6;
  v8 = a1;
  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_OWORD *)(a6 + 32) = 0LL;
  *(_OWORD *)(a6 + 48) = 0LL;
  *(_OWORD *)(a6 + 64) = 0LL;
  *(_OWORD *)(a6 + 80) = 0LL;
  *(_OWORD *)(a6 + 96) = 0LL;
  *(_OWORD *)(a6 + 112) = 0LL;
  *(_OWORD *)(a6 + 128) = 0LL;
  *(_QWORD *)(a6 + 144) = 0LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 24) = v9;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 32) = v10;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 40) = v11;
  *(_QWORD *)(a6 + 48) = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 96) = a5;
  if ( (a1 & 0x40) != 0 )
  {
    v12 = *(_DWORD *)(a6 + 80) | 0x80;
    *(_DWORD *)(a6 + 80) = v12;
    v8 = a1 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v12 = 0;
  }
  *(_QWORD *)(a6 + 8) = v8;
  *(_QWORD *)a6 = a2;
  *(_QWORD *)(a6 + 16) = a4;
  *(_DWORD *)(a6 + 80) = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(a3 << 8)) & 0x100;
  return result;
}
