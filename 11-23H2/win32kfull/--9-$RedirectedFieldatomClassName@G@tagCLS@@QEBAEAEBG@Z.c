/*
 * XREFs of ??9?$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z @ 0x1C01393E8
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(__int64 a1, _WORD *a2)
{
  return **(_WORD **)(a1 - 16) != *a2;
}
