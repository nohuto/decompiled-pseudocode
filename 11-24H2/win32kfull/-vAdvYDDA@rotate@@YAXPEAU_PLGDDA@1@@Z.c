/*
 * XREFs of ?vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x1401431A0
 * Callers:
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 * Callees:
 *     ?DDA@rotate@@YAXPEAU_DIV_T@1@PEBU_DDA_STEP@1@@Z @ 0x140143320 (-DDA@rotate@@YAXPEAU_DIV_T@1@PEBU_DDA_STEP@1@@Z.c)
 */

void __fastcall rotate::vAdvYDDA(rotate *this, struct rotate::_PLGDDA *a2)
{
  rotate *v2; // r8
  int v3; // r9d
  unsigned int v4; // ecx
  struct rotate::_DIV_T *v5; // r10
  unsigned int v6; // eax
  struct rotate::_DIV_T *v7; // rdi
  int v8; // edx
  unsigned int v9; // r9d
  unsigned int v10; // eax
  int v11; // r11d
  unsigned int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  struct rotate::_DIV_T *v19; // r10

  v2 = this;
  v3 = *((_DWORD *)this + 1) + *((_DWORD *)this + 45);
  *((_DWORD *)this + 1) = v3;
  v4 = *((_DWORD *)this + 2) + *((_DWORD *)this + 46);
  v5 = (rotate *)((char *)v2 + 384);
  v6 = *((_DWORD *)v2 + 47);
  v7 = (rotate *)((char *)v2 + 372);
  *((_DWORD *)v2 + 2) = v4;
  if ( v4 >= v6 )
  {
    *((_DWORD *)v2 + 2) = v4 - v6;
    *((_DWORD *)v2 + 1) = v3 + 1;
    rotate::DDA((rotate *)((char *)v2 + 36), (rotate *)((char *)v2 + 372), v2);
    rotate::DDA((rotate *)(v18 + 44), v19, (const struct rotate::_DDA_STEP *)v18);
  }
  v8 = *((_DWORD *)v2 + 3) + *((_DWORD *)v2 + 48);
  v9 = *((_DWORD *)v2 + 4) + *((_DWORD *)v2 + 49);
  v10 = *((_DWORD *)v2 + 50);
  *((_DWORD *)v2 + 3) = v8;
  *((_DWORD *)v2 + 4) = v9;
  if ( v9 >= v10 )
  {
    *((_DWORD *)v2 + 4) = v9 - v10;
    *((_DWORD *)v2 + 3) = v8 + 1;
    rotate::DDA((rotate *)((char *)v2 + 52), v5, v2);
  }
  v11 = *((_DWORD *)v2 + 5) + *((_DWORD *)v2 + 51);
  v12 = *((_DWORD *)v2 + 6) + *((_DWORD *)v2 + 52);
  v13 = *((_DWORD *)v2 + 53);
  *((_DWORD *)v2 + 5) = v11;
  *((_DWORD *)v2 + 6) = v12;
  if ( v12 >= v13 )
  {
    *((_DWORD *)v2 + 6) = v12 - v13;
    *((_DWORD *)v2 + 5) = v11 + 1;
    rotate::DDA((rotate *)((char *)v2 + 60), v7, v2);
  }
  rotate::DDA((rotate *)((char *)v2 + 28), (rotate *)((char *)v2 + 216), v2);
  rotate::DDA((rotate *)(v14 + 36), (struct rotate::_DIV_T *)(v14 + 276), (const struct rotate::_DDA_STEP *)v14);
  rotate::DDA((rotate *)(v15 + 44), (struct rotate::_DIV_T *)(v15 + 288), (const struct rotate::_DDA_STEP *)v15);
  rotate::DDA((rotate *)(v16 + 52), (struct rotate::_DIV_T *)(v16 + 300), (const struct rotate::_DDA_STEP *)v16);
  rotate::DDA((rotate *)(v17 + 60), (struct rotate::_DIV_T *)(v17 + 312), (const struct rotate::_DDA_STEP *)v17);
}
