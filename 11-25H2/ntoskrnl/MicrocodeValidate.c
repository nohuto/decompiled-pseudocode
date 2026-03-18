/*
 * XREFs of MicrocodeValidate @ 0x140658860
 * Callers:
 *     PrExtControlOperations @ 0x140657C2C (PrExtControlOperations.c)
 * Callees:
 *     GetCpuManufacturer @ 0x140658D0C (GetCpuManufacturer.c)
 */

__int64 __fastcall MicrocodeValidate(int a1)
{
  unsigned __int64 v1; // rax

  dword_140EF74C8 = a1;
  if ( (unsigned __int8)GetCpuManufacturer(2LL) )
  {
    v1 = __readmsr(0x8Bu);
  }
  else
  {
    if ( !(unsigned __int8)GetCpuManufacturer(1LL) )
      return 3221225659LL;
    v1 = __readmsr(0x8Bu) >> 32;
  }
  if ( HIDWORD(xmmword_140EF74B0) )
  {
    if ( HIDWORD(xmmword_140EF74B0) <= (unsigned int)v1 )
    {
      if ( (_DWORD)xmmword_140EF74B0 == (_DWORD)v1 )
      {
        HIDWORD(qword_140EF74C0) = 7;
      }
      else
      {
        if ( HIDWORD(xmmword_140EF74B0) == (_DWORD)v1
          && (HIDWORD(qword_140EF74C0) == 4 || HIDWORD(qword_140EF74C0) == 10) )
        {
          HIDWORD(qword_140EF74C0) = 0;
        }
        *(_QWORD *)((char *)&xmmword_140EF74B0 + 4) = *((_QWORD *)&xmmword_140EF74B0 + 1);
      }
    }
    else
    {
      HIDWORD(qword_140EF74C0) = 3;
    }
  }
  else
  {
    HIDWORD(qword_140EF74C0) = 6;
  }
  return 0LL;
}
