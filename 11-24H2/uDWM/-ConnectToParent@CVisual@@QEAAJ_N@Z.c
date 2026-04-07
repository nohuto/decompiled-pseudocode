/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180023BDC
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x180021CA8 (-CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x180023A10 (-CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  unsigned int v3; // ebx
  VisualCollection *v6; // rcx
  int v7; // eax
  int v8; // eax

  v3 = 0;
  if ( ((*((_BYTE *)this + 36) & 4) != 0) != a2 )
  {
    *((_BYTE *)this + 36) = (4 * a2) | *((_BYTE *)this + 36) & 0xFB;
    v6 = (VisualCollection *)(*((_QWORD *)this + 3) + 144LL);
    if ( a2 )
    {
      v8 = VisualCollection::CompNodeReconnectChild(v6, (struct CVisualProxy **)this);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x365u, 0LL);
    }
    else
    {
      v7 = VisualCollection::CompNodeDisconnectChild(v6, (struct CVisualProxy **)this);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x369u, 0LL);
    }
  }
  return v3;
}
