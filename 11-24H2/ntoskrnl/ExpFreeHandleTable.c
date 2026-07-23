/*
 * XREFs of ExpFreeHandleTable @ 0x1409DFCA4
 * Callers:
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 *     ExDestroyHandleTable @ 0x1409DFC80 (ExDestroyHandleTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     ExpFreeLowLevelTable @ 0x1409DFEB8 (ExpFreeLowLevelTable.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A00380 (ExDereferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeHandleTable(_QWORD *P)
{
  ULONG_PTR v2; // rdi
  void *v3; // rbx
  __int64 v4; // rdx
  PVOID *v5; // r14
  unsigned int i; // ebp
  ULONG_PTR v7; // r8
  unsigned int j; // r12d
  PVOID v9; // rbp
  unsigned int v10; // r13d
  PVOID *v11; // r15

  v2 = P[2];
  v3 = (void *)(P[1] & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (P[1] & 3) != 0 )
  {
    v5 = (PVOID *)(P[1] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (P[1] & 3) == 1 )
    {
      for ( i = 0; i < 0x200; ++i )
      {
        if ( !*v5 )
          break;
        ExpFreeLowLevelTable(v2, *v5++);
      }
      v7 = 4096LL;
    }
    else
    {
      for ( j = 0; j < 0x80; ++j )
      {
        v9 = *v5;
        if ( !*v5 )
          break;
        v10 = 0;
        v11 = (PVOID *)*v5;
        do
        {
          if ( !*v11 )
            break;
          ExpFreeLowLevelTable(v2, *v11);
          ++v10;
          ++v11;
        }
        while ( v10 < 0x200 );
        ExpFreeTablePagedPool(v2, v9, 0x1000uLL);
        ++v5;
      }
      v7 = 1024LL;
    }
    ExpFreeTablePagedPool(v2, v3, v7);
  }
  else
  {
    ExpFreeLowLevelTable(P[2], (PVOID)(P[1] & 0xFFFFFFFFFFFFFFFCuLL));
  }
  v4 = P[12];
  if ( v4 )
    ExDereferenceHandleDebugInfo(P, v4);
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( v2 )
    PsReturnProcessPagedPoolQuota(v2, 0x80uLL);
}
