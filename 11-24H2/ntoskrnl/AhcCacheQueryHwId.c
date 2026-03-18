/*
 * XREFs of AhcCacheQueryHwId @ 0x140828F30
 * Callers:
 *     NtApphelpCacheControl @ 0x140967860 (NtApphelpCacheControl.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     ExGetPreviousMode @ 0x140445830 (ExGetPreviousMode.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KseLookupHardwareId @ 0x14073FD4C (KseLookupHardwareId.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AhcCacheQueryHwId(char *Src)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  wchar_t *Pool2; // rcx
  bool v5; // cl
  __int64 v6; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v9[328]; // [rsp+30h] [rbp-198h] BYREF
  UNICODE_STRING SourceString; // [rsp+178h] [rbp-50h] BYREF

  memset_0(v9, 0, 0x188uLL);
  DestinationString = 0LL;
  if ( ExGetPreviousMode() == 1 )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v3 = (__int64)Src;
    RtlCopyVolatileMemory(v9, (const void *)v3, 0x188uLL);
    if ( SourceString.MaximumLength
      && SourceString.Length
      && SourceString.Buffer
      && ((SourceString.MaximumLength | SourceString.Length) & 1) == 0
      && SourceString.Length <= SourceString.MaximumLength
      && SourceString.Length <= 0xFFFCu )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      DestinationString.Buffer = Pool2;
      if ( Pool2 )
      {
        DestinationString.MaximumLength = SourceString.Length + 2;
        DestinationString.Length = 0;
        memset_0(Pool2, 0, (unsigned __int16)(SourceString.Length + 2));
        if ( SourceString.MaximumLength && ((__int64)SourceString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        v5 = (unsigned int)KseLookupHardwareId(DestinationString.Buffer) == 0;
        v6 = (__int64)(Src + 320);
        if ( (unsigned __int64)(Src + 320) >= 0x7FFFFFFF0000LL )
          v6 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v6 = v5;
        v2 = 0;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v2 = -1073741822;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x6F637061u);
  return v2;
}
