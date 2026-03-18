/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CFC34
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CF118 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A3128 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400CFC10 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1401AA1FC (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1401FEEEC (-RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x14031F46C (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memcmp @ 0x140340360 (memcmp.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v4; // rbp
  RGNOBJ *v7; // r14
  _BYTE *v8; // rdi
  unsigned int v9; // r8d
  __int64 v10; // rcx
  LONG *p_top; // r9
  __int64 i; // rdx
  __int64 v13; // r11
  __int64 v14; // rax
  struct SCAN *v15; // rbx
  unsigned int *v16; // rsi
  int v17; // r8d
  __int64 v18; // rax
  LONG top; // edx
  __int64 v20; // r15
  int v21; // r13d
  int sizeScan; // eax
  __int64 v23; // rbp
  int v24; // r12d
  const struct REGION_CORE *v25; // rdx
  signed int sizeScanAlloc; // eax
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rdx
  LONG v30; // r12d
  __int64 v31; // r8
  LONG v32; // edx
  __int64 v33; // rcx
  int v34; // r14d
  int *v35; // rax
  __int64 v36; // r10
  int v37; // r9d
  int v38; // r11d
  int v39; // r13d
  int v40; // edi
  _DWORD *v41; // rbp
  _DWORD *v42; // r8
  int v43; // ebx
  _DWORD *v44; // r12
  int v45; // r15d
  __int64 v46; // rax
  int v47; // ecx
  LONG bottom; // ebp
  int v49; // eax
  unsigned int v50; // eax
  _QWORD *v51; // rbx
  unsigned int v52; // r12d
  unsigned int v53; // r8d
  unsigned __int64 v54; // rcx
  int v55; // ecx
  int v56; // ecx
  int v57; // r14d
  __int64 v58; // rbx
  int v59; // eax
  struct SCAN *v60; // rax
  int v61; // ebx
  signed __int64 v63; // rsi
  int v64; // r11d
  LONG v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r9
  unsigned __int64 v68; // rcx
  _BYTE *v69; // rcx
  unsigned int v70; // [rsp+20h] [rbp-408h]
  int v71; // [rsp+24h] [rbp-404h]
  __int64 v72; // [rsp+28h] [rbp-400h]
  LONG v73; // [rsp+30h] [rbp-3F8h]
  int v74; // [rsp+34h] [rbp-3F4h]
  int v75; // [rsp+38h] [rbp-3F0h]
  __int128 v76; // [rsp+40h] [rbp-3E8h]
  __int128 v77; // [rsp+40h] [rbp-3E8h]
  __int64 v78; // [rsp+50h] [rbp-3D8h]
  LONG v79; // [rsp+64h] [rbp-3C4h]
  __int64 v81; // [rsp+70h] [rbp-3B8h]
  _DWORD *v82; // [rsp+78h] [rbp-3B0h]
  struct SCAN *pScan; // [rsp+80h] [rbp-3A8h]
  __int64 v84; // [rsp+88h] [rbp-3A0h]
  _BYTE *v86; // [rsp+98h] [rbp-390h]
  __int64 v87; // [rsp+A0h] [rbp-388h]
  _DWORD v89[4]; // [rsp+B0h] [rbp-378h] BYREF
  _BYTE v90[800]; // [rsp+C0h] [rbp-368h] BYREF

  v4 = a4;
  v7 = this;
  memset_0(v90, 0, sizeof(v90));
  if ( (int)v4 < 100 )
  {
    v8 = v90;
    v86 = v90;
LABEL_3:
    v9 = 0;
    if ( (int)v4 > 0 )
    {
      v10 = 0LL;
      p_top = &a3->top;
      do
      {
        for ( i = v10; i; *(_QWORD *)&v8[8 * i--] = v13 )
        {
          v13 = *(_QWORD *)&v8[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v13 + 4) )
            break;
        }
        ++v10;
        v14 = v9++;
        p_top += 4;
        *(_QWORD *)&v8[8 * i] = &a3[v14];
      }
      while ( v10 < v4 );
    }
    v89[1] = a2->bottom;
    v89[0] = 0;
    v89[2] = 0;
    v89[3] = 0x7FFFFFFF;
    *(_QWORD *)&v8[8 * v4] = v89;
    pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
    v15 = pScan;
    *((_QWORD *)pScan + 1) = 0x7FFFFFFFLL;
    v16 = (unsigned int *)((char *)pScan + 16);
    *(_DWORD *)pScan = 0;
    *((_DWORD *)pScan + 1) = 0x80000000;
    REGION_CORE::set_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL), (struct REGION_CORE *)0x10);
    v17 = 0;
    v71 = 0;
    *(_DWORD *)(*(_QWORD *)v7 + 48LL) = 1;
    v18 = *(_QWORD *)v7;
    *(_QWORD *)(v18 + 52) = 0x7FFFFFFFLL;
    *(_DWORD *)(v18 + 60) = 0x80000000;
    *(_DWORD *)(v18 + 64) = 0;
    top = a2->top;
    v73 = top;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 12LL) <= top )
    {
      v69 = v8;
      do
      {
        v69 += 8;
        ++v17;
      }
      while ( *(_DWORD *)(*(_QWORD *)v69 + 12LL) <= top );
      v71 = v17;
    }
    v20 = v17;
    v84 = v17;
    v78 = v17;
    while ( 1 )
    {
      v21 = v4 - v17;
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
      v23 = *(_QWORD *)v7;
      v24 = sizeScan + 40 + 8 * v21;
      if ( IsBaseRustExportsEnabled<1>() )
        sizeScanAlloc = Win32kRS::RegionCore_get_sizeScanAlloc((Win32kRS *)(v23 + 24), v25);
      else
        sizeScanAlloc = *(_DWORD *)(v23 + 32);
      if ( v24 > sizeScanAlloc )
      {
        v63 = (char *)v16 - (char *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
        if ( !RGNOBJ::bExpand(v7, v24 + 4 * v21 * (v21 + 4)) )
        {
          if ( v8 != v90 )
            Win32FreePool(v8);
          return 0LL;
        }
        v16 = (unsigned int *)((char *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) + v63);
        v15 = (struct SCAN *)&v16[-*(v16 - 1) - 4];
        pScan = v15;
      }
      v27 = 2LL;
      v28 = v78;
      v70 = 2;
      v16[3] = a2->left;
      v16[4] = a2->right;
      v29 = *(_QWORD *)&v8[8 * v20];
      v72 = 2LL;
      v30 = *(_DWORD *)(v29 + 4);
      if ( v30 <= v73 )
      {
        v31 = *(_QWORD *)&v8[8 * v78];
        v32 = *(_DWORD *)(v29 + 12);
        if ( *(_DWORD *)(v31 + 4) <= v73 )
        {
          v64 = v71;
          do
          {
            v65 = v32;
            v66 = v28;
            v32 = *(_DWORD *)(v31 + 12);
            if ( v32 >= v65 )
              v32 = v65;
            if ( v28 > v20 )
            {
              do
              {
                v67 = *(_QWORD *)&v8[8 * v66 - 8];
                if ( *(_DWORD *)(v31 + 12) >= *(_DWORD *)(v67 + 12) )
                  break;
                *(_QWORD *)&v8[8 * v66--] = v67;
              }
              while ( v66 > v20 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v66] + 12LL) <= v73 )
            {
              ++v64;
              ++v20;
            }
            else
            {
              *(_QWORD *)&v8[8 * v66] = v31;
            }
            ++v28;
            v31 = *(_QWORD *)&v8[8 * v28];
          }
          while ( *(_DWORD *)(v31 + 4) <= v73 );
          v71 = v64;
          v78 = v28;
          v84 = v20;
        }
        v33 = v20;
        v87 = v20;
        v30 = *(_DWORD *)(*(_QWORD *)&v8[8 * v28] + 4LL);
        if ( v30 >= v32 )
          v30 = v32;
        v79 = v30;
        if ( v20 < v28 )
        {
          v34 = 2;
          while ( 1 )
          {
            v35 = *(int **)&v8[8 * v33];
            v36 = 0LL;
            v81 = 0LL;
            v37 = *v35;
            v38 = v35[2];
            v74 = *v35;
            v75 = v38;
            if ( v27 <= 0 )
              goto LABEL_32;
            v39 = 0;
            v40 = 3;
            v41 = v16 + 4;
            v42 = v16 + 3;
            v43 = 1;
            v44 = v16 + 5;
            v45 = 2;
            v82 = v16 + 3;
            v46 = v72;
            do
            {
              if ( v37 >= *v41 )
                goto LABEL_30;
              if ( v38 <= *v42 )
                break;
              v47 = v37 <= *v42;
              if ( v38 >= *v41 )
                v47 += 2;
              if ( v47 )
              {
                v55 = v47 - 1;
                if ( !v55 )
                {
                  *v42 = v38;
                  goto LABEL_29;
                }
                v56 = v55 - 1;
                if ( v56 )
                {
                  if ( v56 == 1 )
                  {
                    memmove(&v16[v39 + 3], &v16[v45 + 3], 4LL * (v34 - v39 - 2));
                    v34 -= 2;
                    v36 = v81 - 2;
                    v72 -= 2LL;
                    v42 = v82 - 2;
                    v37 = v74;
                    v39 -= 2;
                    v38 = v75;
                    v45 -= 2;
                    v43 -= 2;
                    v40 -= 2;
                    v41 -= 2;
                    v44 -= 2;
                  }
                  goto LABEL_29;
                }
              }
              else
              {
                memmove(&v16[v40 + 3], &v16[v43 + 3], 4LL * (v34 - v39 - 1));
                v38 = v75;
                v34 += 2;
                v72 += 2LL;
                v37 = v74;
                v42 = v82;
                v36 = v81;
                *v44 = v75;
              }
              *v41 = v37;
LABEL_29:
              v46 = v72;
LABEL_30:
              v36 += 2LL;
              v42 += 2;
              v39 += 2;
              v81 = v36;
              v45 += 2;
              v82 = v42;
              v43 += 2;
              v40 += 2;
              v41 += 2;
              v44 += 2;
            }
            while ( v36 < v46 );
            v8 = v86;
            v28 = v78;
            v33 = v87;
            v27 = v72;
            v70 = v34;
LABEL_32:
            v87 = ++v33;
            if ( v33 >= v28 )
            {
              v15 = pScan;
              v7 = this;
              v20 = v84;
              v30 = v79;
              break;
            }
          }
        }
      }
      bottom = a2->bottom;
      if ( v30 <= bottom )
        bottom = v30;
      if ( *(_DWORD *)v15 == v70 && !memcmp((char *)v15 + 12, v16 + 3, 4LL * v70) )
      {
        *((_DWORD *)v15 + 2) = bottom;
      }
      else
      {
        if ( v70 )
        {
          v49 = _mm_cvtsi128_si32(*(__m128i *)(*(_QWORD *)v7 + 52LL));
          v76 = *(_OWORD *)(*(_QWORD *)v7 + 52LL);
          if ( (int)v16[3] < v49 )
            v49 = v16[3];
          LODWORD(v76) = v49;
          v50 = *(_QWORD *)(*(_QWORD *)v7 + 60LL);
          if ( (int)v16[v72 + 2] > SDWORD2(v76) )
            v50 = v16[v72 + 2];
          DWORD2(v76) = v50;
          *(_OWORD *)(*(_QWORD *)v7 + 52LL) = v76;
        }
        ++*(_DWORD *)(*(_QWORD *)v7 + 48LL);
        *v16 = v70;
        v51 = *(_QWORD **)v7;
        v52 = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) + 4 * (v70 + 4);
        if ( IsBaseRustExportsEnabled<1>() )
        {
          Win32kRS::RegionCore_set_sizeScan((Win32kRS *)(v51 + 3), (struct REGION_CORE *)v52, v53);
        }
        else
        {
          v54 = v51[4];
          v51[5] = v52;
          if ( v54 < v52 )
          {
            v51[5] = v54;
            RgnCaptureLiveMemoryDumpOnInvalidSizedScan();
          }
        }
        v15 = (struct SCAN *)v16;
        v16[1] = v73;
        v16[2] = bottom;
        pScan = (struct SCAN *)v16;
        v16[v72 + 3] = v70;
        v16 += *v16 + 4;
      }
      v73 = bottom;
      if ( v20 < v28 )
      {
        v57 = v71;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v20] + 12LL) > bottom )
            break;
          ++v57;
          ++v20;
        }
        while ( v20 < v28 );
        v71 = v57;
        v7 = this;
        v84 = v20;
      }
      if ( bottom >= a2->bottom )
      {
        if ( *(_DWORD *)(*(_QWORD *)v7 + 48LL) == 1 )
        {
          *(_OWORD *)(*(_QWORD *)v7 + 52LL) = 0LL;
          *((_DWORD *)v15 + 2) = 0x7FFFFFFF;
        }
        else
        {
          if ( *(_DWORD *)v15 )
          {
            v16[1] = *((_DWORD *)v15 + 2);
            ++*(_DWORD *)(*(_QWORD *)v7 + 48LL);
            *v16 = 0;
            v16[3] = 0;
            v58 = *(_QWORD *)v7;
            v59 = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
            REGION_CORE::set_sizeScan((REGION_CORE *)(v58 + 24), (struct REGION_CORE *)(unsigned int)(v59 + 16));
          }
          else
          {
            v16 = (unsigned int *)v15;
          }
          v60 = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
          v61 = *(_DWORD *)((char *)v60 + (unsigned int)(4 * *(_DWORD *)v60 + 16) + 4);
          *((_DWORD *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) + 2) = v61;
          v77 = *(_OWORD *)(*(_QWORD *)v7 + 52LL);
          DWORD1(v77) = *((_DWORD *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) + 2);
          HIDWORD(v77) = v16[1];
          *(_OWORD *)(*(_QWORD *)v7 + 52LL) = v77;
          v16[2] = 0x7FFFFFFF;
        }
        if ( v8 != v90 )
          Win32FreePool(v8);
        return 1LL;
      }
      v17 = v71;
      LODWORD(v4) = a4;
    }
  }
  v68 = 8LL * (unsigned int)(v4 + 1);
  if ( v68 <= 0xFFFFFFFF )
  {
    v86 = (_BYTE *)PALLOCNOZ(v68, 1852273223LL);
    v8 = v86;
    if ( v86 )
      goto LABEL_3;
  }
  return 0LL;
}
