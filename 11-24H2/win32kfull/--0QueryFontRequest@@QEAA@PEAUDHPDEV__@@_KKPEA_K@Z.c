/*
 * XREFs of ??0QueryFontRequest@@QEAA@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x140100EEC
 * Callers:
 *     UmfdQueryFont @ 0x140100370 (UmfdQueryFont.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x140100E58 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

QueryFontRequest *__fastcall QueryFontRequest::QueryFontRequest(
        QueryFontRequest *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5)
{
  QueryFontRequest *result; // rax

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)this, 0);
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &QueryFontRequest::`vftable';
  *((_QWORD *)this + 8) = a5;
  result = this;
  *((_QWORD *)this + 6) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return result;
}
