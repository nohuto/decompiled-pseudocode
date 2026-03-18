/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870
 * Callers:
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x14003E0F8 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     IsvDisableSynchronizeSupported @ 0x14003DBD4 (IsvDisableSynchronizeSupported.c)
 *     vDisableSynchronize @ 0x14003DC4C (vDisableSynchronize.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x14003DC88 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x14003DCC4 (-bAllowDDICall@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall PDEVOBJ::vDisableSurface(PDEVOBJ *this, char a2)
{
  __int64 v2; // rbx
  int (*v5)(void); // rax
  struct SURFACE *v6; // rdx
  void (__fastcall *v7)(_QWORD); // rax
  int v8; // eax
  struct _BASEOBJECT *v9; // rcx
  __int64 v10; // rsi
  void (__fastcall *v11)(__int64); // rax
  _BYTE v12[32]; // [rsp+20h] [rbp-48h] BYREF
  struct _BASEOBJECT *v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v14 = v2;
  if ( (*(_DWORD *)(v2 + 40) & 0x80000) == 0 && (int)IsvDisableSynchronizeSupported() >= 0 )
    vDisableSynchronize(*(_QWORD *)this);
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1800LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v10 = *(_QWORD *)this;
      v11 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1808LL);
      if ( v11 )
        v11(v10);
    }
  }
  v6 = *(struct SURFACE **)(*(_QWORD *)this + 2544LL);
  if ( v6 && a2 )
  {
    SURFREF::SURFREF((SURFREF *)v12, v6);
    HmgDecrementShareReferenceCountEx(*(struct _BASEOBJECT **)(*(_QWORD *)this + 2544LL), 0LL);
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = 0LL;
    if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v14) )
    {
      HmgDecrementShareReferenceCountEx(v13, 0LL);
      v13 = 0LL;
      v7 = *(void (__fastcall **)(_QWORD))(v2 + 2712);
      if ( v7 )
        v7(*(_QWORD *)(*(_QWORD *)this + 1784LL));
    }
    else
    {
      v8 = SURFACE::bDeleteSurface((__int64)v13, 0, 0);
      v9 = v13;
      if ( v8 )
        v9 = 0LL;
      v13 = v9;
    }
    SURFREF::~SURFREF((SURFREF *)v12);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = 0LL;
  }
}
