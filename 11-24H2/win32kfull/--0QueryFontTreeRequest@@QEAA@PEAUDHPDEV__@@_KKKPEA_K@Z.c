/*
 * XREFs of ??0QueryFontTreeRequest@@QEAA@PEAUDHPDEV__@@_KKKPEA_K@Z @ 0x140100178
 * Callers:
 *     UmfdQueryFontTree @ 0x1401000F0 (UmfdQueryFontTree.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x140100E58 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

QueryFontTreeRequest *__fastcall QueryFontTreeRequest::QueryFontTreeRequest(
        QueryFontTreeRequest *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  QueryFontTreeRequest *result; // rax

  FontDriverDdiRequest::FontDriverDdiRequest(this, 1LL);
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &QueryFontTreeRequest::`vftable';
  *((_DWORD *)this + 15) = a5;
  *((_QWORD *)this + 8) = a6;
  result = this;
  *((_QWORD *)this + 6) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return result;
}
