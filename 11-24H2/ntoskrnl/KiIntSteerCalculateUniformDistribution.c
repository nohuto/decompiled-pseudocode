/*
 * XREFs of KiIntSteerCalculateUniformDistribution @ 0x1402B304C
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x1402B1990 (KiIntSteerCalculateDistribution.c)
 * Callees:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402B2334 (KiIntPartGetLowestClassProcessorInMask.c)
 */

unsigned __int64 __fastcall KiIntSteerCalculateUniformDistribution(_QWORD **a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx
  unsigned __int16 v5; // bp
  __int64 i; // rdi
  unsigned int LowestClassProcessorInMask; // eax
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = *a1;
  v5 = *((_WORD *)a2 + 4);
  for ( i = *a2; v3 != a1; v3 = (_QWORD *)*v3 )
  {
    result = *(v3 - 18);
    if ( (result & *a2) != 0 )
    {
      *((_QWORD *)&v12 + 1) = v5;
      *(_QWORD *)&v12 = i & result;
      if ( (i & result) == 0
        || (LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask((__int64)&v12),
            LowestClassProcessorInMask == -1) )
      {
        v11 = *(v3 - 18);
        v12 = 0LL;
        WORD4(v12) = v5;
        i |= *a2 & v11;
        *(_QWORD *)&v12 = v11 & i;
        if ( (v11 & i) != 0 )
          LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask((__int64)&v12);
        else
          LowestClassProcessorInMask = -1;
      }
      v9 = *((_DWORD *)KiGlobalState + LowestClassProcessorInMask);
      i &= ~(1LL << (v9 & 0x3F));
      *(_DWORD *)((char *)v3 - 22) = 0;
      *((_WORD *)v3 - 9) = 0;
      *((_WORD *)v3 - 12) = v9 >> 6;
      *(v3 - 4) = 1LL << (v9 & 0x3F);
      v10 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (result = v3[1], *(_QWORD **)result != v3) )
        __fastfail(3u);
      *(_QWORD *)result = v10;
      *(_QWORD *)(v10 + 8) = result;
    }
  }
  return result;
}
