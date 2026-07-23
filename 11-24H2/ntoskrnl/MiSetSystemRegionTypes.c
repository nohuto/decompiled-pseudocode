/*
 * XREFs of MiSetSystemRegionTypes @ 0x140C57304
 * Callers:
 *     MiInitializeSystemVa @ 0x140C693AC (MiInitializeSystemVa.c)
 * Callees:
 *     MiConvertAssignedRegionToVaType @ 0x140C56CE0 (MiConvertAssignedRegionToVaType.c)
 */

unsigned __int64 MiSetSystemRegionTypes()
{
  unsigned int v0; // r9d
  __int64 *v1; // r8
  unsigned __int64 v2; // r11
  char v3; // al
  __int64 v4; // rdx
  unsigned __int64 i; // r10
  unsigned __int64 result; // rax

  v0 = 0;
  v1 = qword_140E38BF0;
  v2 = (unsigned __int64)&MiState;
  do
  {
    if ( *(v1 - 1) )
    {
      v3 = MiConvertAssignedRegionToVaType(v0);
      for ( i = (unsigned __int64)*v1 >> 39; i; --i )
      {
        *(_BYTE *)(v4 + v2 + 49000) = v3;
        v4 = (unsigned int)(v4 + 1);
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 0x12 );
  result = ((v2 >> 39) & 0x1FF) - 256;
  *(_BYTE *)((unsigned int)result + v2 + 49000) = 11;
  return result;
}
