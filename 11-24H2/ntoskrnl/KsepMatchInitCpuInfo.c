/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140C2DE9C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140C2DF2C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x14073E14C (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140E62390 = 0LL;
  qword_140E623C0 = 0LL;
  v0 = -1LL;
  xmmword_140E623A0 = 0LL;
  xmmword_140E623B0 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140E62100, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140E623B0) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140E623B0) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140E62390 = word_140E62100;
  }
  return result;
}
