/*
 * XREFs of ?UmfdCallSessionUninitialize@@YAXXZ @ 0x1401021B0
 * Callers:
 *     UmfdSessionUninitialize @ 0x140102050 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x140101FD0 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 */

void __fastcall UmfdCallSessionUninitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  union _SLIST_HEADER ***v4; // rbx

  v3 = 4LL;
  v4 = (union _SLIST_HEADER ***)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104) + 48LL);
  do
  {
    if ( *(v4 - 4) )
      *(v4 - 4) = 0LL;
    if ( *v4 )
    {
      CMultipleConsumerWorkQueue::Destroy(*v4);
      *v4 = 0LL;
    }
    ++v4;
    --v3;
  }
  while ( v3 );
}
