/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1800EEEC0
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1800D6AA0 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x18009CD20 (RtlpHpAllocVA.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800EF020 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x1800EF3BC (RtlpHpMetadataCommit.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rsi
  unsigned __int64 Value; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int128 v11; // xmm0
  unsigned __int64 v12; // rdi
  bool v13; // zf
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Ptr; // [rsp+70h] [rbp+8h] BYREF
  __m128i *v18; // [rsp+78h] [rbp+10h] BYREF

  Ptr = 0LL;
  v2 = a1 + 29;
  RtlAcquireReleaseSRWLockExclusive(a1 + 29);
  while ( 1 )
  {
    while ( 1 )
    {
      Value = a1[30].Value;
      v6 = Value + a2;
      if ( Value + a2 < Value )
        return 0LL;
      if ( v6 > a1[31].Value )
        break;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[30], v6, Value) )
        return Value;
    }
    RtlAcquireSRWLockExclusive(v2);
    v8 = a1[30].Value;
    v9 = v8 + a2;
    if ( v8 + a2 < v8 || v9 > a1[32].Value )
      break;
    v10 = a1[31].Value;
    if ( v9 > v10 )
    {
      v11 = *(_OWORD *)&a1->0;
      Ptr = a1[31].Ptr;
      v12 = (v9 - v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v13 = (BYTE6(a1[3].Ptr) & 1) == 0;
      v18 = (__m128i *)v12;
      if ( v13 )
      {
        *(_OWORD *)RegionSize = v11;
        v14 = RtlpHpAllocVA(&Ptr, &v18, 0LL, 0x1000u, 4u, (__m128i *)RegionSize);
        v12 = (unsigned __int64)v18;
      }
      else
      {
        v15 = v11;
        v14 = RtlpHpMetadataCommit((_DWORD)a1, v10, v12, (unsigned int)&v15, 1);
      }
      if ( v14 < 0 )
        break;
      a1[31].Value += v12;
      _InterlockedAdd64((volatile signed __int64 *)&a1[17], v12 >> 12);
    }
    RtlReleaseSRWLockExclusive(v2);
  }
  Value = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return Value;
}
