/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18002D7F4
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002D2A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002D6C4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
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
  if ( *((_DWORD *)this + 3) >= *(_DWORD *)(*(_QWORD *)this + 40LL) )
  {
    *((_BYTE *)this + 17) = 1;
    v1 = 1;
  }
  return v1 == 0;
}
