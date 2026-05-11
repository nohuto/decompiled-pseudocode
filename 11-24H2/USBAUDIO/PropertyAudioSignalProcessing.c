/*
 * XREFs of PropertyAudioSignalProcessing @ 0x14003DCF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14001BC00 (memmove.c)
 *     PropertyAudioSignalProcessingPinValidation @ 0x14003DDE4 (PropertyAudioSignalProcessingPinValidation.c)
 */

__int64 __fastcall PropertyAudioSignalProcessing(IRP *a1, __int64 a2, ULONG *a3)
{
  ULONG Length; // r14d
  PKSFILTER FilterFromIrp; // rsi
  __int64 result; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  ULONG v11; // edi

  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  result = PropertyAudioSignalProcessingPinValidation(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 1) == 0 )
      return 3221225659LL;
    v9 = (__int64)FilterFromIrp->Descriptor->PinDescriptors + 176 * *(unsigned int *)(a2 + 24);
    v10 = 16LL * *(unsigned int *)(v9 + 160);
    if ( v10 > 0xFFFFFFFF )
      return 3221225860LL;
    v11 = v10 + 8;
    if ( (int)v10 + 8 < (unsigned int)v10 )
    {
      return 3221225860LL;
    }
    else
    {
      if ( !Length )
      {
        result = 2147483653LL;
LABEL_8:
        a1->IoStatus.Information = v11;
        return result;
      }
      if ( Length < v11 )
      {
        result = 3221225507LL;
        goto LABEL_8;
      }
      memmove(a3 + 2, *(const void **)(v9 + 168), (unsigned int)v10);
      *a3 = v11;
      a3[1] = *(_DWORD *)(v9 + 160);
      result = 0LL;
      a1->IoStatus.Information = v11;
    }
  }
  return result;
}
