/*
 * XREFs of KiAbCleanupLockEntriesState @ 0x14043D07C
 * Callers:
 *     KeCleanupThreadState @ 0x14043CF94 (KeCleanupThreadState.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiAbCleanupLockEntriesState(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned int v5; // esi
  ULONG_PTR v6; // rdi
  __int64 result; // rax
  __int64 *v8; // r10
  __int64 v9; // rax

  BugCheckParameter4 = 0LL;
  v5 = 0;
  v6 = 1LL;
  while ( 1 )
  {
    result = *(unsigned __int8 *)(a1 + 12);
    if ( v5 >= (unsigned int)result )
      return result;
    v8 = (__int64 *)(a1 + 88LL * v5 + 16);
    v9 = *v8;
    if ( *((char *)v8 + 8) >= 0 )
    {
      if ( v9 )
      {
        BugCheckParameter4 = *v8 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL;
        goto LABEL_12;
      }
      if ( *((_DWORD *)v8 + 2) >= 0x100u )
      {
        v6 = 2LL;
        goto LABEL_12;
      }
      if ( a2 != *(_QWORD *)(a1 + 88LL * v5 - 88 * (v8[1] & 0x3F)) )
      {
        v6 = 3LL;
LABEL_12:
        KeBugCheckEx(0x153u, a2, a1 + 88LL * v5 + 16, v6, BugCheckParameter4);
      }
      if ( *((_DWORD *)v8 + 20) )
      {
        v6 = 4LL;
        goto LABEL_12;
      }
    }
    else if ( v9 )
    {
      _disable();
      KiAbEntryFreeAndEnableInterrupts(a1 + 88LL * v5 + 16, a2, 0LL, 1LL, 0LL);
    }
    ++v5;
  }
}
