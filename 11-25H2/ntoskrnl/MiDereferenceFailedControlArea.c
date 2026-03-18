/*
 * XREFs of MiDereferenceFailedControlArea @ 0x140A7EC78
 * Callers:
 *     MiFinishCreateSection @ 0x14093CE8C (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiAweControlArea @ 0x140440EC0 (MiAweControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x14044FC78 (MiDereferenceControlAreaBySection.c)
 *     MiDeleteSectionAwe @ 0x140676738 (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDereferenceFailedControlArea(int *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v1 & 4) != 0 )
    return MiDereferenceControlAreaBySection(v2, (v1 & 1) == 0);
  result = MiAweControlArea(v2);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v4);
  return result;
}
