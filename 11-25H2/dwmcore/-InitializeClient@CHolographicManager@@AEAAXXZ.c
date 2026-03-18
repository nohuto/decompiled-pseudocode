/*
 * XREFs of ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1802D89B4
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802D7A9C (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1802DB630 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::InitializeClient(RTL_SRWLOCK *this)
{
  CHolographicInteropTaskQueue **v2; // r14
  unsigned int i; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 *j; // rbx
  __int64 v8; // rsi
  unsigned int v9; // esi
  _QWORD *Ptr; // rsi
  _QWORD *v11; // rbx

  AcquireSRWLockShared(this + 13);
  v2 = (CHolographicInteropTaskQueue **)&this[6];
  for ( i = 0; i < LODWORD(this[17].Ptr); ++i )
  {
    v4 = *((_QWORD *)this[14].Ptr + i);
    CHolographicInteropTaskQueue::PostMessageW(
      *v2,
      6u,
      (struct IUnknown *)((v4 + 80) & -(__int64)(v4 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = 0;
  if ( LODWORD(this[28].Ptr) )
  {
    do
    {
      v6 = *((_QWORD *)this[25].Ptr + v5);
      CHolographicInteropTaskQueue::PostMessageW(
        *v2,
        0x18u,
        (struct IUnknown *)((v6 + 72) & -(__int64)(v6 != 0)),
        0LL,
        0LL,
        0LL,
        0LL);
      ++v5;
    }
    while ( v5 < LODWORD(this[28].Ptr) );
    v2 = (CHolographicInteropTaskQueue **)&this[6];
  }
  for ( j = (__int64 *)this[18].Ptr; j != this[19].Ptr; ++j )
  {
    v8 = *j;
    v2 = (CHolographicInteropTaskQueue **)&this[6];
    CHolographicInteropTaskQueue::PostMessageW(
      (CHolographicInteropTaskQueue *)this[6].Ptr,
      2u,
      (struct IUnknown *)((v8 + 80) & -(__int64)(v8 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
    if ( *(_BYTE *)(v8 + 2153) )
      CHolographicInteropTaskQueue::PostMessageW(
        *v2,
        1u,
        (struct IUnknown *)((v8 + 80) & -(__int64)(v8 != 0)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  v9 = 0;
  if ( LODWORD(this[24].Ptr) )
  {
    do
    {
      CHolographicInteropTaskQueue::PostMessageW(
        *v2,
        0xCu,
        *((struct IUnknown **)this[21].Ptr + v9),
        0LL,
        0LL,
        0LL,
        0LL);
      CHolographicExclusiveView::PublishPresentData(*((CHolographicExclusiveView **)this[21].Ptr + v9++));
    }
    while ( v9 < LODWORD(this[24].Ptr) );
    v2 = (CHolographicInteropTaskQueue **)&this[6];
  }
  Ptr = this[11].Ptr;
  v11 = this[10].Ptr;
  if ( v11 != Ptr )
  {
    do
    {
      CHolographicInteropTaskQueue::PostMessageW(
        *v2,
        0x1Du,
        (struct IUnknown *)((*v11 + 72LL) & -(__int64)(*v11 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
      ++v11;
    }
    while ( v11 != Ptr );
    v2 = (CHolographicInteropTaskQueue **)&this[6];
  }
  CHolographicInteropTaskQueue::PostMessageW(*v2, 0x1Bu, 0LL, (void *)BYTE1(this[30].Ptr), 0LL, 0LL, 0LL);
  ReleaseSRWLockShared(this + 13);
}
