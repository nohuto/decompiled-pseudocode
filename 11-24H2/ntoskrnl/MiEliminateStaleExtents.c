/*
 * XREFs of MiEliminateStaleExtents @ 0x14067BA38
 * Callers:
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 */

void __fastcall MiEliminateStaleExtents(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v14 = 17;
    v4 = 0LL;
    do
    {
      v11 = MiLockProtoPoolPageForce(BugCheckParameter1, &v14);
      do
      {
        v12 = *(_QWORD *)(a2 + 8 * v4);
        if ( v12 != 0x8000000000000000uLL )
        {
          v13 = MiLockLeafPage((unsigned __int64 *)BugCheckParameter1, 0);
          if ( v13 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v12 | 0x4000000000000000LL;
          }
        }
        ++v3;
        BugCheckParameter1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (BugCheckParameter1 & 0xFFF) != 0 );
      LOBYTE(v8) = v14;
      MiUnlockProtoPoolPage(v11, v8, v9, v10);
    }
    while ( v3 < a3 );
  }
}
