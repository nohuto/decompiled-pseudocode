/*
 * XREFs of KeGetTopologySiblingGroupAffinityForProcessor @ 0x14045653C
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetTopologySiblingGroupAffinityForProcessor(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  int v5; // edx
  __int64 result; // rax
  int v7; // edx
  __int128 v8; // [rsp+0h] [rbp-18h]

  v3 = *(unsigned __int8 *)(a1 + 208);
  v4 = 0LL;
  v8 = 0LL;
  if ( !a2 )
  {
    result = *(_QWORD *)(a1 + 200);
    goto LABEL_10;
  }
  if ( a2 == 1 )
  {
    result = *(_QWORD *)(a1 + 36448);
LABEL_10:
    *(_QWORD *)&v8 = result;
    goto LABEL_8;
  }
  v5 = a2 - 2;
  if ( v5 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        __fastfail(5u);
      result = 35856LL;
    }
    else
    {
      result = 40128LL;
    }
  }
  else
  {
    result = 40720LL;
  }
  if ( (unsigned __int16)v3 < *(_WORD *)(result + a1) )
    v4 = *(_QWORD *)(result + a1 + 8 * v3 + 8);
  *(_QWORD *)&v8 = v4;
LABEL_8:
  WORD4(v8) = *(unsigned __int8 *)(a1 + 208);
  *a3 = v8;
  return result;
}
