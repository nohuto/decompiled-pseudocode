/*
 * XREFs of ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x1800106CC
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18000FA10 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180026184 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::InsertAt(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // xmm1_8
  __int128 v14; // xmm0
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = a2;
  v5 = DynArrayImpl<0>::Grow((_DWORD)a1, 28, 1, a4, (__int64)&v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1CBu, 0LL);
  }
  else
  {
    v7 = *((unsigned int *)a1 + 6);
    v8 = *a1;
    *((_DWORD *)a1 + 6) = v7 + 1;
    if ( (_DWORD)v7 )
    {
      v11 = v8 + 28 * v7;
      do
      {
        LODWORD(v7) = v7 - 1;
        v12 = 28LL * (unsigned int)v7;
        v13 = *(_QWORD *)(v12 + v8 + 16);
        v14 = *(_OWORD *)(v12 + v8);
        LODWORD(v12) = *(_DWORD *)(v12 + v8 + 24);
        *(_OWORD *)v11 = v14;
        *(_QWORD *)(v11 + 16) = v13;
        *(_DWORD *)(v11 + 24) = v12;
        v11 -= 28LL;
      }
      while ( (_DWORD)v7 );
    }
    v9 = v15;
    if ( v15 >= v8 && v15 < v8 + 28LL * *((unsigned int *)a1 + 6) - 28 )
      v9 = v15 + 28;
    *(_OWORD *)v8 = *(_OWORD *)v9;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(v9 + 16);
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(v9 + 24);
  }
  return v6;
}
