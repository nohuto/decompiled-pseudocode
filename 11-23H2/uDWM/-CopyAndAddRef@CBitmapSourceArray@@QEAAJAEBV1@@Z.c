/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800AC354
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107224 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180050CC0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx

  CBitmapSourceArray::ReleaseContents(this, 0);
  v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8, *((_DWORD *)a2 + 6), *(_QWORD *)a2);
  v5 = 0;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      do
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)this + 8LL * v5++) + 8LL));
      while ( v5 < *((_DWORD *)this + 6) );
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x238u);
  }
  return v6;
}
