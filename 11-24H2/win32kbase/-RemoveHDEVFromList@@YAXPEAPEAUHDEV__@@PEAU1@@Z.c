/*
 * XREFs of ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x140150AC4
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ?vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0ED0 (-vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveHDEVFromList(HDEV *a1, HDEV a2)
{
  _QWORD *v2; // r8

  v2 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = *(HDEV *)a2;
  }
  else
  {
    while ( v2 )
    {
      if ( (HDEV)*v2 == a2 )
      {
        *v2 = *(_QWORD *)a2;
        return;
      }
      v2 = (_QWORD *)*v2;
    }
  }
}
