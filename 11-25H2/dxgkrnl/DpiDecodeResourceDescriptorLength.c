/*
 * XREFs of DpiDecodeResourceDescriptorLength @ 0x140406ED8
 * Callers:
 *     DpiVerifyResources @ 0x1403E3210 (DpiVerifyResources.c)
 *     DpiFdoDetectPostDevice @ 0x1403F9324 (DpiFdoDetectPostDevice.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DpiDecodeResourceDescriptorLength(unsigned __int8 *a1)
{
  __int16 v2; // ax

  if ( *a1 == 3 )
    return *((unsigned int *)a1 + 3);
  if ( *a1 == 7 )
  {
    v2 = *((_WORD *)a1 + 1);
    if ( (v2 & 0x200) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 8;
    if ( (v2 & 0x400) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 16;
    if ( (v2 & 0x800) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 32;
    WdLogSingleEntry1(3LL, *((unsigned __int16 *)a1 + 1));
    WdLogGlobalForLineNumber = 3861;
  }
  else
  {
    WdLogSingleEntry1(3LL, *a1);
    WdLogGlobalForLineNumber = 3868;
  }
  return 0LL;
}
