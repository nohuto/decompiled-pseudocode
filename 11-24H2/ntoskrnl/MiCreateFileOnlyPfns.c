/*
 * XREFs of MiCreateFileOnlyPfns @ 0x1407F06F4
 * Callers:
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiDecrementProtoShareCounts @ 0x14067B8D4 (MiDecrementProtoShareCounts.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067BE48 (MiFillFileOnlyProtoAsBad.c)
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 *     MiRemoveFileOnlyPages @ 0x1407F0C3C (MiRemoveFileOnlyPages.c)
 */

__int64 __fastcall MiCreateFileOnlyPfns(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // esi
  unsigned __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  char v11; // r12
  int v13; // eax
  unsigned __int64 v14; // r12
  __int64 v15; // rcx
  unsigned __int16 *ControlAreaPartition; // rax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+54h] [rbp-44h]
  __int64 *v22; // [rsp+A0h] [rbp+8h]
  __int64 v23; // [rsp+A8h] [rbp+10h]
  char v24; // [rsp+B0h] [rbp+18h]

  v24 = a3;
  v23 = a2;
  v22 = a1;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = -1LL;
  v9 = 0LL;
  v11 = a3;
  while ( v9 <= a5 )
  {
    if ( v9 == a5 )
    {
      if ( !v7 )
        return (unsigned int)v5;
    }
    else
    {
      if ( !v7 )
      {
        v8 = *(_QWORD *)(a4 + 8 * v9);
        v7 = 1LL;
        goto LABEL_28;
      }
      if ( *(_QWORD *)(a4 + 8 * v9 - 8) + 1LL == *(_QWORD *)(a4 + 8 * v9) )
      {
        ++v7;
        goto LABEL_28;
      }
      a1 = v22;
    }
    if ( v8 == 0x8000000000000000uLL )
    {
      if ( v5 >= 0 )
      {
        MiFillFileOnlyProtoAsBad((__int64)a1, (unsigned __int64 *)(a2 + 8 * (v9 - v7)));
        if ( (v11 & 2) != 0 )
          return (unsigned int)-1073740023;
      }
    }
    else if ( (v8 & 0x4000000000000000LL) == 0 )
    {
      if ( v5 < 0 )
      {
        if ( a4 + 8 * v9 <= v6 )
        {
          if ( (v11 & 0x40) != 0 )
            MiDecrementProtoShareCounts(v8, v7, a3, a4);
          MiRemoveFileOnlyPages(v8, v7);
        }
      }
      else
      {
        v21 = 0;
        v13 = 2;
        v19[0] = a1;
        if ( (v11 & 0x40) != 0 )
          v13 = 6;
        v14 = v9 - v7;
        v20 = v13;
        v17 = v7 << 12;
        v19[1] = a2 + 8 * (v9 - v7);
        v15 = *a1;
        v18 = v8 << 12;
        ControlAreaPartition = (unsigned __int16 *)MiGetControlAreaPartition(v15);
        v5 = MiAddPhysicalMemory(ControlAreaPartition, &v18, &v17, 2097154, (__int64)v19);
        if ( v5 < 0 )
        {
          v7 = 0LL;
          v6 = a4 + 8 * v14;
          v9 = -1LL;
          goto LABEL_28;
        }
      }
    }
    if ( v9 == a5 )
      return (unsigned int)v5;
    v7 = 0LL;
    --v9;
LABEL_28:
    v11 = v24;
    ++v9;
    a1 = v22;
    a2 = v23;
  }
  return (unsigned int)v5;
}
