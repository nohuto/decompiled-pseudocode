/*
 * XREFs of ??1CHitTestContext@@QEAA@XZ @ 0x180257114
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x180257180 (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall CHitTestContext::~CHitTestContext(void **this)
{
  _QWORD *v2; // rcx

  operator delete(this[24]);
  operator delete(this[21]);
  v2 = this[16];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((_BYTE *)this[18] - (_BYTE *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[16] = 0LL;
    this[17] = 0LL;
    this[18] = 0LL;
  }
  operator delete(this[5]);
}
