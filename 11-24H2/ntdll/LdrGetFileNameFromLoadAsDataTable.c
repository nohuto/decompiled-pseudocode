/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x18010B490
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x18007A2FC (LdrpGetLoadAsEntry.c)
 */

NTSTATUS __cdecl LdrGetFileNameFromLoadAsDataTable(PVOID Module, PVOID *pFileNamePrt)
{
  NTSTATUS result; // eax
  _OWORD v4[3]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( !Module || !pFileNamePrt )
    return -1073741811;
  result = LdrpGetLoadAsEntry((__int64)Module, v4);
  if ( result >= 0 )
  {
    if ( *((_QWORD *)&v4[0] + 1) )
      *pFileNamePrt = (PVOID)*((_QWORD *)&v4[0] + 1);
    else
      return -1073741823;
  }
  return result;
}
