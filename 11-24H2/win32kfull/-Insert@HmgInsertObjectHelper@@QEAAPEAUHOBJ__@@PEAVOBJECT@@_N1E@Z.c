/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x140196FB8
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8410 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     EngCreateDriverObj @ 0x14032F500 (EngCreateDriverObj.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14032F900 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     <none>
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
