/*
 * XREFs of CmOpenKeyCallout @ 0x1406F3060
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 */

void __fastcall CmOpenKeyCallout(PVOID Parameter)
{
  *(_DWORD *)Parameter = CmOpenKey(
                           *((_QWORD *)Parameter + 1),
                           *((_DWORD *)Parameter + 4),
                           *((_QWORD *)Parameter + 3),
                           *((_DWORD *)Parameter + 8),
                           *((_QWORD *)Parameter + 5),
                           *((_BYTE *)Parameter + 48));
}
