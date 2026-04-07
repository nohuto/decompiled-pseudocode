/*
 * XREFs of ?UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029B00
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029380 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x1800C49C4 (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateHolographicSlateBounds(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rax
  CHolographicSlate *v4; // rcx
  signed int v5; // r8d
  signed int v6; // edx
  int v7; // eax

  v1 = 0;
  if ( (*((_BYTE *)this + 201) & 2) != 0 && *((_QWORD *)this + 96) )
  {
    v3 = (_DWORD *)*((_QWORD *)this + 89);
    v4 = (CHolographicSlate *)*((_QWORD *)this + 96);
    v5 = v3[62] - v3[60];
    if ( v5 < 0 )
      v5 = 0;
    v6 = v3[61] - v3[59];
    if ( v6 < 0 )
      v6 = 0;
    v7 = CHolographicSlate::SetSize(v4, v6, v5);
    v1 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1E4u, 0LL);
  }
  return v1;
}
