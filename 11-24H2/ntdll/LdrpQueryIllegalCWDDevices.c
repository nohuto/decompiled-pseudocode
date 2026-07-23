/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800A4FC0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 */

void __fastcall LdrpQueryIllegalCWDDevices(void *a1)
{
  int v1; // ecx
  int v2; // eax

  if ( a1 && (int)RtlQueryImageFileKeyOption(a1, (wchar_t *)L"CWDIllegalInDLLSearch", 4, 0LL) >= 0 )
  {
    v1 = 0;
  }
  else
  {
    v1 = (MEMORY[0x7FFE02D5] >> 4) & 3;
    if ( v1 == 3 )
      v1 = -1;
  }
  if ( v1 == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( v1 == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    v2 = 16;
    if ( v1 != 2 )
      v2 = 0;
    LdrpIllegalCWDDevices = v2;
  }
}
