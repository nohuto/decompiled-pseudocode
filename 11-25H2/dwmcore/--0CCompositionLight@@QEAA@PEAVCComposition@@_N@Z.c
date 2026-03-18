/*
 * XREFs of ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180228610
 * Callers:
 *     ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x180228480 (--0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x1802284E8 (--0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x18022853C (--0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x1802A1FF4 (--0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x1802B4848 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     <none>
 */

CCompositionLight *__fastcall CCompositionLight::CCompositionLight(
        CCompositionLight *this,
        struct CComposition *a2,
        char a3)
{
  CCompositionLight *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CCompositionLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 11) = (char *)this + 120;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_DWORD *)this + 26) = 1;
  *(_QWORD *)((char *)this + 108) = 1LL;
  *((_QWORD *)this + 16) = (char *)this + 160;
  *((_QWORD *)this + 17) = (char *)this + 160;
  result = this;
  *((_DWORD *)this + 36) = 1;
  *(_QWORD *)((char *)this + 148) = 1LL;
  *((_BYTE *)this + 168) = 1;
  *((_BYTE *)this + 169) = a3;
  *((_BYTE *)this + 170) = 1;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_WORD *)this + 126) = 0;
  return result;
}
