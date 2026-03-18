/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140174424
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this, __int64 a2)
{
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(SFMLOGICALSURFACEREF *); // rax

  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this, a2) + 24) + 752LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(void (__fastcall **)(SFMLOGICALSURFACEREF *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 760LL);
      if ( v6 )
        v6(this);
    }
  }
  PopThreadGuardedObject(this);
}
