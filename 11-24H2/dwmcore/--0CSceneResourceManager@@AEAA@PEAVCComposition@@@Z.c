/*
 * XREFs of ??0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x18024AC84
 * Callers:
 *     ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800EE38C (-Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 */

CSceneResourceManager *__fastcall CSceneResourceManager::CSceneResourceManager(
        CSceneResourceManager *this,
        struct CComposition *a2)
{
  _QWORD *v3; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CSceneResourceManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v3 = operator new(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 8) = v3;
  return this;
}
