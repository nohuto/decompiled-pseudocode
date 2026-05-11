/*
 * XREFs of PinDataFormatIntersection @ 0x14003AB60
 * Callers:
 *     <none>
 * Callees:
 *     IntersectFindDataRange @ 0x14003AC1C (IntersectFindDataRange.c)
 *     IntersectGetFormatSize @ 0x14003ADFC (IntersectGetFormatSize.c)
 *     IntersectConvertDatarangeToFormat @ 0x14003AE74 (IntersectConvertDatarangeToFormat.c)
 */

__int64 __fastcall PinDataFormatIntersection(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int *a8)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int v11; // ebx
  const KSFILTER_DESCRIPTOR *Descriptor; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 DataRange; // rax
  unsigned int FormatSize; // eax
  __int64 v18; // r9

  FilterFromIrp = KsGetFilterFromIrp(a2);
  v11 = 0;
  if ( FilterFromIrp
    && (Descriptor = FilterFromIrp->Descriptor,
        v13 = *(unsigned int *)(a3 + 24),
        (unsigned int)v13 < Descriptor->PinDescriptorsCount) )
  {
    v14 = (__int64)Descriptor->PinDescriptors + 176 * v13;
    DataRange = IntersectFindDataRange(a4, *(_QWORD *)(v14 + 56), *(unsigned int *)(v14 + 48));
    if ( DataRange )
    {
      FormatSize = IntersectGetFormatSize(DataRange);
      *a8 = FormatSize;
      if ( a6 )
      {
        if ( FormatSize <= a6 )
          IntersectConvertDatarangeToFormat(v14, v18, a7);
        else
          return (unsigned int)-1073741789;
      }
      else
      {
        return (unsigned int)-2147483643;
      }
    }
    else
    {
      return (unsigned int)-1073741198;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
