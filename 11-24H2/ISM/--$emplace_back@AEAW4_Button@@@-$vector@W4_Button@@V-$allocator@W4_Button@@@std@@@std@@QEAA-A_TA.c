/*
 * XREFs of ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?A_TAEAW4_Button@@@Z @ 0x1801A56CC
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801A5DEC (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Button@@QEAW42@AEAW42@@Z @ 0x180014850 (--$_Emplace_reallocate@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AE.c)
 */

char *__fastcall std::vector<enum _Button>::emplace_back<enum _Button &>(_QWORD *a1, _DWORD *a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // rdx

  v3 = (_BYTE *)a1[1];
  if ( v3 == (_BYTE *)a1[2] )
    return std::vector<enum _Button>::_Emplace_reallocate<enum _Button &>(a1, v3, a2);
  *(_DWORD *)v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 4;
  return (char *)v4;
}
