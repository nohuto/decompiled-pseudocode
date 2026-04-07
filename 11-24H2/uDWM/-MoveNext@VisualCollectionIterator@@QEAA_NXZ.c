/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180062FC0
 * Callers:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18008FB6C (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A1630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800EE328 (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MoveNext(VisualCollectionIterator *this)
{
  char v1; // r8

  v1 = *((_BYTE *)this + 17);
  if ( *((_BYTE *)this + 16) )
  {
    if ( !v1 )
      ++*((_DWORD *)this + 3);
  }
  else
  {
    *((_DWORD *)this + 3) = 0;
    *((_BYTE *)this + 16) = 1;
  }
  if ( *((_DWORD *)this + 3) >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
  {
    *((_BYTE *)this + 17) = 1;
    v1 = 1;
  }
  return v1 == 0;
}
