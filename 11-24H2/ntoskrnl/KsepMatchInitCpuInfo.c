/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140C2BD7C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140C2BE0C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x14074021C (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140E62240 = 0LL;
  qword_140E62270 = 0LL;
  v0 = -1LL;
  xmmword_140E62250 = 0LL;
  xmmword_140E62260 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140E61FB0, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140E62260) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140E62260) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140E62240 = word_140E61FB0;
  }
  return result;
}
