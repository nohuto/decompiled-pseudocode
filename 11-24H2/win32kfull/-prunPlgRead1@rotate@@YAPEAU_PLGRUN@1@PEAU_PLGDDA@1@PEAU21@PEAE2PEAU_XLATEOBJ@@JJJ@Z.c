/*
 * XREFs of ?prunPlgRead1@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14031D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14011D230 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14011D450 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead1(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  int v8; // edi
  unsigned int v9; // ebx
  _DWORD *v10; // r14
  int v11; // r10d
  unsigned __int64 v12; // r8
  int v13; // r11d
  unsigned int *v14; // rax
  __int64 v15; // rbp
  int v16; // eax
  struct rotate::_PLGDDA *v17; // rax
  rotate *v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // r9
  _DWORD *v21; // rax
  int v22; // ecx
  bool v23; // zf
  int v24; // esi
  unsigned __int8 *v25; // r13
  int v26; // ecx
  __int64 v27; // r15
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // r11
  int v33; // ecx
  _DWORD *v34; // rax
  unsigned __int8 *v35; // rax
  rotate *v37; // [rsp+60h] [rbp+8h]
  int v38; // [rsp+70h] [rbp+18h]
  int v39; // [rsp+78h] [rbp+20h]
  unsigned int v40; // [rsp+80h] [rbp+28h]
  int v41; // [rsp+88h] [rbp+30h]

  v37 = this;
  v8 = (int)a6;
  v9 = (unsigned __int8)a6 & 0x1F;
  v10 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 5));
  v11 = *v10;
  v41 = *v10;
  if ( a5 )
  {
    v14 = (unsigned int *)*((_QWORD *)a5 + 2);
    v12 = *v14;
    v13 = v14[1];
  }
  else
  {
    v12 = 0LL;
    v13 = 1;
  }
  v38 = v13;
  v40 = v12;
  v15 = v9;
  if ( a4 )
  {
    v24 = a8 & 0x1F;
    v25 = &a4[4 * ((__int64)a8 >> 5)];
    v26 = *(_DWORD *)v25;
    v39 = *(_DWORD *)v25;
    if ( v8 < a7 )
    {
      v27 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v26 & dword_140352C90[v27]) != 0 )
        {
          v28 = v13;
          if ( (v11 & dword_140352C90[v15]) == 0 )
            v28 = v12;
          *(_DWORD *)a2 = v28;
          a2 = rotate::prunPumpDDA(v37, a2, (struct rotate::_PLGRUN *)v12);
        }
        rotate::vAdvXDDA(v37, a2);
        ++v8;
        v29 = v9 + 1;
        v30 = v15 + 1;
        v31 = v24 + 1;
        v32 = v27 + 1;
        if ( v8 >= a7 )
          break;
        v33 = v29 & 0x20;
        if ( (v29 & 0x20) != 0 )
          v11 = v10[1];
        v15 = 0LL;
        if ( (v29 & 0x20) == 0 )
          v15 = v30;
        v9 = 0;
        if ( (v29 & 0x20) == 0 )
          v9 = v29;
        v34 = v10 + 1;
        if ( !v33 )
          v34 = v10;
        v10 = v34;
        if ( (v31 & 0x20) != 0 )
        {
          v26 = *((_DWORD *)v25 + 1);
          v39 = v26;
        }
        else
        {
          v26 = v39;
        }
        v35 = v25 + 4;
        if ( (v31 & 0x20) == 0 )
          v35 = v25;
        v24 = 0;
        v25 = v35;
        if ( (v31 & 0x20) == 0 )
          v24 = v31;
        v27 = 0LL;
        v12 = v40;
        if ( (v31 & 0x20) == 0 )
          v27 = v32;
        v13 = v38;
      }
    }
  }
  else if ( v8 < a7 )
  {
    while ( 1 )
    {
      v16 = v13;
      if ( (v11 & dword_140352C90[v15]) == 0 )
        v16 = v12;
      *(_DWORD *)a2 = v16;
      v17 = rotate::prunPumpDDA(this, a2, (struct rotate::_PLGRUN *)v12);
      rotate::vAdvXDDA(v18, v17);
      ++v8;
      v19 = v9 + 1;
      v20 = v15 + 1;
      if ( v8 >= a7 )
        break;
      v21 = v10 + 1;
      v22 = v19 & 0x20;
      if ( (v19 & 0x20) != 0 )
      {
        v11 = *v21;
        v41 = *v21;
      }
      else
      {
        v11 = v41;
      }
      v13 = v38;
      if ( (v19 & 0x20) == 0 )
        v21 = v10;
      v9 = 0;
      v10 = v21;
      if ( (v19 & 0x20) == 0 )
        v9 = v19;
      v12 = v40;
      v15 = 0LL;
      v23 = v22 == 0;
      this = v37;
      if ( v23 )
        v15 = v20;
    }
  }
  return a2;
}
