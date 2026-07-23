/*
 * XREFs of HalpSetProcessorStateByNtIndex @ 0x140554E88
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140B4DF10 (HalpInterruptStartProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpSetProcessorStateByNtIndex(unsigned int a1, int a2)
{
  unsigned int v3; // edx
  unsigned int i; // eax
  _DWORD *v5; // r8

  if ( a1 < (unsigned int)HalpInterruptProcessorCount )
  {
    v3 = 0;
    for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
    {
      v5 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)i << 6));
      if ( *v5 == a2 )
      {
        *(_QWORD *)(HalpInterruptProcessorStateByNtIndex + 8LL * a1) = v5;
        return v3;
      }
    }
    return (unsigned int)-1073741275;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
