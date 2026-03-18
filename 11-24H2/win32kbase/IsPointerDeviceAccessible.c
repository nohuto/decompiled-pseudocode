/*
 * XREFs of IsPointerDeviceAccessible @ 0x140162460
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401A67CC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     IsTouchpadCapable @ 0x1401A6820 (IsTouchpadCapable.c)
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagTHREADINFO *v2; // rdi

  v1 = 1;
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    v2 = PtiCurrent(a1);
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
    {
      return (unsigned int)IsTouchpadCapable(v2, 0LL);
    }
    else if ( (*((_QWORD *)v2 + 170) & 0x2000002000LL) == 0 && !*((_WORD *)v2 + 633) )
    {
      return *((_WORD *)v2 + 632) != 0;
    }
  }
  return v1;
}
