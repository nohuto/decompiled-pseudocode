/*
 * XREFs of ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x180050AB8
 * Callers:
 *     ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x1800526C0 (--_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180050CC0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005CC0C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::WindowFrame::~WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  char *v4; // rsi
  __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rcx
  CBaseObject *v9; // rcx

  *(_QWORD *)this = &CTopLevelWindow::WindowFrame::`vftable';
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 8), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 40), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 72), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 104), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 136), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 168), 1);
  v2 = (char *)this + 232;
  v3 = 4LL;
  do
  {
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 - 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)v2, 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 64), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 96), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 128), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 160), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 192), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 224), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 256), 1);
    v2 += 320;
    --v3;
  }
  while ( v3 );
  v4 = (char *)this + 1480;
  v5 = 2LL;
  do
  {
    v6 = (__int64 *)v4;
    v7 = 22LL;
    do
    {
      v8 = *v6;
      if ( *v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
        *v6 = 0LL;
      }
      v6 += 2;
      --v7;
    }
    while ( v7 );
    v4 += 8;
    --v5;
  }
  while ( v5 );
  v9 = (CBaseObject *)*((_QWORD *)this + 230);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 230) = 0LL;
  }
  `eh vector destructor iterator'(
    (char *)this + 200,
    0x140uLL,
    4uLL,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::~DPIImages);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 168);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 136);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 8);
}
