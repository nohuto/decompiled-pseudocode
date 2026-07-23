/*
 * XREFs of HalpErrataApplyPerProcessor @ 0x140B6FE5C
 * Callers:
 *     HalpErrataInitSystem @ 0x140B4F0D0 (HalpErrataInitSystem.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 */

char HalpErrataApplyPerProcessor()
{
  unsigned __int64 v0; // rax
  unsigned __int8 v2[16]; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 v3; // [rsp+40h] [rbp+10h] BYREF
  unsigned __int8 v4; // [rsp+48h] [rbp+18h] BYREF
  char v5; // [rsp+50h] [rbp+20h] BYREF

  v5 = 0;
  v3 = 0;
  v2[0] = 0;
  v4 = 0;
  LOBYTE(v0) = -HalpGetCpuInfo(&v5, v2, &v3, &v4);
  if ( (v4 & (unsigned __int8)-((_BYTE)v0 != 0)) == 1 )
  {
    if ( v5 == 15 )
    {
      v0 = __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL;
      __writemsr(0xC001001F, v0);
    }
    if ( v5 == 18 )
    {
      v0 = __readmsr(0xC0011029) | 0x80000000;
      __writemsr(0xC0011029, v0);
    }
    if ( v5 == 23 && v3 == 1 && v2[0] == 1 )
    {
      v0 = __readmsr(0xC0011023) | 0x100;
      __writemsr(0xC0011023, v0);
    }
    if ( !HalpHvCpuManager && v5 == 23 && v3 <= 0x2Fu )
    {
      v0 = __readmsr(0xC001102C) | 0x8000000000000LL;
      __writemsr(0xC001102C, v0);
    }
  }
  return v0;
}
