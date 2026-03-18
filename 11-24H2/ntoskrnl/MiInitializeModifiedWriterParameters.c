/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x140C551FC
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  char v1; // al

  v0 = dword_140FC420C;
  if ( (unsigned int)dword_140FC420C <= 0x40 )
  {
    if ( !dword_140FC420C )
      v0 = 1;
  }
  else
  {
    v0 = 64;
  }
  dword_140FC420C = v0 << 8;
  v1 = dword_140FC4200;
  if ( (dword_140FC4200 & 0xFFFFFFF8) != 0 )
  {
    v1 = 0;
    dword_140FC4200 = 0;
  }
  if ( (v1 & 4) != 0 )
  {
    dword_140E3728C = 16;
    dword_140E37290 = 8;
  }
  else
  {
    dword_140E3728C = 4;
  }
  return 1LL;
}
