/*
 * XREFs of MiInitializeHotPatches @ 0x140C567D0
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  *(_QWORD *)&qword_140E37478 = 0LL;
  qword_140E37480 = 0LL;
  qword_140E37470 = 0LL;
  qword_140E37488 = 0LL;
  qword_140E37490 = 0LL;
  v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3496LL) + 4095) & 0xFFFFF000;
  dword_140E374AC = v1;
  if ( (v1 & 0x1FFF) != 0 )
    return 0LL;
  result = 1LL;
  dword_140E374B0 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3872LL);
  if ( v1 && ((MiFlags & 0x4000) != 0 || dword_140FC4260 == 1) )
    dword_140E374B4 |= 1u;
  return result;
}
