/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x140A3D8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetThreadPlaceholderCompatibilityMode(CHAR Mode)
{
  struct _KTHREAD *CurrentThread; // rdx
  _BYTE *Teb; // r8
  CHAR result; // al

  if ( (unsigned __int8)Mode > 3u )
    return -1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return -2;
  if ( CurrentThread->ApcStateIndex == 1 )
    return -2;
  Teb = CurrentThread->Teb;
  if ( !Teb )
    return -2;
  result = Teb[640];
  Teb[640] = Mode;
  return result;
}
