/*
 * XREFs of VmpVaMemoryRangeGetNext @ 0x14049DF3C
 * Callers:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14039ECB4 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpMergeMemoryRanges @ 0x1404C98A4 (VmpMergeMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpVaMemoryRangeGetNext(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD **v3; // rcx
  _QWORD *i; // rdx
  __int64 j; // r8
  __int64 v7; // rax

  v2 = 0LL;
  if ( a2 )
  {
    v3 = (_QWORD **)a2[1];
    if ( v3 )
    {
      for ( i = *v3; i; i = (_QWORD *)*i )
        v3 = (_QWORD **)i;
      return (__int64)v3;
    }
    else
    {
      for ( j = a2[2]; ; j = v2[2] )
      {
        v2 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v2 || (_QWORD *)*v2 == a2 )
          break;
        a2 = v2;
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( (v7 & 1) != 0 )
    {
      if ( v7 != 1 )
        return v7 ^ ((a1 + 24) | 1);
    }
    else
    {
      return *(_QWORD *)(a1 + 32);
    }
  }
  return (__int64)v2;
}
