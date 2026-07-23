/*
 * XREFs of ViCtxCaptureInitialIsrState @ 0x140BA3EAC
 * Callers:
 *     ViCtxIsr @ 0x140BA4190 (ViCtxIsr.c)
 *     ViCtxIsrMessageBased @ 0x140BA41F0 (ViCtxIsrMessageBased.c)
 * Callees:
 *     RtlXSave @ 0x1403D3DF0 (RtlXSave.c)
 */

volatile signed __int32 *__fastcall ViCtxCaptureInitialIsrState(__int64 a1)
{
  unsigned int i; // edx
  volatile signed __int32 *v2; // rbx
  unsigned __int64 v3; // rdx

  _InterlockedAdd(&ViCtxInterrupts, 1u);
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x10 )
      return 0LL;
    v2 = (volatile signed __int32 *)((char *)&ViCtxIsrStateBlocks
                                   + 80 * (((unsigned __int8)_InterlockedExchangeAdd(&ViCtxHintIndex, 1u) + 1) & 0xF));
    if ( !_InterlockedCompareExchange(v2, 1, 0) )
      break;
  }
  if ( v2 )
  {
    v3 = ViCtxXStateEnabledMask;
    *((_BYTE *)v2 + 8) = KeGetCurrentIrql();
    if ( ((v3 & 0xFFFFFFFFFFFFFFFCuLL) != 0 || !*(_BYTE *)(a1 + 94)) && (v2[1] & 1) != 0 )
    {
      RtlXSave(*((_DWORD **)v2 + 4), v3);
      *((_DWORD *)v2 + 1) |= 2u;
    }
    _InterlockedAdd(&ViCtxInterruptsChecked, 1u);
  }
  return v2;
}
