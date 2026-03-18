/*
 * XREFs of ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x140079624
 * Callers:
 *     HmgCreate @ 0x1400798EC (HmgCreate.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140079318 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

_BOOL8 __fastcall HmgInitializeLookAsideList(__int64 a1, unsigned int a2, __int64 a3, USHORT a4)
{
  unsigned int v5; // esi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rax
  _BOOL8 result; // rax

  v5 = ((_DWORD)a1 << 24) + 811691079;
  v7 = (unsigned int)a1;
  result = 0;
  if ( (_DWORD)a1 << 24 < 0xCF9E93B9 )
  {
    v8 = *(_QWORD *)(W32GetSessionState(a1) + 88);
    *(_DWORD *)(v8 + 4 * v7 + 2040) = a2;
    UserSessionState = W32GetUserSessionState(v9);
    PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                           (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72288),
                           a2,
                           v5,
                           v5,
                           a4);
    *(_QWORD *)(v8 + 8 * v7 + 1792) = PagedLookasideList;
    if ( PagedLookasideList )
      return 1;
  }
  return result;
}
