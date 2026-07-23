/*
 * XREFs of RtlCSparseBitmapBitmaskWrite @ 0x1800BA6D0
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800BA444 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x180011194 (RtlCSparseBitmapBitsClear.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1800BA858 (RtlpCSparseBitmapPageCommit.c)
 */

__int64 __fastcall RtlCSparseBitmapBitmaskWrite(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  char v10; // di
  unsigned __int64 v11; // r8
  __int64 v12; // rbp
  signed __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int64 i; // rax
  _RTL_SRWLOCK *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+28h] [rbp-20h]
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF

  v19 = 0;
  v18 = 0LL;
  v20 = 0LL;
  if ( a4 )
  {
    v7 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int128 *, __int64 *))RtlpCSparseBitmapPageCommit)(
           a1,
           a2 >> 15,
           &v20,
           &v18);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = a2;
      v10 = a2 & 0x3F;
      v11 = v9 >> 6;
      v12 = a4 << v10;
      v13 = *(_QWORD *)(v8 + 8 * v11);
      v14 = v13 & ~(3LL << v10);
      for ( i = v13; ; v14 = i & ~(3LL << v10) )
      {
        i = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v11), v12 | v14, i);
        if ( v13 == i )
          break;
        v13 = i;
      }
      v7 = 0;
      v16 = (_RTL_SRWLOCK *)(*((_QWORD *)&v20 + 1) + 24LL);
      if ( (_DWORD)v20 == 1 )
        RtlReleaseSRWLockExclusive(v16);
      else
        RtlReleaseSRWLockShared(v16);
    }
    return (unsigned int)v7;
  }
  else
  {
    RtlCSparseBitmapBitsClear(a1, a2, 2LL);
    return 0LL;
  }
}
