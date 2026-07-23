/*
 * XREFs of HalpBlkPoGetProcessorCount @ 0x14056A3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpBlkPoGetProcessorCount(int a1)
{
  unsigned int v1; // r8d
  __int64 *v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax
  unsigned int v5; // edx

  if ( a1 == -1 )
  {
    return (unsigned int)HalpBlkNumberProcessors;
  }
  else
  {
    v1 = 0;
    if ( (_DWORD)HalpBlkNumberProcessors )
    {
      v2 = (__int64 *)HalpBlkPcr;
      v3 = (unsigned int)HalpBlkNumberProcessors;
      do
      {
        v4 = *v2;
        v5 = v1 + 1;
        ++v2;
        if ( a1 != *(_DWORD *)(v4 + 24) )
          v5 = v1;
        v1 = v5;
        --v3;
      }
      while ( v3 );
    }
  }
  return v1;
}
