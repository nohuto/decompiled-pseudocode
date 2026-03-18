/*
 * XREFs of MiInitializeHotPatches @ 0x140C454F0
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  *(_QWORD *)&qword_140E37238 = 0LL;
  qword_140E37240 = 0LL;
  qword_140E37230 = 0LL;
  qword_140E37248 = 0LL;
  qword_140E37250 = 0LL;
  v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3496LL) + 4095) & 0xFFFFF000;
  dword_140E3726C = v1;
  if ( (v1 & 0x1FFF) != 0 )
    return 0LL;
  result = 1LL;
  dword_140E37270 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3872LL);
  if ( v1 && ((MiFlags & 0x4000) != 0 || dword_140FC4250 == 1) )
    dword_140E37274 |= 1u;
  return result;
}
