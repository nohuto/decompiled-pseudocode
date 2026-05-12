/*
 * XREFs of NvmeControllerAdvancedInitialize @ 0x1400EA71C
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 *     NvmeControllerPowerInitialize @ 0x1400F2558 (NvmeControllerPowerInitialize.c)
 */

__int64 __fastcall NvmeControllerAdvancedInitialize(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL) )
  {
    result = NvmeControllerInitPhase2(a1);
    if ( (int)result < 0 )
      return result;
    v3 = 0xFFFFFFFFLL;
    v4 = *(unsigned int *)(a1 + 8);
    v5 = v4 * *(unsigned __int16 *)(a1 + 22);
    if ( v5 <= 0xFFFFFFFF )
    {
      v3 = v4 * *(unsigned __int16 *)(a1 + 22);
      if ( !v5 )
        v3 = 128LL;
    }
    v6 = *(_QWORD *)(a1 + 1048);
    if ( v6 )
    {
      v7 = *(unsigned int *)(v6 + 120);
      if ( (_DWORD)v7 )
      {
        if ( v3 >= v7 )
          LODWORD(v3) = *(_DWORD *)(v6 + 120);
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 380LL) = v3;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 384LL) = v3;
  }
  result = NvmeControllerInitPhase3(a1, 0LL);
  if ( (int)result >= 0 )
  {
    NvmeControllerPowerInitialize(a1);
    return 0LL;
  }
  return result;
}
