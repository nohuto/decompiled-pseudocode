/*
 * XREFs of SeQueryHSTIResults @ 0x140AEBC6C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x1406FA008 (RtlCopyToUser.c)
 */

__int64 __fastcall SeQueryHSTIResults(void *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx

  v3 = dword_140FF3450;
  *a3 = dword_140FF3450;
  v4 = 0;
  if ( v3 )
  {
    if ( a2 >= v3 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
        RtlCopyToUser(a1, qword_140FF3458, (unsigned int)dword_140FF3450);
      else
        RtlCopyVolatileMemory(a1, qword_140FF3458, (unsigned int)dword_140FF3450);
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
