/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140C1AC7C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140C1AD0C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1407341FC (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140E62000 = 0LL;
  qword_140E62030 = 0LL;
  v0 = -1LL;
  xmmword_140E62010 = 0LL;
  xmmword_140E62020 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140E61D70, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140E62020) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140E62020) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140E62000 = word_140E61D70;
  }
  return result;
}
