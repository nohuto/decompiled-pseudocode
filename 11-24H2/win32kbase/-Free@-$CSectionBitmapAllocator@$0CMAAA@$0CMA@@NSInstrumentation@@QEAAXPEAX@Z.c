/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x14003E908
 * Callers:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003E6F0 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<180224,704>::Free(__int64 a1, void *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *(struct W32_PUSH_LOCK **)a1;
    GreEnterCriticalRegionAndAcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x2C0
       + 5 * ((unsigned int)((_DWORD)a2 - (*(_DWORD *)(a1 + 16) ^ *(_DWORD *)(a1 + 8))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    memset(a2, 0, 0x2C0uLL);
    *(_DWORD *)(a1 + 32) = v5;
    W32ReleasePushLockExclusive(v2);
  }
}
