/*
 * XREFs of ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800C7418
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C6DC0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLivePreview::_CleanupClonedVisualTree(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 59) + 32LL));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 60) + 32LL));
    v3 = v4;
    if ( v4 >= 0 )
    {
      *((_DWORD *)this + 108) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 408, 0x10u);
      v5 = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 61) + 32LL));
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 61));
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x685u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x684u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x682u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x681u);
  }
  return v3;
}
