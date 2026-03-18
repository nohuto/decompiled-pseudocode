/*
 * XREFs of ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x14002AB4C
 * Callers:
 *     GreDwmGetSurfaceData @ 0x14002A1E4 (GreDwmGetSurfaceData.c)
 * Callees:
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400CFA78 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::GetSoSurfaceData(
        SFMLOGICALSURFACE *this,
        struct tagDWMSURFACEDATA *a2,
        __int64 a3)
{
  __int64 SessionState; // rax
  _DWORD *v6; // r9
  struct _ACCESS_STATE *ObjectType; // r8
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  void *v13; // rcx

  SessionState = W32GetSessionState(this, a2, a3);
  v6 = (_DWORD *)*((_QWORD *)this + 23);
  LODWORD(ObjectType) = 0;
  v8 = *(_QWORD *)(SessionState + 96);
  if ( !v6 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 68);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 69);
    *((_DWORD *)a2 + 3) = 6;
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 1) = v6[8];
  *((_DWORD *)a2 + 2) = v6[9];
  *((_DWORD *)a2 + 3) = v6[18];
  *((_DWORD *)a2 + 4) = v6[16];
  *((_QWORD *)a2 + 3) = SFMLOGICALSURFACE::uiCookie(this);
  if ( *(_DWORD *)(v9 + 72) != 6 )
  {
LABEL_8:
    *(_DWORD *)a2 = (_DWORD)ObjectType;
LABEL_9:
    v11 = *(_QWORD *)(v8 + 4668);
    goto LABEL_6;
  }
  v10 = *((_QWORD *)this + 23);
  if ( !v10 || (*(_DWORD *)(v10 + 92) & 1) == 0 )
  {
    v13 = *(void **)(v9 + 224);
    if ( v13 )
    {
      *(_DWORD *)a2 = 1;
      *((_QWORD *)a2 + 4) = *(_QWORD *)(v8 + 4668);
      LODWORD(ObjectType) = ObOpenObjectByPointer(
                              v13,
                              0,
                              ObjectType,
                              6u,
                              (POBJECT_TYPE)ObjectType,
                              (KPROCESSOR_MODE)ObjectType,
                              (PHANDLE)a2 + 5);
      return (unsigned int)ObjectType;
    }
    goto LABEL_8;
  }
  *(_DWORD *)a2 = 2;
  *((_QWORD *)a2 + 5) = *(_QWORD *)(v9 + 544);
  v11 = *(_QWORD *)(v9 + 552);
LABEL_6:
  *((_QWORD *)a2 + 4) = v11;
  return (unsigned int)ObjectType;
}
