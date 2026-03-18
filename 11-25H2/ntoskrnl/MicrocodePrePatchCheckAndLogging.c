/*
 * XREFs of MicrocodePrePatchCheckAndLogging @ 0x1406585B8
 * Callers:
 *     GetMicrocodePatchData @ 0x140658008 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x140658658 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MicrocodePrePatchCheckAndLogging(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  bool v4; // zf

  v2 = xmmword_140EF74B0;
  DWORD1(xmmword_140EF74B0) = a1;
  if ( !(_DWORD)xmmword_140EF74B0 )
  {
    v2 = a1;
    LODWORD(xmmword_140EF74B0) = a1;
  }
  if ( !a2 )
  {
    HIDWORD(qword_140EF74C0) = 6;
    result = 3221225473LL;
    goto LABEL_16;
  }
  if ( a2 >= a1 )
  {
    result = 3221225473LL;
    if ( a2 == a1 )
    {
      HIDWORD(qword_140EF74C0) = 2;
      goto LABEL_16;
    }
    if ( a2 <= a1 )
      goto LABEL_16;
    HIDWORD(qword_140EF74C0) = 4;
LABEL_15:
    result = 0LL;
    LODWORD(MCUpdateRegistryData) = 2;
    goto LABEL_16;
  }
  if ( AllowRollback )
  {
    HIDWORD(qword_140EF74C0) = 10;
    goto LABEL_15;
  }
  v4 = v2 == a1;
  result = 3221225473LL;
  if ( v4 )
    HIDWORD(qword_140EF74C0) = 7;
  else
    HIDWORD(qword_140EF74C0) = 1;
LABEL_16:
  DWORD2(xmmword_140EF74B0) = a1;
  return result;
}
