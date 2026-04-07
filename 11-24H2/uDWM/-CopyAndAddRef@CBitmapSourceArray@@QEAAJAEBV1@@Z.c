/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180025180
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18001DECC (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800264A8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  int v8; // r8d

  CBitmapSourceArray::ReleaseContents(this, 0);
  v4 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, *((unsigned int *)a2 + 6), *(_QWORD *)a2);
  v5 = 0;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      do
      {
        CMILRefCountBase::AddRef(*(CMILRefCountBase **)(*(_QWORD *)this + 8LL * v5));
        v5 = v8 + 1;
      }
      while ( v5 < *((_DWORD *)this + 6) );
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x24Eu, 0LL);
  }
  return v6;
}
