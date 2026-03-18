/*
 * XREFs of PoInitializePrcb @ 0x140B4FD6C
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     PpmHvUseNativeAlgorithms @ 0x1404B41E4 (PpmHvUseNativeAlgorithms.c)
 *     PpmHeteroHgsProcessorInit @ 0x1405D2868 (PpmHeteroHgsProcessorInit.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rbx
  unsigned int v3; // ecx
  _WORD *v4; // rdx
  unsigned int v5; // eax
  char result; // al

  v1 = DeferredContext + 34880;
  memset_0(DeferredContext + 34880, 0, 0x238uLL);
  *((_DWORD *)DeferredContext + 8622) = 0x10000;
  *((_QWORD *)v1 + 29) = PpmWmiDispatch;
  v1[248] = 1;
  v1[216] = 2;
  *((_WORD *)v1 + 215) = 100;
  KeInitializeDpc((PRKDPC)(v1 + 280), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  PpmHeteroHgsProcessorInit((__int64)DeferredContext, 1);
  v3 = 100;
  v4 = v1 + 554;
  do
  {
    v5 = v3;
    v3 += 100;
    *v4++ = (v5 >> 2) - 1;
  }
  while ( v3 < 0x1F4 );
  if ( !*((_QWORD *)v1 + 42) )
    *((_WORD *)v1 + 141) = *((_DWORD *)DeferredContext + 9) + 2048;
  v1[281] = 3;
  result = PpmHvUseNativeAlgorithms();
  if ( result )
  {
    *((_DWORD *)v1 + 56) = 0;
  }
  else
  {
    result = HvlpFlags;
    if ( (HvlpFlags & 2) != 0 )
      *((_DWORD *)v1 + 56) = 2;
    else
      *((_DWORD *)v1 + 56) = 1;
  }
  v1[436] = 1;
  return result;
}
