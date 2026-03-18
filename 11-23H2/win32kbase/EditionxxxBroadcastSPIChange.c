/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x1C0232F5C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 *     UnpackMouseSettings @ 0x1C01E995C (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01E99F0 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x1C01E9A7C (UnpackTouchpadSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall EditionxxxBroadcastSPIChange(__int64 a1))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0295D50;
  if ( qword_1C0295D50 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0295D50(a1, 0LL);
  return result;
}
