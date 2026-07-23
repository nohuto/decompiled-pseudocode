/*
 * XREFs of CmEnumerateKeyCallout @ 0x1406F3100
 * Callers:
 *     <none>
 * Callees:
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 */

void __fastcall CmEnumerateKeyCallout(_QWORD *Parameter)
{
  *(_DWORD *)Parameter = CmEnumerateKey(
                           Parameter[1],
                           Parameter[2],
                           *((_DWORD *)Parameter + 6),
                           *((_DWORD *)Parameter + 7),
                           Parameter[4],
                           *((_DWORD *)Parameter + 10),
                           Parameter[6]);
}
