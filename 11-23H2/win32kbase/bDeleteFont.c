/*
 * XREFs of bDeleteFont @ 0x1C00C2308
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall bDeleteFont(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0294660;
  if ( qword_1C0294660 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0294660(a1, a2);
  return result;
}
