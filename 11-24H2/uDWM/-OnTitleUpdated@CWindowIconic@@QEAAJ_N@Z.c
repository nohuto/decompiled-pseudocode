/*
 * XREFs of ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800063C4
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180055280 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B614 (-OnTitleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x1800553D0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 */

__int64 __fastcall CWindowIconic::OnTitleUpdated(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  unsigned __int16 *v5; // rdx
  _WORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 9);
  v5 = *(unsigned __int16 **)(v2 + 16);
  if ( !v5 )
  {
    v9 = -2147024809;
    v8 = -2147024809;
LABEL_14:
    v12 = 637;
    goto LABEL_15;
  }
  v6 = *(_WORD **)(v2 + 16);
  v7 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = v7 == 0 ? 0x80070057 : 0;
  v9 = v8;
  if ( !v7 )
    goto LABEL_14;
  v10 = CWindowData::SetTitle(*((CWindowData **)this + 10), v5, v7 != 0 ? 0x7FFFFFFF - v7 : 0);
  v8 = v10;
  if ( v10 < 0 )
  {
    v12 = 639;
    goto LABEL_12;
  }
  CTopLevelWindow::OnTitleUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v10 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
    v8 = v10;
    if ( v10 < 0 )
    {
      v12 = 645;
LABEL_12:
      v9 = v10;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v12, 0LL);
    }
  }
  return v8;
}
