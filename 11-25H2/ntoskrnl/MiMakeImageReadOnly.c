/*
 * XREFs of MiMakeImageReadOnly @ 0x14049C768
 * Callers:
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v10 = 17;
  v5 = a1 + 128;
  if ( a1 != -128 )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 32) & 0x3E) != 2 )
      {
        *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFFFFFC1 | 2;
        v6 = *(_QWORD *)(v5 + 8);
        v7 = v6 + 8LL * *(unsigned int *)(v5 + 44);
        while ( v6 < v7 )
        {
          if ( (v6 & 0xFFF) == 0 || !v4 )
          {
            if ( v4 )
              MiUnlockProtoPoolPage(v4, v10, a3, a4);
            v4 = MiLockProtoPoolPageForce(v6, &v10);
          }
          v8 = MiLockLeafPage((unsigned __int64 *)v6, 0);
          v9 = *(_QWORD *)v6;
          if ( v8 )
          {
            if ( (v9 & 1) == 0 )
            {
              *(_QWORD *)v6 = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else if ( (v9 & 0x400) != 0 || v9 )
          {
            *(_QWORD *)v6 = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
          }
          v6 += 8LL;
        }
        if ( v4 )
        {
          MiUnlockProtoPoolPage(v4, v10, a3, a4);
          v4 = 0LL;
        }
      }
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
  }
}
