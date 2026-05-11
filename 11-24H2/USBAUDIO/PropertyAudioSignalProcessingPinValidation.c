/*
 * XREFs of PropertyAudioSignalProcessingPinValidation @ 0x14003DDE4
 * Callers:
 *     PropertyAudioSignalProcessingBasicSupport @ 0x1400320B0 (PropertyAudioSignalProcessingBasicSupport.c)
 *     PropertyAudioSignalProcessing @ 0x14003DCF0 (PropertyAudioSignalProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyAudioSignalProcessingPinValidation(IRP *a1, _DWORD *a2)
{
  unsigned int Options; // ebx
  PKSFILTER FilterFromIrp; // rax
  const KSFILTER_DESCRIPTOR *Descriptor; // rax
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // rcx
  __int64 v8; // rdx

  Options = a1->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( Options < 0x20 || a2[7] || (a2[5] & 0x10000000) != 0 )
    return 3221225488LL;
  if ( !FilterFromIrp )
    return 3221225485LL;
  Descriptor = FilterFromIrp->Descriptor;
  if ( !Descriptor )
    return 3221225860LL;
  PinDescriptors = Descriptor->PinDescriptors;
  if ( !PinDescriptors )
    return 3221225860LL;
  v8 = (unsigned int)a2[6];
  if ( (unsigned int)v8 >= Descriptor->PinDescriptorsCount )
    return 3221225485LL;
  if ( *((_DWORD *)&PinDescriptors->PinDescriptor.Communication + 44 * v8) == 4 )
    return 3221225659LL;
  else
    return *((_DWORD *)&PinDescriptors[1].PinDescriptor.Interfaces + 44 * v8) != 0 ? 0 : 0xC00000BB;
}
