/*
 * XREFs of HalpCorrectErrSrc @ 0x140B4D840
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     HalpGetMcaMaxVendorSpecificSectionLength @ 0x140541074 (HalpGetMcaMaxVendorSpecificSectionLength.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140541098 (HalpGetMcaVendorSpecificSections.c)
 *     HalpCorrectNMIErrSrc @ 0x140541610 (HalpCorrectNMIErrSrc.c)
 *     HalpCorrectGenericErrSrc @ 0x140552010 (HalpCorrectGenericErrSrc.c)
 *     HalpIsCmciImplemented @ 0x140B4E334 (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpCorrectErrSrc(_DWORD *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  ULONG ActiveProcessorCount; // eax
  BOOL McaVendorSpecificSections; // edx
  unsigned int v12; // r8d
  unsigned int McaMaxVendorSpecificSectionLength; // eax

  v3 = 0;
  v5 = a1[2];
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 && v8 != 7 )
        return (unsigned int)-1073741637;
      return (unsigned int)HalpCorrectGenericErrSrc((__int64)a1, a2);
    }
    else
    {
      return (unsigned int)HalpCorrectNMIErrSrc((__int64)a1, a2);
    }
  }
  if ( (unsigned __int8)HalpIsCmciImplemented() )
  {
LABEL_11:
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( a1[5] < ActiveProcessorCount )
      a1[5] = ActiveProcessorCount;
  }
  McaVendorSpecificSections = HalpGetMcaVendorSpecificSections();
  if ( a1[6] < (unsigned int)(McaVendorSpecificSections + 5) )
    a1[6] = McaVendorSpecificSections + 5;
  v12 = 1272;
  if ( !McaVendorSpecificSections
    || (McaMaxVendorSpecificSectionLength = HalpGetMcaMaxVendorSpecificSectionLength(),
        McaMaxVendorSpecificSectionLength < 0x4A8)
    || McaMaxVendorSpecificSectionLength <= v12 )
  {
    McaMaxVendorSpecificSectionLength = v12;
  }
  *a2 = McaMaxVendorSpecificSectionLength;
  return v3;
}
