/*
 * XREFs of KiGetHalNumaConversionFactor @ 0x140C2A0B4
 * Callers:
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiGetHalNumaConversionFactor(int *a1)
{
  unsigned int v2; // edx
  unsigned int i; // ecx
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r10
  int v7; // ecx
  unsigned __int64 result; // rax

  v2 = 0;
LABEL_2:
  if ( v2 >= (unsigned __int16)KeNumberNodes )
  {
    *a1 = 1;
    return 0LL;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int16)KeNumberNodes )
      {
        ++v2;
        goto LABEL_2;
      }
      v4 = i + v2 * (unsigned __int16)KeNumberNodes;
      v5 = *((_QWORD *)KiActualNodeCost + v4);
      if ( v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v6 = *((unsigned int *)KeNodeDistance + v4);
        if ( (unsigned int)v6 > 1 )
          break;
      }
    }
    if ( v6 < v5 )
    {
      result = 100 * v5 / v6;
      v7 = 2;
    }
    else
    {
      v7 = 3;
      result = (unsigned int)(100 * v6) / v5;
    }
    *a1 = v7;
  }
  return result;
}
