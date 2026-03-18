/*
 * XREFs of MiMakeImageReadOnly @ 0x140491960
 * Callers:
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rbp
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v9 = 17;
  v4 = a1 + 128;
  if ( a1 != -128 )
  {
    do
    {
      if ( (*(_DWORD *)(v4 + 32) & 0x3E) != 2 )
      {
        *(_DWORD *)(v4 + 32) = *(_DWORD *)(v4 + 32) & 0xFFFFFFC1 | 2;
        v5 = *(_QWORD *)(v4 + 8);
        v6 = v5 + 8LL * *(unsigned int *)(v4 + 44);
        while ( v5 < v6 )
        {
          if ( (v5 & 0xFFF) == 0 || !v3 )
          {
            if ( v3 )
            {
              LOBYTE(a2) = v9;
              MiUnlockProtoPoolPage(v3, a2, a3);
            }
            v3 = MiLockProtoPoolPageForce(v5, &v9);
          }
          v7 = MiLockLeafPage((unsigned __int64 *)v5, 0);
          v8 = *(_QWORD *)v5;
          a2 = v7;
          if ( v7 )
          {
            if ( (v8 & 1) == 0 )
            {
              *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else if ( (v8 & 0x400) != 0 || v8 )
          {
            *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
          }
          v5 += 8LL;
        }
        if ( v3 )
        {
          LOBYTE(a2) = v9;
          MiUnlockProtoPoolPage(v3, a2, a3);
          v3 = 0LL;
        }
      }
      v4 = *(_QWORD *)(v4 + 16);
    }
    while ( v4 );
  }
}
