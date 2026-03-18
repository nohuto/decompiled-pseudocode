/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019AB14
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140195458 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x140199F1C (-OpmReset@ADAPTER_DISPLAY@@AEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019AC90 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F0464 (-Reset@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x14025A168 (-DmmReset@@YAXPEAX@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140282CF8 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x14030650C (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(void **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  unsigned int i; // edi
  struct _TDR_RECOVERY_CONTEXT *v4; // rdx
  void **j; // rax
  DXGPROTECTEDSESSION *k; // rdi
  _QWORD *v7; // rdi
  unsigned int m; // esi
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  DmmReset(this[2]);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 78), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)((char *)this[16] + 4024 * i), v4);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  }
  IterateOutputDuplMgrsForRender(
    (struct DXGADAPTER *)this[2],
    (int (*)(struct OUTPUTDUPL_MGR *, void *))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  ADAPTER_DISPLAY::OpmReset((ADAPTER_DISPLAY *)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  for ( j = (void **)this[10]; j != this + 10 && j; j = (void **)*j )
    *((_DWORD *)j + 14) = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 85));
  for ( k = (DXGPROTECTEDSESSION *)this[91]; k != (DXGPROTECTEDSESSION *)(this + 91) && k; k = *(DXGPROTECTEDSESSION **)k )
    DXGPROTECTEDSESSION::Reset(k);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 85);
  v7 = this[58];
  if ( v7 )
  {
    for ( m = 0; m < *(_DWORD *)v7; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(v7[1] + 3040LL * m), 0);
  }
  v9 = this + 117;
  v10 = 2LL;
  do
  {
    *(v9 - 1) = 0LL;
    *v9 = 0LL;
    v9 += 10;
    --v10;
  }
  while ( v10 );
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  return 0LL;
}
