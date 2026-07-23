/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x140C5738C
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  char v1; // al

  v0 = dword_140FC520C;
  if ( (unsigned int)dword_140FC520C <= 0x40 )
  {
    if ( !dword_140FC520C )
      v0 = 1;
  }
  else
  {
    v0 = 64;
  }
  dword_140FC520C = v0 << 8;
  v1 = dword_140FC5200;
  if ( (dword_140FC5200 & 0xFFFFFFF8) != 0 )
  {
    v1 = 0;
    dword_140FC5200 = 0;
  }
  if ( (v1 & 4) != 0 )
  {
    dword_140E373CC = 16;
    dword_140E373D0 = 8;
  }
  else
  {
    dword_140E373CC = 4;
  }
  return 1LL;
}
