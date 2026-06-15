/*
 * XREFs of WPP_SF_Pi @ 0x1800C02E4
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800BEAB0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pi(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids,
           25LL,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
