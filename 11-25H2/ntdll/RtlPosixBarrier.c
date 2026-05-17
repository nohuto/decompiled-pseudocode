/*
 * XREFs of RtlPosixBarrier @ 0x18013F658
 * Callers:
 *     RtlBarrier @ 0x18013F5E0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x18013F5F0 (RtlBarrierForDelete.c)
 * Callees:
 *     RtlWakeAddressAll @ 0x1800044C0 (RtlWakeAddressAll.c)
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 */

char __fastcall RtlPosixBarrier(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  int v4; // edi
  int v5; // esi
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  char v9; // bp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rtt
  _DWORD *v12; // rdi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 16);
  v5 = a2 & 0x10000;
  if ( (a2 & 0x10000) != 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(v2 + 8));
  v6 = *(_QWORD *)v2;
  do
  {
    v7 = v6 + 1;
    v8 = HIDWORD(v6);
    v9 = 0;
    LODWORD(v13) = HIDWORD(v6);
    if ( (_DWORD)v6 + 1 == v4 )
    {
      v7 = 0;
      v9 = 1;
      LODWORD(v8) = HIDWORD(v6) + 1;
      LODWORD(v13) = HIDWORD(v6) + 1;
    }
    v10 = v7 | ((unsigned __int64)(unsigned int)v8 << 32);
    v11 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v2, v10, v6);
  }
  while ( v11 != v6 );
  v12 = (_DWORD *)(v2 + 4);
  if ( v9 )
  {
    RtlWakeAddressAll(v2 + 4, v10);
  }
  else
  {
    while ( (_DWORD)v13 == *v12 )
      RtlpWaitOnAddress(v2 + 4, &v13, 4LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
  }
  if ( v5 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v2 + 8));
  return v9;
}
