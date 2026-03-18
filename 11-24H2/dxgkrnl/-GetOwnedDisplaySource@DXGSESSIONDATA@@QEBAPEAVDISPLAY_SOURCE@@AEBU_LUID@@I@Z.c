/*
 * XREFs of ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x140367654
 * Callers:
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1403671F4 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x140367378 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 * Callees:
 *     <none>
 */

struct DISPLAY_SOURCE *__fastcall DXGSESSIONDATA::GetOwnedDisplaySource(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        int a3)
{
  char *v3; // r10
  char *i; // r9
  char *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *j; // rax
  _QWORD *v8; // rcx

  v3 = (char *)this + 18584;
  for ( i = (char *)*((_QWORD *)this + 2323); ; i = *(char **)i )
  {
    if ( i == v3 )
      return 0LL;
    v5 = i - 32;
    if ( *((_DWORD *)i - 6) == a2->LowPart && *((_DWORD *)v5 + 3) == a2->HighPart )
      break;
  }
  if ( i == (char *)32 )
    return 0LL;
  v6 = v5 + 112;
  for ( j = (_QWORD *)*((_QWORD *)v5 + 14); j != v6; j = (_QWORD *)*j )
  {
    v8 = j - 4;
    if ( *((_DWORD *)j - 4) == a3 )
      return (struct DISPLAY_SOURCE *)v8;
  }
  return 0LL;
}
