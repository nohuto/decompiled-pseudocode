/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1801AADB0
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(FastRegion::CRegion **this, FastRegion::CRegion **a2)
{
  int *v3; // rdi
  int v4; // r8d
  _DWORD *v5; // rbx
  int *v6; // r15
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // r10d
  __int64 v11; // r11
  _DWORD *v12; // rax
  _DWORD *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r11
  HANDLE ProcessHeap; // rax

  if ( this == a2 )
    return 0LL;
  v3 = (int *)*a2;
  v4 = *(_DWORD *)*a2;
  if ( !v4 )
  {
    *(_DWORD *)*this = 0;
    return 0LL;
  }
  v5 = *this;
  v6 = (int *)(this + 1);
  v7 = 60;
  v8 = v3[2 * v4 + 2] + 8 * v4 - v3[4] - 12 + 8 * (v4 - 1) + 24;
  if ( this + 1 != (FastRegion::CRegion **)*this )
    v7 = *v6;
  if ( v7 >= v8 )
    goto LABEL_6;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, v8);
  if ( v5 )
  {
    FastRegion::CRegion::FreeMemory(this);
    *this = (FastRegion::CRegion *)v5;
    *v6 = v8;
LABEL_6:
    v9 = *v3;
    v10 = 0;
    *v5 = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    v11 = (__int64)v3 + v3[4] + 12;
    v12 = &v5[2 * v9 + 3];
    if ( v9 > 0 )
    {
      v13 = v5 + 3;
      do
      {
        *v13 = *(_DWORD *)((char *)v13 + (char *)v3 - (char *)v5);
        v13 += 2;
        v14 = v10++;
        v5[2 * v14 + 4] = (_DWORD)v3
                        + 8 * v14
                        + 4 * (((__int64)v12 - v11) >> 2)
                        + v3[2 * v14 + 4]
                        - ((_DWORD)v5
                         + 8 * v14);
      }
      while ( v10 < *v5 );
    }
    v15 = (__int64)&v3[2 * *v3 + 1];
    v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v3[4] - ((int)v3 + 12)) >> 2;
    v17 = (int)v16;
    if ( (int)v16 > 0 )
    {
      v18 = v11 - (_QWORD)v12;
      do
      {
        *v12 = *(_DWORD *)((char *)v12 + v18);
        ++v12;
        --v17;
      }
      while ( v17 );
    }
    return 0LL;
  }
  return 2147942414LL;
}
