/*
 * XREFs of ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x14000F28C
 * Callers:
 *     ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x14000CDB0 (-EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14000F2E4 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, 32LL, 1903447380LL, a4);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
  }
  *a1 = (struct CTokenQueue *)Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
