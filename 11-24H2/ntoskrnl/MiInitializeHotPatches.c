/*
 * XREFs of MiInitializeHotPatches @ 0x140C58960
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  *(_QWORD *)&qword_140E375B8 = 0LL;
  qword_140E375C0 = 0LL;
  qword_140E375B0 = 0LL;
  qword_140E375C8 = 0LL;
  qword_140E375D0 = 0LL;
  v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3496LL) + 4095) & 0xFFFFF000;
  dword_140E375EC = v1;
  if ( (v1 & 0x1FFF) != 0 )
    return 0LL;
  result = 1LL;
  dword_140E375F0 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3872LL);
  if ( v1 && ((MiFlags & 0x4000) != 0 || dword_140FC5260 == 1) )
    dword_140E375F4 |= 1u;
  return result;
}
