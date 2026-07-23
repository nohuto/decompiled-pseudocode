/*
 * XREFs of RtlpWaitOnAddressWithTimeout @ 0x180031350
 * Callers:
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800308E0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800308E0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWithTimeout(
        __int64 a1,
        _QWORD *a2,
        LARGE_INTEGER *a3,
        unsigned int a4,
        PVOID Address)
{
  unsigned int v5; // ebp
  volatile signed __int32 *v6; // rdi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  int i; // edx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  void *v16; // rbx
  unsigned __int32 v17; // esi

  v5 = 0;
  v6 = (volatile signed __int32 *)(a2 + 5);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( a2 == (_QWORD *)-40LL || !MEMORY[0x7FFE0297] )
    {
      for ( i = 0; (*v6 & 1) != 0 && i != a4 / MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
    else
    {
      v10 = __rdtsc();
      v11 = v10 + a4;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (*v6 & 1) == 0 )
          break;
        v14 = v10;
        v15 = __rdtsc();
        v10 = v15;
        if ( v15 < v14 || v15 >= v11 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
  }
  if ( !_interlockedbittestandreset(v6, 0) )
    return 0LL;
  v16 = Address;
  if ( !Address )
    v16 = (void *)*a2;
  v17 = NtWaitForAlertByThreadId(v16, a3);
  if ( v17 == 258 )
  {
    if ( _InterlockedExchange(v6, 4) == 2 )
      v17 = NtWaitForAlertByThreadId(v16, 0LL);
    else
      RtlpWaitOnAddressRemoveWaitBlock(a1, (__int64)a2);
  }
  if ( v17 != 257 )
    return v17;
  return v5;
}
