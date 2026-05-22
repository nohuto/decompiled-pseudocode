/*
 * XREFs of ??0CompliantHapticInterface@@QEAA@_N0@Z @ 0x18018474C
 * Callers:
 *     ??0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z @ 0x180184828 (--0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z.c)
 *     ??0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180188B70 (--0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV-$basic_string@GU-$char_t.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
CompliantHapticInterface *__fastcall CompliantHapticInterface::CompliantHapticInterface(CompliantHapticInterface *this)
{
  char *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  *(_QWORD *)this = -1LL;
  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 16;
  memset_0((char *)this + 16, 0, 0x40uLL);
  v2[136] = 0;
  v2[212] = 0;
  *((_QWORD *)v2 + 27) = 0LL;
  *((_QWORD *)v2 + 28) = 0LL;
  v3 = operator new(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)v2 + 27) = v3;
  v2[320] = 0;
  v2[416] = 0;
  *((_WORD *)this + 220) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  v4 = operator new(0x30uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 56) = v4;
  *((_QWORD *)this + 65) = 0LL;
  return this;
}
