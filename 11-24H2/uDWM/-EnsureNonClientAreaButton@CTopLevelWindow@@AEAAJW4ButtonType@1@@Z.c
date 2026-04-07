/*
 * XREFs of ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180030B90
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180030618 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18002FA24 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?SetEnabled@CButton@@QEAAX_N@Z @ 0x180030CD8 (-SetEnabled@CButton@@QEAAX_N@Z.c)
 */

int __fastcall CTopLevelWindow::EnsureNonClientAreaButton(__int64 a1, int a2)
{
  __int64 v2; // r8
  struct CVisual *v3; // rdx
  int v4; // ebx
  __int64 v6; // rsi
  struct CVisual **v7; // r14
  int result; // eax

  v2 = a2;
  v3 = *(struct CVisual **)(a1 + 488 + 8LL * a2);
  v4 = 0;
  v6 = 3 * v2;
  v7 = (struct CVisual **)(a1 + 488 + 8 * v2);
  if ( (dword_180105D78[3 * v2] & *(_DWORD *)(a1 + 584)) != 0 )
  {
    if ( !v3 )
    {
      v4 = CButton::Create((struct CButton **)(a1 + 488 + 8 * v2));
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xAF4u, 0LL);
        return v4;
      }
      v4 = CContainerVisual::AddChild(*(CContainerVisual **)(a1 + 264), *v7);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xAF6u, 0LL);
        return v4;
      }
      *((_DWORD *)*v7 + 32) = dword_180105D78[v6 + 2];
    }
    CButton::SetEnabled(*v7, (dword_180105D78[v6 + 1] & *(_DWORD *)(a1 + 584)) != 0);
    return v4;
  }
  if ( !v3 )
    return v4;
  result = CContainerVisual::RemoveChild(*(CContainerVisual **)(a1 + 264), v3);
  v4 = result;
  if ( result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0xB01u, 0LL);
    return v4;
  }
  if ( *v7 )
  {
    CBaseObject::Release(*v7);
    *v7 = 0LL;
    return v4;
  }
  return result;
}
