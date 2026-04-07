/*
 * XREFs of ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18002447C
 * Callers:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800C3E9C (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VisualCollection::Remove(VisualCollection *this, struct CVisualProxy **a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ecx
  __int64 i; // r8
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax

  v2 = 0;
  if ( a2[3] )
  {
    v5 = *((_DWORD *)this + 8);
    for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
    {
      v7 = *((_QWORD *)this + 1);
      if ( *(struct CVisualProxy ***)(v7 + 8 * i) == a2 )
      {
        if ( (_DWORD)i != -1 )
        {
          ++*((_DWORD *)this + 10);
          if ( (unsigned int)i < v5 - 1 )
          {
            do
            {
              v8 = (unsigned int)i;
              v9 = (unsigned int)(i + 1);
              i = v9;
              *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8 * v9);
              v5 = *((_DWORD *)this + 8);
            }
            while ( (unsigned int)v9 < v5 - 1 );
          }
          *((_DWORD *)this + 8) = v5 - 1;
          if ( (*((_BYTE *)a2 + 36) & 4) != 0
            && (v10 = CContainerVisualProxy::RemoveChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2[2]),
                v2 = v10,
                v10 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x12Eu, 0LL);
          }
          else
          {
            (*((void (__fastcall **)(struct CVisualProxy **, _QWORD, __int64))*a2 + 7))(a2, 0LL, i);
            CBaseObject::Release((CBaseObject *)a2);
          }
        }
        return v2;
      }
    }
  }
  return v2;
}
