/*
 * XREFs of ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x18006F03C
 * Callers:
 *     ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x18006EFF0 (--_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800264A8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009B9CC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CTopLevelWindow::WindowFrame::~WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  CBaseObject **v4; // rsi
  __int64 v5; // r14
  CBaseObject **v6; // rdi
  __int64 v7; // rbp
  CBaseObject *v8; // rcx

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
  v4 = (CBaseObject **)((char *)this + 1480);
  v5 = 2LL;
  do
  {
    v6 = v4;
    v7 = 22LL;
    do
    {
      if ( *v6 )
      {
        CBaseObject::Release(*v6);
        *v6 = 0LL;
      }
      v6 += 2;
      --v7;
    }
    while ( v7 );
    ++v4;
    --v5;
  }
  while ( v5 );
  v8 = (CBaseObject *)*((_QWORD *)this + 230);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 230) = 0LL;
  }
  `eh vector destructor iterator'(
    (char *)this + 200,
    0x140uLL,
    4uLL,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::~DPIImages);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 21);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 17);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 13);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 5);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 1);
}
