/*
 * XREFs of RtlpCSparseBitmapWaitOnAddress @ 0x140452274
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1402197E0 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140451E3C (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1402BB8D0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpCSparseBitmapWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  signed __int64 *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v10; // rdx
  char v12[24]; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-14h]

  v4 = 0;
  if ( *(_BYTE *)(a4 + 48) )
  {
    while ( a1 == (_QWORD *)*a2 )
      _mm_pause();
    return 0LL;
  }
  else
  {
    v7 = (signed __int64 *)(a4 + 40);
    memset_0(v12, 0, 0x40uLL);
    v14 = 2;
    _m_prefetchw(v7);
    v13 = *v7;
    v9 = v13;
    v8 = _InterlockedCompareExchange64(v7, (signed __int64)v12, v13);
    if ( v9 != v8 )
    {
      do
      {
        v10 = v8;
        v13 = v8;
        v8 = _InterlockedCompareExchange64(v7, (signed __int64)v12, v8);
      }
      while ( v8 != v10 );
    }
    if ( *a1 == *a2 )
      return (unsigned int)ExTimedWaitForUnblockPushLock((__int64)v7, v12, 0LL);
    else
      ExpUnblockPushLock(v7, v12, 0);
    return v4;
  }
}
