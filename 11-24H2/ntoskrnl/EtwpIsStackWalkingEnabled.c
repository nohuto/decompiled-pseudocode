/*
 * XREFs of EtwpIsStackWalkingEnabled @ 0x140A0F644
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140A0F50C (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpIsStackWalkingEnabled(__int64 a1, __int16 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 816) & 0x80u) != 0 )
    return (*(char *)(((unsigned __int64)(a2 & 0x1FFF) >> 3) + *(_QWORD *)(a1 + 1048)) >> (a2 & 7)) & 1;
  return v2;
}
