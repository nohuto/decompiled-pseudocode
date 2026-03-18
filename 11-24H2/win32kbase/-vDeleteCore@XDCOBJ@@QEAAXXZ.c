/*
 * XREFs of ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140036330
 * Callers:
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x14003CB80 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1400C5560 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     RFONT_vMakeInactive @ 0x1400DDCAC (RFONT_vMakeInactive.c)
 *     HmgFreeFast @ 0x1401C2310 (HmgFreeFast.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall XDCOBJ::vDeleteCore(DC **this)
{
  int (*v2)(void); // rax
  void (__fastcall *v3)(DC **); // rax
  int (*v4)(void); // rax
  __int64 v5; // rdi
  char *v6; // rsi
  __int64 v7; // rbp
  void (__fastcall *v8)(__int64); // rax
  char *v9; // rcx

  RFONT_vMakeInactive(*((_QWORD *)*this + 220));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1200));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1336));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1472));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1608));
  DC::hpath(*this, 0LL);
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2008LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v3 = *(void (__fastcall **)(DC **))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2016LL);
      if ( v3 )
        v3(this);
    }
  }
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1832LL);
  if ( v4 && v4() >= 0 )
  {
    v5 = *((_QWORD *)*this + 259);
    while ( v5 )
    {
      v6 = (char *)v5;
      v5 = *(_QWORD *)(v5 + 8);
      v7 = *(_QWORD *)v6;
      v8 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1840LL);
      if ( v8 )
        v8(v7);
      GreDeleteFastMutex(v6);
    }
  }
  v9 = (char *)*((_QWORD *)*this + 37);
  if ( v9 && v9 != (char *)*this + 264 )
  {
    GreDeleteFastMutex(v9);
    *((_QWORD *)*this + 37) = 0LL;
  }
  HmgFreeFast(this[2], *(_QWORD *)*this);
  *this = 0LL;
}
