/*
 * XREFs of MiReserveBootDriverPtes @ 0x140C3FB20
 * Callers:
 *     MiInitializeDriverPtes @ 0x140C3F868 (MiInitializeDriverPtes.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveBootDriverPtes(__int64 a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rt1
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  _QWORD *i; // rcx
  const void **v12; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r9
  unsigned int v16; // edx
  __int64 v17; // r10
  __int64 result; // rax
  unsigned __int64 v19; // r13
  _RTL_BITMAP *v20; // rbx

  v4 = a1 << 25 >> 16;
  v5 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
  if ( v4 == v5 || (PVOID)v4 == PsHalImageBase )
    v6 = ((unsigned int)dword_140E3726C >> 12) + ((dword_140E3726C & 0xFFF) != 0);
  else
    v6 = dword_140E2D4F8
       + (((dword_140E3726C + dword_140E37270) & 0xFFF) != 0)
       + ((unsigned int)(dword_140E3726C + dword_140E37270) >> 12);
  v7 = v6 + a2;
  v8 = 0;
  v9 = a1 + 8 * v7;
  v10 = (v9 + 120) & 0xFFFFFFFFFFFFFF80uLL;
  if ( v9 != v10 )
  {
    for ( i = (_QWORD *)(a1 + 8 * v7); (unsigned __int64)i < v10; ++i )
    {
      if ( *i )
      {
        v8 = 1;
        break;
      }
    }
  }
  v12 = (const void **)qword_140E2D620;
  v13 = ((unsigned __int64)(unsigned int)v7 + 15) >> 4;
  v14 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v15 = (v9 + 4088) & 0xFFFFFFFFFFFFF000uLL;
  if ( qword_140E2D620 )
  {
    v16 = *((_DWORD *)qword_140E2D620 + 4);
    v17 = ((a1 - *((_QWORD *)qword_140E2D620 + 1)) >> 3) / 16;
    if ( (int)v13 + (int)v17 <= v16 )
    {
      RtlSetBits((PRTL_BITMAP)qword_140E2D620 + 1, v17, v13);
      if ( v8 )
        *((_DWORD *)v12 + 9) |= 2u;
      return 1LL;
    }
    if ( (unsigned int)v17 < v16 )
      v14 = *((_QWORD *)qword_140E2D620 + 1);
    else
      v12 = 0LL;
  }
  v19 = (unsigned int)((__int64)(v15 - v14) >> 3) >> 4;
  result = MiAllocatePool(0x40uLL, (v19 >> 3) + 56, 1883532621);
  v20 = (_RTL_BITMAP *)result;
  if ( result )
  {
    *(_DWORD *)(result + 16) = v19;
    *(_QWORD *)(result + 24) = result + 56;
    if ( v12 )
    {
      memmove((void *)(result + 56), v12[3], (unsigned __int64)*((unsigned int *)v12 + 4) >> 3);
      qword_140E2D620 = (PVOID)*v12;
      ExFreePoolWithTag(v12, 0);
    }
    RtlSetBits(v20 + 1, (unsigned int)((__int64)(a1 - v14) >> 3) >> 4, v13);
    v20->Buffer = (unsigned int *)v14;
    if ( v8 )
      *(&v20[2].SizeOfBitMap + 1) |= 2u;
    *(_QWORD *)&v20->SizeOfBitMap = qword_140E2D620;
    result = 1LL;
    qword_140E2D620 = v20;
  }
  return result;
}
