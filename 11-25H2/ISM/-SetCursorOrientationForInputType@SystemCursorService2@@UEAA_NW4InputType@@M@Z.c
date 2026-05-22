/*
 * XREFs of ?SetCursorOrientationForInputType@SystemCursorService2@@UEAA_NW4InputType@@M@Z @ 0x1800F9230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA?AW4CursorDeviceTypeId@@W4InputType@@@Z @ 0x1800F8760 (-InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA-AW4CursorDeviceTypeId@@W4InputType@@@Z.c)
 *     ?SetOrientationAngle@SystemCursor2@@QEAAJM@Z @ 0x1800F959C (-SetOrientationAngle@SystemCursor2@@QEAAJM@Z.c)
 */

char __fastcall SystemCursorService2::SetCursorOrientationForInputType(__int64 a1, int a2, float a3)
{
  char v4; // si
  int v5; // eax
  _QWORD *v6; // rdi
  int v7; // ebp
  _QWORD *i; // rbx
  SystemCursor2 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = SystemCursorService2::InputTypeToCursorDeviceTypeId(a2);
  v6 = *(_QWORD **)(a1 + 56);
  v7 = v5;
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = (SystemCursor2 *)i[3];
    if ( *((_DWORD *)v9 + 4) == v7 )
    {
      v10 = SystemCursor2::SetOrientationAngle(v9, a3);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)(unsigned int)v10);
      v4 = 1;
    }
  }
  return v4;
}
