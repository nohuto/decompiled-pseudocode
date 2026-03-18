/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14001DFD0
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x14000D150 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        __int64 a3,
        char a4,
        char a5)
{
  struct HOBJ__ *result; // rax
  int v8; // ecx
  int v9; // edx

  result = 0LL;
  v8 = 2 * (unsigned __int8)a3;
  if ( !*((_QWORD *)this + 4) )
  {
    LOBYTE(a3) = a5;
    v9 = v8 | 8;
    if ( !a4 )
      v9 = v8;
    result = (struct HOBJ__ *)HmgInsertObjectInternal(a2, v9 | 1u, a3);
    if ( result )
      *((_QWORD *)this + 4) = a2;
  }
  return result;
}
