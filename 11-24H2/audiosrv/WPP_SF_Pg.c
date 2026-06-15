/*
 * XREFs of WPP_SF_Pg @ 0x180115A30
 * Callers:
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z @ 0x1801156B0 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pg(__int64 a1, __int64 a2, __int64 a3, ...)
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
           &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
           36LL,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
