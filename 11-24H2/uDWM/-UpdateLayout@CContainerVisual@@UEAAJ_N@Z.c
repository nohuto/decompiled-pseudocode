/*
 * XREFs of ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x180020BC0
 * Callers:
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180020780 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180020B60 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x1800DB830 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180020CA0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180021010 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVisual::UpdateLayout(CContainerVisual *this, bool a2)
{
  int updated; // eax
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 v7; // r14
  char v8; // bl
  char v9; // bp
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-2Ch]
  char v15; // [rsp+40h] [rbp-28h]
  char v16; // [rsp+41h] [rbp-27h]

  updated = CVisual::UpdateLayout(this, a2);
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2Bu, 0LL);
  }
  else if ( a2 )
  {
    VisualCollection::GetIterator((char *)this + 144, &v13, v5);
    v7 = v13;
    v8 = v16;
    v9 = v15;
    v10 = v14;
    while ( 1 )
    {
      if ( v9 )
      {
        if ( !v8 )
          ++v10;
      }
      else
      {
        v9 = 1;
        v10 = 0;
      }
      if ( v10 >= *(_DWORD *)(v7 + 32) )
        v8 = 1;
      if ( v8 )
        break;
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL * v10);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 2LL);
    }
  }
  return v6;
}
