/*
 * XREFs of ??B?$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ @ 0x1C01A2604
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDESKTOPINFO::RedirectedFielddwDesktopId<unsigned __int64>::operator unsigned __int64(
        __int64 a1)
{
  return **(_QWORD **)(a1 - 16);
}
