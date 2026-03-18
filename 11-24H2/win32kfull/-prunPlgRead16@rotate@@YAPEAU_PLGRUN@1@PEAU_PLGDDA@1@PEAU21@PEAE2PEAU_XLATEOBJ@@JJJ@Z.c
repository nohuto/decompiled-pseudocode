/*
 * XREFs of ?prunPlgRead16@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14031D630
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14010DD20 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14011D230 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14011D450 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead16(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  struct rotate::_PLGDDA *v9; // rdx
  unsigned __int16 *v11; // rdi
  __int64 v12; // rbp
  struct rotate::_PLGDDA *v13; // rdx
  rotate *v14; // rcx
  struct rotate::_PLGRUN *v15; // r8
  struct rotate::_PLGDDA *v16; // rdx
  rotate *v17; // rcx
  unsigned __int8 *v18; // r14
  int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int8 *v22; // rcx
  __int64 v23; // rbp
  struct rotate::_PLGDDA *v24; // rdx
  unsigned __int8 *v25; // rcx
  __int64 v26; // rbp
  struct rotate::_PLGRUN *v27; // r8

  v9 = (struct rotate::_PLGDDA *)(int)a6;
  v11 = (unsigned __int16 *)((char *)a3 + 2 * (int)a6);
  if ( a4 )
  {
    v18 = &a4[4 * ((__int64)a8 >> 5)];
    v19 = *(_DWORD *)v18;
    if ( (_DWORD)a6 != a7 )
    {
      v20 = a8 & 0x1F;
      v21 = (unsigned int)(a7 - (_DWORD)a6);
      if ( pxlo )
      {
        v24 = (struct rotate::_PLGDDA *)dword_140352C90;
        do
        {
          v25 = v18 + 4;
          if ( v20 >= 32 )
            v19 = *(_DWORD *)v25;
          v26 = 0LL;
          if ( v20 < 32 )
          {
            v25 = v18;
            v26 = v20;
          }
          v18 = v25;
          if ( (v19 & *((_DWORD *)v24 + v26)) != 0 )
          {
            *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v11);
            a2 = rotate::prunPumpDDA(this, a2, v27);
            v24 = (struct rotate::_PLGDDA *)dword_140352C90;
          }
          rotate::vAdvXDDA(this, v24);
          ++v11;
          v20 = v26 + 1;
          --v21;
        }
        while ( v21 );
      }
      else
      {
        do
        {
          v22 = v18 + 4;
          if ( v20 >= 32 )
            v19 = *(_DWORD *)v22;
          v23 = 0LL;
          if ( v20 < 32 )
          {
            v22 = v18;
            v23 = v20;
          }
          v18 = v22;
          if ( (v19 & dword_140352C90[v23]) != 0 )
          {
            *(_DWORD *)a2 = *v11;
            a2 = rotate::prunPumpDDA(this, a2, a3);
          }
          rotate::vAdvXDDA(this, v9);
          ++v11;
          v20 = v23 + 1;
          --v21;
        }
        while ( v21 );
      }
    }
  }
  else if ( (_DWORD)a6 != a7 )
  {
    v12 = (unsigned int)(a7 - (_DWORD)a6);
    if ( pxlo )
    {
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v11);
        a2 = rotate::prunPumpDDA(this, a2, v15);
        rotate::vAdvXDDA(v17, v16);
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      do
      {
        *(_DWORD *)a2 = *v11;
        a2 = rotate::prunPumpDDA(this, a2, a3);
        rotate::vAdvXDDA(v14, v13);
        ++v11;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
