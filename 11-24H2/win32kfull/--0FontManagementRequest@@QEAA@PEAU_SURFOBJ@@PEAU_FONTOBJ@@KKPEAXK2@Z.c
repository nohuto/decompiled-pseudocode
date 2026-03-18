/*
 * XREFs of ??0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140101BD4
 * Callers:
 *     UmfdFontManagement @ 0x140101B50 (UmfdFontManagement.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x140100E58 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

FontManagementRequest *__fastcall FontManagementRequest::FontManagementRequest(
        FontManagementRequest *this,
        struct _SURFOBJ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8)
{
  FontManagementRequest *result; // rax

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)this, 13);
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &FontManagementRequest::`vftable';
  *((_DWORD *)this + 22) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 15) = a5;
  *((_QWORD *)this + 8) = a6;
  *((_DWORD *)this + 18) = a7;
  *((_QWORD *)this + 10) = a8;
  result = this;
  *((_QWORD *)this + 6) = a3;
  *((_DWORD *)this + 14) = a4;
  return result;
}
