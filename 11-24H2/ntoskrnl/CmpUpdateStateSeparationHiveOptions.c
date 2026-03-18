/*
 * XREFs of CmpUpdateStateSeparationHiveOptions @ 0x140C48378
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 CmpUpdateStateSeparationHiveOptions()
{
  _DWORD *v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( CmStateSeparationAllHivesVolatile )
  {
    v0 = &unk_140E09850;
    v1 = 7LL;
    result = 0x8000LL;
    do
    {
      *v0 |= 0x8000u;
      v0 += 46;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    byte_140E09924 = 0;
    if ( !CmStateSeparationDevMode )
    {
      result = 0x8000LL;
      dword_140E099C0 |= 0x8000u;
      dword_140E09A78 |= 0x8000u;
    }
    byte_140E09C04 = 0;
    byte_140E09CBB = 1;
  }
  return result;
}
