/*
 * XREFs of KeGetTopologySiblingGroupAffinityForProcessor @ 0x14032A8E4
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     KiBuildShareCountListForSubNodeByAffinity @ 0x14032A81C (KiBuildShareCountListForSubNodeByAffinity.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KeGetTopologySiblingGroupAffinityForProcessor(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 result; // rax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int128 v11; // [rsp+20h] [rbp-18h]

  v3 = *(unsigned __int8 *)(a1 + 208);
  v4 = 0LL;
  v11 = 0LL;
  WORD4(v11) = *(unsigned __int8 *)(a1 + 208);
  if ( !a2 )
  {
    result = *(_QWORD *)(a1 + 200);
LABEL_3:
    *(_QWORD *)&v11 = result;
    goto LABEL_19;
  }
  if ( a2 == 1 )
  {
    result = *(_QWORD *)(a1 + 36448);
    goto LABEL_3;
  }
  v8 = a2 - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 || !(unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(a1) )
          __fastfail(5u);
        result = 47424LL;
      }
      else
      {
        result = 35856LL;
      }
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
  *(_QWORD *)&v11 = v4;
LABEL_19:
  *a3 = v11;
  return result;
}
