/*
 * XREFs of HvAllocateOffsetArraysForHiveSnapshot @ 0x1407E3C04
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvAllocateOffsetArraysForHiveSnapshot(__int64 a1, unsigned int *a2, PVOID **a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // r14d
  PVOID *Pool2; // rdi
  unsigned int v8; // ebx
  int v9; // r15d
  unsigned int v10; // r12d
  __int64 i; // rbx
  unsigned int v12; // esi
  __int64 v13; // rax
  PVOID *v14; // rsi
  __int64 v15; // rbp

  v4 = *(_DWORD *)(a1 + 280) + 4096;
  v6 = (v4 >> 20) + 1;
  if ( (v4 & 0xFFFFF) == 0 )
    v6 = v4 >> 20;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL, 24 * v6, 0x20204D43u);
  if ( Pool2 )
  {
    v9 = 0;
    v10 = v4;
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      v12 = 0x100000;
      if ( v10 < 0x100000 )
        v12 = v10;
      v13 = ExAllocatePool2(0x100uLL, v12, 0x20204D43u);
      Pool2[3 * i + 1] = (PVOID)v13;
      if ( !v13 )
      {
        v8 = -1073741801;
        if ( v6 )
        {
          v14 = Pool2 + 1;
          v15 = v6;
          do
          {
            if ( *v14 )
            {
              ExFreePoolWithTag(*v14, 0);
              *v14 = 0LL;
            }
            v14 += 3;
            --v15;
          }
          while ( v15 );
        }
        ExFreePoolWithTag(Pool2, 0);
        return v8;
      }
      LODWORD(Pool2[3 * i]) = v9;
      v10 -= v12;
      v9 += v12;
      LODWORD(Pool2[3 * i + 2]) = v12;
    }
    if ( a4 )
      *a4 = v4;
    v8 = 0;
    *a2 = v6;
    *a3 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
