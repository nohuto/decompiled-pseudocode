/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x1800AC024
 * Callers:
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x18006B9C8 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        unsigned int a3)
{
  char *v3; // rbx
  __int64 v4; // rsi
  int v6; // edi
  unsigned int v7; // eax
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r9
  struct CAtlasedImage **v12; // rdx
  struct CAtlasedImage **v13; // r9
  struct CAtlasedImage **v15; // [rsp+50h] [rbp+8h] BYREF
  struct CAtlasedImage *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v3 = (char *)this + 248;
  v4 = a3;
  if ( a3 > *((_DWORD *)this + 68) )
  {
    v6 = -2147024809;
    v7 = 451;
    v8 = -2147024809;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v7);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x4Cu);
    return (unsigned int)v6;
  }
  v15 = &v16;
  v6 = DynArrayImpl<0>::Grow((char **)this + 31, 8u, 1, 0, (unsigned __int64 *)&v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    v7 = 461;
    goto LABEL_5;
  }
  v9 = *((unsigned int *)v3 + 6);
  v10 = *(_QWORD *)v3;
  *((_DWORD *)v3 + 6) = v9 + 1;
  if ( (unsigned int)v9 > (unsigned int)v4 )
  {
    v11 = (_QWORD *)(v10 + 8 * v9);
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *v11-- = *(_QWORD *)(v10 + 8 * v9);
    }
    while ( (unsigned int)v9 > (unsigned int)v4 );
  }
  v12 = v15;
  v13 = (struct CAtlasedImage **)(v10 + 8 * v4);
  if ( v15 >= v13 && (unsigned __int64)v15 < v10 + 8 * ((unsigned __int64)*((unsigned int *)v3 + 6) - 1) )
    v12 = ++v15;
  *v13 = *v12;
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  *((_QWORD *)v16 + 10) = this;
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  return (unsigned int)v6;
}
