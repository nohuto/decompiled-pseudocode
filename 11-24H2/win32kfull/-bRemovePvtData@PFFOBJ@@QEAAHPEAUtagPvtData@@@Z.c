/*
 * XREFs of ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1401FD5D0
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1400B72E8 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1400FDF34 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFFOBJ::bRemovePvtData(PFFOBJ *this, struct tagPvtData *a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // rdi

  v4 = *(_QWORD *)(*(_QWORD *)this + 152LL);
  if ( !v4 )
    return 0LL;
  if ( (struct tagPvtData *)v4 != a2 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)(v4 + 16);
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        return 0LL;
      if ( (struct tagPvtData *)v4 == a2 )
      {
        if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
          PopThreadGuardedObject((char *)a2 + 24);
        *v6 = *((_QWORD *)a2 + 2);
        goto LABEL_6;
      }
    }
  }
  if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
    PopThreadGuardedObject((char *)a2 + 24);
  *(_QWORD *)(*(_QWORD *)this + 152LL) = *((_QWORD *)a2 + 2);
LABEL_6:
  Win32FreePool(a2);
  return 1LL;
}
