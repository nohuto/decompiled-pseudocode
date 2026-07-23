/*
 * XREFs of MiReserveBootDriverPtes @ 0x140C52EE0
 * Callers:
 *     MiInitializeDriverPtes @ 0x140C52C28 (MiInitializeDriverPtes.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveBootDriverPtes(__int64 a1, int a2)
{
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // rax
  int v7; // r12d
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  _QWORD *i; // rcx
  const void **v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r10
  __int64 result; // rax
  unsigned __int64 v18; // r13
  _RTL_BITMAP *v19; // rbx

  v4 = a1 << 25 >> 16;
  if ( (PVOID)v4 == PsNtosImageBase || (PVOID)v4 == PsHalImageBase )
    v5 = ((unsigned int)dword_140E375EC >> 12) + ((dword_140E375EC & 0xFFF) != 0);
  else
    v5 = dword_140E2D878
       + (((dword_140E375EC + dword_140E375F0) & 0xFFF) != 0)
       + ((unsigned int)(dword_140E375EC + dword_140E375F0) >> 12);
  v6 = v5 + a2;
  v7 = 0;
  v8 = a1 + 8 * v6;
  v9 = (v8 + 120) & 0xFFFFFFFFFFFFFF80uLL;
  if ( v8 != v9 )
  {
    for ( i = (_QWORD *)(a1 + 8 * v6); (unsigned __int64)i < v9; ++i )
    {
      if ( *i )
      {
        v7 = 1;
        break;
      }
    }
  }
  v11 = (const void **)qword_140E2D9A0;
  v12 = ((unsigned __int64)(unsigned int)v6 + 15) >> 4;
  v13 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v8 + 4088) & 0xFFFFFFFFFFFFF000uLL;
  if ( qword_140E2D9A0 )
  {
    v15 = *((_DWORD *)qword_140E2D9A0 + 4);
    v16 = ((a1 - *((_QWORD *)qword_140E2D9A0 + 1)) >> 3) / 16;
    if ( (int)v12 + (int)v16 <= v15 )
    {
      RtlSetBits((PRTL_BITMAP)qword_140E2D9A0 + 1, v16, v12);
      if ( v7 )
        *((_DWORD *)v11 + 9) |= 2u;
      return 1LL;
    }
    if ( (unsigned int)v16 < v15 )
      v13 = *((_QWORD *)qword_140E2D9A0 + 1);
    else
      v11 = 0LL;
  }
  v18 = (unsigned int)((__int64)(v14 - v13) >> 3) >> 4;
  result = MiAllocatePool(0x40uLL, (v18 >> 3) + 56, 1883532621);
  v19 = (_RTL_BITMAP *)result;
  if ( result )
  {
    *(_DWORD *)(result + 16) = v18;
    *(_QWORD *)(result + 24) = result + 56;
    if ( v11 )
    {
      memmove((void *)(result + 56), v11[3], (unsigned __int64)*((unsigned int *)v11 + 4) >> 3);
      qword_140E2D9A0 = (PVOID)*v11;
      ExFreePoolWithTag(v11, 0);
    }
    RtlSetBits(v19 + 1, (unsigned int)((__int64)(a1 - v13) >> 3) >> 4, v12);
    v19->Buffer = (unsigned int *)v13;
    if ( v7 )
      *(&v19[2].SizeOfBitMap + 1) |= 2u;
    *(_QWORD *)&v19->SizeOfBitMap = qword_140E2D9A0;
    result = 1LL;
    qword_140E2D9A0 = v19;
  }
  return result;
}
