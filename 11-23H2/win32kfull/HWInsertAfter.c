/*
 * XREFs of HWInsertAfter @ 0x1C01A5BE8
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00AF84C (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     LinkWindow @ 0x1C00B5F60 (LinkWindow.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HWInsertAfter(unsigned __int64 a1)
{
  if ( a1 < 2 || a1 == -2LL || a1 == -1LL )
    return a1;
  else
    return *(_QWORD *)a1;
}
