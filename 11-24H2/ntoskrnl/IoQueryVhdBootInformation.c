/*
 * XREFs of IoQueryVhdBootInformation @ 0x14082A4EC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140E0F1DC;
  if ( a3 < (unsigned int)dword_140E0F1DC )
    v5 = -1073741789;
  else
    memmove(a2, off_140E0A658, (unsigned int)dword_140E0F1DC);
  *a4 = v6;
  return v5;
}
