/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00D1DE8
 * Callers:
 *     ?Free@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D1E9C (-Free@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0044300 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00443B0 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Free(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *(_QWORD *)a1;
    GreEnterCriticalRegionAndAcquirePushLockExclusive(*(_QWORD *)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0xE00
       + ((unsigned int)((_DWORD)a2 - (*(_DWORD *)(a1 + 16) ^ *(_DWORD *)(a1 + 8))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    memset(a2, 0, 0xE00uLL);
    *(_DWORD *)(a1 + 32) = v5;
    GreLeaveCriticalRegionAndReleasePushLockExclusive(v2);
  }
}
