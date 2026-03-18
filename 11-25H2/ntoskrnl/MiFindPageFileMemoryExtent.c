/*
 * XREFs of MiFindPageFileMemoryExtent @ 0x140682DFC
 * Callers:
 *     MiTransferMemoryPagefileData @ 0x1404D2020 (MiTransferMemoryPagefileData.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiComparePageFileMemoryExtents @ 0x140682A74 (MiComparePageFileMemoryExtents.c)
 */

__int64 __fastcall MiFindPageFileMemoryExtent(__int64 a1, int a2, int a3)
{
  volatile LONG *v3; // rdi
  volatile LONG *v5; // rcx
  KIRQL v7; // bp
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rbx
  int v11; // esi
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
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
  v8 = a1 + 224;
  v9 = (*(_BYTE *)(a1 + 232) & 1) == 0;
  v10 = *(_QWORD *)(a1 + 224);
  if ( !v9 && v10 )
    v10 ^= v8;
  v11 = *(_BYTE *)(v8 + 8) & 1;
  while ( v10 )
  {
    v12 = MiComparePageFileMemoryExtents(&v15, v10);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v13 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v13 = *(_QWORD *)v10;
    }
    if ( v11 && v13 )
      v10 ^= v13;
    else
      v10 = v13;
  }
  if ( !v10 )
    NT_ASSERT("Node != ((void *)0)");
  if ( a3 )
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  else
    MiReleaseSpinLockShared(v3, v7);
  return v10;
}
