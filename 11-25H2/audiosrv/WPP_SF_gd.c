/*
 * XREFs of WPP_SF_gd @ 0x180116468
 * Callers:
 *     ?OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x180115790 (-OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_gd(__int64 a1, __int64 a2, __int64 a3, double a4, ...)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
           35LL,
           &v5,
           8LL,
           (__int64 *)va,
           4LL,
           0LL);
}
