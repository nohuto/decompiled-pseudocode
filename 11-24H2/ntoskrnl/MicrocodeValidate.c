/*
 * XREFs of MicrocodeValidate @ 0x140664B20
 * Callers:
 *     PrExtControlOperations @ 0x140663EEC (PrExtControlOperations.c)
 * Callees:
 *     GetCpuManufacturer @ 0x140664FCC (GetCpuManufacturer.c)
 */

__int64 __fastcall MicrocodeValidate(int a1)
{
  unsigned __int64 v1; // rax

  dword_140EF7848 = a1;
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
  if ( HIDWORD(xmmword_140EF7830) )
  {
    if ( HIDWORD(xmmword_140EF7830) <= (unsigned int)v1 )
    {
      if ( (_DWORD)xmmword_140EF7830 == (_DWORD)v1 )
      {
        HIDWORD(qword_140EF7840) = 7;
      }
      else
      {
        if ( HIDWORD(xmmword_140EF7830) == (_DWORD)v1
          && (HIDWORD(qword_140EF7840) == 4 || HIDWORD(qword_140EF7840) == 10) )
        {
          HIDWORD(qword_140EF7840) = 0;
        }
        *(_QWORD *)((char *)&xmmword_140EF7830 + 4) = *((_QWORD *)&xmmword_140EF7830 + 1);
      }
    }
    else
    {
      HIDWORD(qword_140EF7840) = 3;
    }
  }
  else
  {
    HIDWORD(qword_140EF7840) = 6;
  }
  return 0LL;
}
