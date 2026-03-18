/*
 * XREFs of ??0QpcTimeConverter@@QEAA@XZ @ 0x1800EEBF4
 * Callers:
 *     ??0CManipulationManager@@IEAA@PEAVCComposition@@@Z @ 0x1800EE994 (--0CManipulationManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800EEA64 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

QpcTimeConverter *__fastcall QpcTimeConverter::QpcTimeConverter(QpcTimeConverter *this)
{
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v4; // rdx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 1000000LL;
  v2.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  if ( QueryPerformanceFrequency(&Frequency) )
    v2 = Frequency;
  for ( *(LARGE_INTEGER *)this = v2; v2.QuadPart > 0x10C6F7A0B5EDuLL; *((_QWORD *)this + 1) = v4 )
  {
    if ( *((_QWORD *)this + 1) < 0xAuLL )
      break;
    v2.QuadPart /= 0xAuLL;
    v4 = *((_QWORD *)this + 1) / 0xAuLL;
    *(LARGE_INTEGER *)this = v2;
  }
  return this;
}
