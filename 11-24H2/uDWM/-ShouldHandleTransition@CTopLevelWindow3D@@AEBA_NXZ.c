/*
 * XREFs of ?ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800641CC
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180063B2C (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::ShouldHandleTransition(CTopLevelWindow3D *this)
{
  unsigned int v1; // eax
  int v2; // ecx
  bool result; // al

  v1 = *((_DWORD *)this + 85);
  result = (v1 > 0xD || (v2 = 12308, !_bittest(&v2, v1))) && v1 != 18;
  return result;
}
