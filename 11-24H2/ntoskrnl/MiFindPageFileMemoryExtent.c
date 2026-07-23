/*
 * XREFs of MiFindPageFileMemoryExtent @ 0x14068F7BC
 * Callers:
 *     MiTransferMemoryPagefileData @ 0x1404CAFB0 (MiTransferMemoryPagefileData.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiComparePageFileMemoryExtents @ 0x14068F434 (MiComparePageFileMemoryExtents.c)
 */

__int64 __fastcall MiFindPageFileMemoryExtent(__int64 a1, int a2, int a3)
{
  volatile LONG *v3; // rdi
  volatile LONG *v5; // rcx
  KIRQL v7; // bp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rbx
  int v13; // esi
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v3 = (volatile LONG *)(a1 + 200);
  v5 = (volatile LONG *)(a1 + 200);
  if ( a3 )
  {
    v7 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v5);
  }
  else
  {
    v7 = ExAcquireSpinLockShared(v5);
  }
  v10 = a1 + 224;
  v11 = (*(_BYTE *)(a1 + 232) & 1) == 0;
  v12 = *(_QWORD *)(a1 + 224);
  if ( !v11 && v12 )
    v12 ^= v10;
  v13 = *(_BYTE *)(v10 + 8) & 1;
  while ( v12 )
  {
    v14 = MiComparePageFileMemoryExtents(&v17, v12);
    if ( v14 >= 0 )
    {
      if ( v14 <= 0 )
        break;
      v15 = *(_QWORD *)(v12 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v12;
    }
    if ( v13 && v15 )
      v12 ^= v15;
    else
      v12 = v15;
  }
  if ( !v12 )
    NT_ASSERT("Node != ((void *)0)");
  if ( a3 )
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  else
    MiReleaseSpinLockShared(v3, v7, v8, v9);
  return v12;
}
