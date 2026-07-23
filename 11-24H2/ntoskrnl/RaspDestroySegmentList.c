/*
 * XREFs of RaspDestroySegmentList @ 0x14045EB24
 * Callers:
 *     RaspScanConvert @ 0x14045E04C (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x14045E7C4 (RaspCreateSegmentList.c)
 * Callees:
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspDestroySegmentList(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  _BYTE *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rcx

  v4 = 0;
  if ( a2 )
  {
    v8 = (_BYTE *)(a1 + 24);
    do
    {
      v9 = v8 - 24;
      if ( v8 == (_BYTE *)24 )
        break;
      if ( *v8 == 3 && *v9 )
        RaspFreeMemory(*v9, a3, a3, a4);
      if ( *v8 == 4 )
      {
        v12 = *((_QWORD *)v8 - 1);
        if ( v12 )
          RaspFreeMemory(v12, a3, a3, a4);
      }
      if ( *v8 == 5 )
      {
        if ( *v9 )
          RaspFreeMemory(*v9, a3, a3, a4);
        v10 = *((_QWORD *)v8 - 1);
        if ( v10 )
          RaspFreeMemory(v10, a3, a3, a4);
      }
      v8 += 25;
      ++v4;
    }
    while ( v4 < a2 );
  }
  return RaspFreeMemory(a1, a3, a3, a4);
}
