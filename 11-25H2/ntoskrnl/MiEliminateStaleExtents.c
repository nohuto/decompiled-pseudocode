/*
 * XREFs of MiEliminateStaleExtents @ 0x14066F098
 * Callers:
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 */

void __fastcall MiEliminateStaleExtents(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  ULONG_PTR v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v13 = 17;
    v4 = 0LL;
    do
    {
      v10 = MiLockProtoPoolPageForce(a1, &v13);
      do
      {
        v11 = *(_QWORD *)(a2 + 8 * v4);
        if ( v11 != 0x8000000000000000uLL )
        {
          v12 = MiLockLeafPage((unsigned __int64 *)a1, 0);
          if ( v12 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v11 | 0x4000000000000000LL;
          }
        }
        ++v3;
        a1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (a1 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v10, v13, v8, v9);
    }
    while ( v3 < a3 );
  }
}
