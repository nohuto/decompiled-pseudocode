/*
 * XREFs of ?CheckForGesture@ShellEdgyRecognizer@@AEAA?AW4GestureRecognizerState@@XZ @ 0x180095054
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057A1C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F32E8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall ShellEdgyRecognizer::CheckForGesture(__int64 a1)
{
  __int64 v1; // r11
  __int64 result; // rax
  __int64 v4; // rax
  int v5; // r9d
  int v6; // r10d
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  const char *v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 136);
  if ( 1000000LL * *(_QWORD *)(v1 + 24) < *(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32) )
  {
    result = 1LL;
    *(_DWORD *)(a1 + 8) = 1;
    return result;
  }
  v4 = *(_QWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 24);
  if ( (int)((*(_QWORD *)(a1 + 40) - v4) * (*(_QWORD *)(a1 + 40) - v4)
           + (HIDWORD(*(_QWORD *)(a1 + 40)) - HIDWORD(v4)) * (HIDWORD(*(_QWORD *)(a1 + 40)) - HIDWORD(v4))) <= (unsigned __int64)(unsigned int)(*(_DWORD *)(v1 + 4) * *(_DWORD *)(v1 + 4)) )
    return 2LL;
  v7 = *(_DWORD *)(a1 + 4) - 1;
  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    v10 = v5;
    goto LABEL_13;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 2;
    if ( v9 )
    {
      if ( v9 != 4 )
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0x10E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\proce"
                        "ssor\\shelledgyrecognizer.cpp",
          "Unknown Edgy location",
          v11);
      v6 = -v6;
      goto LABEL_10;
    }
    v10 = -v5;
LABEL_13:
    v5 = v6;
    goto LABEL_14;
  }
LABEL_10:
  v10 = v6;
LABEL_14:
  *(_QWORD *)(a1 + 12) = __PAIR64__(v10, v5);
  if ( (float)((float)((float)v5 * *(float *)(v1 + 12)) - (float)(COERCE_FLOAT(*(_DWORD *)(v1 + 8) ^ _xmm) * (float)v10)) < 0.0
    || (float)((float)((float)v5 * *(float *)(v1 + 20)) - (float)((float)v10 * *(float *)(v1 + 16))) > 0.0 )
  {
    *(_DWORD *)(a1 + 8) = 2;
    return 1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    return 3LL;
  }
}
