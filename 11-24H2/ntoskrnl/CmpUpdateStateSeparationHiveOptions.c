/*
 * XREFs of CmpUpdateStateSeparationHiveOptions @ 0x140C4A4C8
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
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
    v0 = &unk_140E098C0;
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
    byte_140E09994 = 0;
    if ( !CmStateSeparationDevMode )
    {
      result = 0x8000LL;
      dword_140E09A30 |= 0x8000u;
      dword_140E09AE8 |= 0x8000u;
    }
    byte_140E09C74 = 0;
    byte_140E09D2B = 1;
  }
  return result;
}
