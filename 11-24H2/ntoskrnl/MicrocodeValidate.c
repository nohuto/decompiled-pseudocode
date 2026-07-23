/*
 * XREFs of MicrocodeValidate @ 0x140663410
 * Callers:
 *     PrExtControlOperations @ 0x1406627DC (PrExtControlOperations.c)
 * Callees:
 *     GetCpuManufacturer @ 0x1406638BC (GetCpuManufacturer.c)
 */

__int64 __fastcall MicrocodeValidate(int a1)
{
  unsigned __int64 v1; // rax

  dword_140EF7B08 = a1;
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
  if ( HIDWORD(xmmword_140EF7AF0) )
  {
    if ( HIDWORD(xmmword_140EF7AF0) <= (unsigned int)v1 )
    {
      if ( (_DWORD)xmmword_140EF7AF0 == (_DWORD)v1 )
      {
        HIDWORD(qword_140EF7B00) = 7;
      }
      else
      {
        if ( HIDWORD(xmmword_140EF7AF0) == (_DWORD)v1
          && (HIDWORD(qword_140EF7B00) == 4 || HIDWORD(qword_140EF7B00) == 10) )
        {
          HIDWORD(qword_140EF7B00) = 0;
        }
        *(_QWORD *)((char *)&xmmword_140EF7AF0 + 4) = *((_QWORD *)&xmmword_140EF7AF0 + 1);
      }
    }
    else
    {
      HIDWORD(qword_140EF7B00) = 3;
    }
  }
  else
  {
    HIDWORD(qword_140EF7B00) = 6;
  }
  return 0LL;
}
