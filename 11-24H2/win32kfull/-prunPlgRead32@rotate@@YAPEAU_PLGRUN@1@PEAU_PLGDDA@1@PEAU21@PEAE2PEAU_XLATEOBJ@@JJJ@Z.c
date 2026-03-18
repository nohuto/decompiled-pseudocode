/*
 * XREFs of ?prunPlgRead32@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14011C9F0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14010DD20 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z @ 0x14011D230 (-prunPumpDDA@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@@Z.c)
 *     ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14011D450 (-vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 */

struct rotate::_PLGRUN *__fastcall rotate::prunPlgRead32(
        rotate *this,
        struct rotate::_PLGDDA *a2,
        struct rotate::_PLGRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  ULONG *v10; // r8
  struct rotate::_PLGDDA *v12; // rdx
  unsigned __int8 *v13; // rdi
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int8 *v17; // rcx
  __int64 v18; // rbp
  unsigned int v19; // ecx
  __int64 v20; // rdi
  struct rotate::_PLGRUN *v21; // r8
  struct rotate::_PLGDDA *v22; // rdx
  rotate *v23; // rcx
  __int64 v24; // r15
  char *v25; // r9
  int v26; // r11d
  unsigned int v27; // edi
  int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // ebp
  int v31; // ecx
  int v32; // r11d
  unsigned int v33; // eax
  unsigned int v34; // ecx
  int v35; // edx
  int v36; // r9d
  int v37; // edx
  unsigned int v38; // edx
  int v39; // r9d
  int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  int v44; // edx
  int v45; // r9d
  int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  int v50; // edx
  int v51; // r9d
  int v52; // edx
  unsigned int v53; // edx
  int v54; // r9d
  int v55; // edx
  unsigned int v56; // edx
  int v57; // r9d
  int v58; // edx
  unsigned int v59; // edx
  int v60; // r9d
  int v61; // edx
  unsigned int v62; // edx
  int v63; // r9d
  unsigned int v64; // edx
  int v65; // r9d
  int v66; // edx
  unsigned int v67; // edx
  int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // r10d
  int v72; // ecx
  int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // edi
  int v77; // r10d
  int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  int v81; // edx
  unsigned __int8 *v82; // rcx
  __int64 v83; // r15
  struct rotate::_PLGRUN *v84; // r8
  __int64 v85; // [rsp+20h] [rbp-48h]
  __int64 v86; // [rsp+28h] [rbp-40h]
  ULONG *v87; // [rsp+80h] [rbp+18h]
  __int64 v88; // [rsp+88h] [rbp+20h]

  v10 = (ULONG *)((char *)a3 + 4 * (int)a6);
  v87 = v10;
  if ( a4 )
  {
    v12 = (struct rotate::_PLGDDA *)(a8 & 0x1F);
    v13 = &a4[4 * ((__int64)a8 >> 5)];
    v14 = *(_DWORD *)v13;
    if ( (_DWORD)a6 != a7 )
    {
      v15 = a8 & 0x1F;
      v16 = (unsigned int)(a7 - (_DWORD)a6);
      if ( pxlo )
      {
        do
        {
          v82 = v13 + 4;
          if ( v15 >= 32 )
            v14 = *(_DWORD *)v82;
          v83 = 0LL;
          if ( v15 < 32 )
          {
            v82 = v13;
            v83 = v15;
          }
          v13 = v82;
          if ( (v14 & dword_140352C90[v83]) != 0 )
          {
            *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
            a2 = rotate::prunPumpDDA(this, a2, v84);
          }
          rotate::vAdvXDDA(this, v12);
          v15 = v83 + 1;
          v10 = ++v87;
          --v16;
        }
        while ( v16 );
      }
      else
      {
        do
        {
          v17 = v13 + 4;
          if ( v15 >= 32 )
            v14 = *(_DWORD *)v17;
          v18 = 0LL;
          if ( v15 < 32 )
          {
            v17 = v13;
            v18 = v15;
          }
          v13 = v17;
          if ( (v14 & dword_140352C90[v18]) != 0 )
          {
            *(_DWORD *)a2 = *v10;
            a2 = rotate::prunPumpDDA(this, a2, (struct rotate::_PLGRUN *)v10);
          }
          rotate::vAdvXDDA(this, v12);
          v15 = v18 + 1;
          v10 = ++v87;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  else if ( (_DWORD)a6 != a7 )
  {
    v19 = a7 - (_DWORD)a6;
    if ( pxlo )
    {
      v20 = v19;
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = rotate::prunPumpDDA(this, a2, v21);
        rotate::vAdvXDDA(v23, v22);
        v10 = ++v87;
        --v20;
      }
      while ( v20 );
    }
    else
    {
      v24 = v19;
      do
      {
        v25 = (char *)a2 + 12;
        *(_DWORD *)a2 = *v10;
        v26 = *((_DWORD *)this + 17);
        v85 = *(_QWORD *)((char *)this + 100);
        v27 = HIDWORD(*(_QWORD *)((char *)this + 108));
        v28 = *(_QWORD *)((char *)this + 108);
        v88 = *(_QWORD *)((char *)this + 116);
        v29 = *(_QWORD *)((char *)this + 124);
        *((_DWORD *)a2 + 1) = v26;
        v86 = v29;
        if ( v26 < *((_DWORD *)this + 19) )
        {
          v71 = HIDWORD(v85);
          v72 = v85;
          do
          {
            if ( v72 < v28 )
            {
              *(_DWORD *)v25 = v72;
              v73 = v28 - v72;
            }
            else
            {
              *(_DWORD *)v25 = v28;
              v73 = v72 - v28;
            }
            *((_DWORD *)v25 + 1) = v73;
            ++*((_DWORD *)a2 + 2);
            v72 += *((_DWORD *)this + 81);
            v71 += *((_DWORD *)this + 82);
            v74 = *((_DWORD *)this + 83);
            if ( v71 >= v74 )
            {
              ++v72;
              v71 -= v74;
            }
            v28 += *((_DWORD *)this + 84);
            v27 += *((_DWORD *)this + 85);
            v75 = *((_DWORD *)this + 86);
            if ( v27 >= v75 )
            {
              ++v28;
              v27 -= v75;
            }
            v25 += 8;
            ++v26;
          }
          while ( v26 < *((_DWORD *)this + 19) );
        }
        v30 = HIDWORD(v88);
        v31 = v88;
        while ( v26 < *((_DWORD *)this + 21) )
        {
          if ( v31 >= v28 )
          {
            *(_DWORD *)v25 = v28;
            v68 = v31 - v28;
          }
          else
          {
            *(_DWORD *)v25 = v31;
            v68 = v28 - v31;
          }
          *((_DWORD *)v25 + 1) = v68;
          ++*((_DWORD *)a2 + 2);
          v31 += *((_DWORD *)this + 87);
          v30 += *((_DWORD *)this + 88);
          v69 = *((_DWORD *)this + 89);
          if ( v30 >= v69 )
          {
            ++v31;
            v30 -= v69;
          }
          v28 += *((_DWORD *)this + 84);
          v27 += *((_DWORD *)this + 85);
          v70 = *((_DWORD *)this + 86);
          if ( v27 >= v70 )
          {
            ++v28;
            v27 -= v70;
          }
          v25 += 8;
          ++v26;
        }
        if ( v26 < *((_DWORD *)this + 23) )
        {
          v76 = HIDWORD(v86);
          v77 = v86;
          do
          {
            if ( v31 < v77 )
            {
              *(_DWORD *)v25 = v31;
              v78 = v77 - v31;
            }
            else
            {
              *(_DWORD *)v25 = v77;
              v78 = v31 - v77;
            }
            *((_DWORD *)v25 + 1) = v78;
            ++*((_DWORD *)a2 + 2);
            v31 += *((_DWORD *)this + 87);
            v30 += *((_DWORD *)this + 88);
            v79 = *((_DWORD *)this + 89);
            if ( v30 >= v79 )
            {
              ++v31;
              v30 -= v79;
            }
            v77 += *((_DWORD *)this + 90);
            v76 += *((_DWORD *)this + 91);
            v80 = *((_DWORD *)this + 92);
            if ( v76 >= v80 )
            {
              ++v77;
              v76 -= v80;
            }
            v25 += 8;
            ++v26;
          }
          while ( v26 < *((_DWORD *)this + 23) );
        }
        v32 = v26 - *((_DWORD *)a2 + 1);
        *((_DWORD *)a2 + 2) = v32;
        if ( *(_DWORD *)this && !v32 )
        {
          if ( v31 >= v28 )
          {
            *(_DWORD *)v25 = v28;
            v81 = v31 - v28;
          }
          else
          {
            *(_DWORD *)v25 = v31;
            v81 = v28 - v31;
          }
          *((_DWORD *)v25 + 1) = v81;
          v25 += 8;
          *((_DWORD *)a2 + 2) = 1;
        }
        a2 = (struct rotate::_PLGDDA *)v25;
        *((_DWORD *)this + 17) += *((_DWORD *)this + 33);
        *((_DWORD *)this + 18) += *((_DWORD *)this + 34);
        v33 = *((_DWORD *)this + 18);
        v34 = *((_DWORD *)this + 35);
        v35 = *((_DWORD *)this + 17);
        if ( v33 >= v34 )
        {
          *((_DWORD *)this + 18) = v33 - v34;
          *((_DWORD *)this + 17) = v35 + 1;
          v36 = *((_DWORD *)this + 25) + *((_DWORD *)this + 93);
          v37 = *((_DWORD *)this + 26);
          *((_DWORD *)this + 25) = v36;
          v38 = *((_DWORD *)this + 94) + v37;
          *((_DWORD *)this + 26) = v38;
          if ( v38 >= *((_DWORD *)this + 95) )
          {
            *((_DWORD *)this + 25) = v36 + 1;
            *((_DWORD *)this + 26) = v38 - *((_DWORD *)this + 95);
          }
          v39 = *((_DWORD *)this + 96) + *((_DWORD *)this + 27);
          v40 = *((_DWORD *)this + 28);
          *((_DWORD *)this + 27) = v39;
          v41 = *((_DWORD *)this + 97) + v40;
          *((_DWORD *)this + 28) = v41;
          if ( v41 >= *((_DWORD *)this + 98) )
          {
            *((_DWORD *)this + 27) = v39 + 1;
            *((_DWORD *)this + 28) = v41 - *((_DWORD *)this + 98);
          }
        }
        *((_DWORD *)this + 19) += *((_DWORD *)this + 36);
        *((_DWORD *)this + 20) += *((_DWORD *)this + 37);
        v42 = *((_DWORD *)this + 20);
        v43 = *((_DWORD *)this + 38);
        v44 = *((_DWORD *)this + 19);
        if ( v42 >= v43 )
        {
          *((_DWORD *)this + 20) = v42 - v43;
          *((_DWORD *)this + 19) = v44 + 1;
          v45 = *((_DWORD *)this + 96) + *((_DWORD *)this + 29);
          v46 = *((_DWORD *)this + 30);
          *((_DWORD *)this + 29) = v45;
          v47 = *((_DWORD *)this + 97) + v46;
          *((_DWORD *)this + 30) = v47;
          if ( v47 >= *((_DWORD *)this + 98) )
          {
            *((_DWORD *)this + 29) = v45 + 1;
            *((_DWORD *)this + 30) = v47 - *((_DWORD *)this + 98);
          }
        }
        *((_DWORD *)this + 21) += *((_DWORD *)this + 39);
        *((_DWORD *)this + 22) += *((_DWORD *)this + 40);
        v48 = *((_DWORD *)this + 22);
        v49 = *((_DWORD *)this + 41);
        v50 = *((_DWORD *)this + 21);
        if ( v48 >= v49 )
        {
          *((_DWORD *)this + 22) = v48 - v49;
          *((_DWORD *)this + 21) = v50 + 1;
          v51 = *((_DWORD *)this + 31) + *((_DWORD *)this + 93);
          v52 = *((_DWORD *)this + 32);
          *((_DWORD *)this + 31) = v51;
          v53 = *((_DWORD *)this + 94) + v52;
          *((_DWORD *)this + 32) = v53;
          if ( v53 >= *((_DWORD *)this + 95) )
          {
            *((_DWORD *)this + 31) = v51 + 1;
            *((_DWORD *)this + 32) = v53 - *((_DWORD *)this + 95);
          }
        }
        v54 = *((_DWORD *)this + 42) + *((_DWORD *)this + 23);
        v55 = *((_DWORD *)this + 24);
        *((_DWORD *)this + 23) = v54;
        v56 = *((_DWORD *)this + 43) + v55;
        *((_DWORD *)this + 24) = v56;
        if ( v56 >= *((_DWORD *)this + 44) )
        {
          *((_DWORD *)this + 23) = v54 + 1;
          *((_DWORD *)this + 24) = v56 - *((_DWORD *)this + 44);
        }
        v57 = *((_DWORD *)this + 57) + *((_DWORD *)this + 25);
        v58 = *((_DWORD *)this + 26);
        *((_DWORD *)this + 25) = v57;
        v59 = *((_DWORD *)this + 58) + v58;
        *((_DWORD *)this + 26) = v59;
        if ( v59 >= *((_DWORD *)this + 59) )
        {
          *((_DWORD *)this + 25) = v57 + 1;
          *((_DWORD *)this + 26) = v59 - *((_DWORD *)this + 59);
        }
        v60 = *((_DWORD *)this + 27) + *((_DWORD *)this + 60);
        v61 = *((_DWORD *)this + 28);
        *((_DWORD *)this + 27) = v60;
        v62 = *((_DWORD *)this + 61) + v61;
        *((_DWORD *)this + 28) = v62;
        if ( v62 >= *((_DWORD *)this + 62) )
        {
          *((_DWORD *)this + 27) = v60 + 1;
          *((_DWORD *)this + 28) = v62 - *((_DWORD *)this + 62);
        }
        v63 = *((_DWORD *)this + 63) + *((_DWORD *)this + 29);
        *((_DWORD *)this + 29) = v63;
        v64 = *((_DWORD *)this + 30) + *((_DWORD *)this + 64);
        *((_DWORD *)this + 30) = v64;
        if ( v64 >= *((_DWORD *)this + 65) )
        {
          *((_DWORD *)this + 29) = v63 + 1;
          *((_DWORD *)this + 30) = v64 - *((_DWORD *)this + 65);
        }
        v65 = *((_DWORD *)this + 31) + *((_DWORD *)this + 66);
        v66 = *((_DWORD *)this + 32);
        *((_DWORD *)this + 31) = v65;
        v67 = *((_DWORD *)this + 67) + v66;
        *((_DWORD *)this + 32) = v67;
        if ( v67 >= *((_DWORD *)this + 68) )
        {
          *((_DWORD *)this + 31) = v65 + 1;
          *((_DWORD *)this + 32) = v67 - *((_DWORD *)this + 68);
        }
        ++v10;
        --v24;
      }
      while ( v24 );
    }
  }
  return a2;
}
