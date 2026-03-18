/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x14023B278
 * Callers:
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x140193854 (ApiSetEditionxxxBroadcastSPIChange.c)
 *     UnpackMouseSettings @ 0x140213D04 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x140213DC4 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x140213E98 (UnpackTouchpadSettings.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionxxxBroadcastSPIChange(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  v4 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                            + 3256LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result(v4, 0LL, a3);
  return result;
}
