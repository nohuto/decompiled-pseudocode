/*
 * XREFs of BiIsWindowsEfiEntry @ 0x1409A619C
 * Callers:
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A60FC (BiGetObjectReferenceFromEfiEntry.c)
 * Callees:
 *     wcsnlen @ 0x1404FD950 (wcsnlen.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 */

bool __fastcall BiIsWindowsEfiEntry(__int64 a1)
{
  __int64 v1; // rdi
  bool result; // al
  unsigned int v3; // ebx

  result = 0;
  if ( *(_DWORD *)(a1 + 4) >= 0x1Cu && *(_DWORD *)(a1 + 24) >= 0x14u )
  {
    v1 = a1 + 28;
    if ( !strncmp((const char *)(a1 + 28), "WINDOWS", 7uLL) )
    {
      v3 = *(_DWORD *)(v1 + 12);
      if ( v3 >= 0x14 && *(_DWORD *)(v1 + 8) && (unsigned int)wcsnlen((const wchar_t *)(v1 + 20), v3 - 20) != v3 - 20 )
        return 1;
    }
  }
  return result;
}
