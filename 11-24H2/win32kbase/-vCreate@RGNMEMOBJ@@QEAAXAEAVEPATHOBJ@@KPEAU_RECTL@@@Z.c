/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420
 * Callers:
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14006AD50 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x140029050 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     bConstructGET @ 0x140064F80 (bConstructGET.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1400652E8 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z @ 0x140065C18 (-RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x140065CCC (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140065F10 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?CloseAllFigures@PATH_CORE@@QEAAKXZ @ 0x140066B90 (-CloseAllFigures@PATH_CORE@@QEAAKXZ.c)
 *     ?bFlatten@EPATHOBJ@@QEAA_NXZ @ 0x14008E410 (-bFlatten@EPATHOBJ@@QEAA_NXZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1400EF910 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, struct EPATHOBJ *a3, struct _RECTL *a4)
{
  unsigned int v5; // r15d
  RGNOBJ *v7; // rsi
  unsigned int v8; // r14d
  struct REGION_CORE *v9; // rdx
  _DWORD *v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  struct EDGE *v13; // r13
  int v14; // r14d
  __int64 v15; // rcx
  LONG top; // edx
  LONG bottom; // r8d
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct REGION *Region; // rax
  unsigned int v21; // r8d
  int v22; // r15d
  _QWORD *v23; // rax
  __int64 v24; // rcx
  int v25; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  _QWORD *v27; // rdx
  int v28; // r8d
  _QWORD *v29; // rcx
  int v31; // r10d
  __int64 v32; // r9
  bool v33; // sf
  __int64 v34; // r9
  int v35; // ecx
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  _QWORD *v38; // r8
  int v39; // r9d
  __int64 v40; // rcx
  int v41; // r10d
  _QWORD *v42; // rdx
  _QWORD *v43; // r9
  __int64 v44; // rax
  __int64 *v45; // r8
  int v46; // r11d
  unsigned int v47; // edi
  int sizeScanAlloc; // ebx
  struct SCAN *pscnTail; // rax
  __int64 *v50; // rcx
  struct SCAN *v51; // r12
  char *v52; // r8
  _DWORD *v53; // rdi
  int v54; // eax
  unsigned __int64 v55; // rdi
  __int64 v56; // rcx
  char *v57; // rbx
  int v58; // eax
  _DWORD *v59; // rdi
  int v60; // eax
  int v61; // eax
  __int64 v62; // rbx
  int sizeScan; // eax
  unsigned int v64; // r8d
  int v65; // edx
  struct REGION_CORE *v66; // rdx
  _DWORD *v67; // r9
  unsigned int v68; // eax
  unsigned int v69; // ecx
  char v70; // [rsp+24h] [rbp-DCh]
  _QWORD v71[8]; // [rsp+30h] [rbp-D0h] BYREF
  RGNOBJ *v72; // [rsp+70h] [rbp-90h]
  struct _GRETHREAD *v73; // [rsp+78h] [rbp-88h]
  _QWORD v74[8]; // [rsp+80h] [rbp-80h] BYREF
  char v75; // [rsp+C0h] [rbp-40h] BYREF

  v70 = (char)a3;
  v5 = (unsigned int)a3;
  v7 = this;
  v72 = this;
  if ( !*((_QWORD *)a2 + 1) )
    return;
  memset(v71, 0, sizeof(v71));
  memset(v74, 0, sizeof(v74));
  *(_QWORD *)v7 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && !EPATHOBJ::bFlatten(a2) )
    return;
  *((_DWORD *)a2 + 1) += PATH_CORE::CloseAllFigures((PATH_CORE *)(*((_QWORD *)a2 + 1) + 24LL));
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 2 )
    return;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    RGNMEMOBJ::vInitialize(v7, 0x70u);
    if ( *(_QWORD *)v7
      && !(unsigned int)Win32kRS::RegionCore_set_from_path(
                          (Win32kRS *)(*(_QWORD *)v7 + 24LL),
                          a2,
                          (struct EPATHOBJ *)v5,
                          (__int64)a4) )
    {
      goto LABEL_14;
    }
    return;
  }
  if ( a4 && ((v11 = *((_QWORD *)a2 + 1), a4->top >= *(_DWORD *)(v11 + 52)) || a4->bottom <= *(_DWORD *)(v11 + 60))
    || !(unsigned int)RGNMEMOBJ::bFastFillWrapper(v7, a2) )
  {
    if ( v8 < 0x14 )
    {
      v13 = (struct EDGE *)&v75;
      v14 = 0;
    }
    else
    {
      if ( v8 + 1 < v8 )
        return;
      v12 = (unsigned __int64)(v8 + 1) << 6;
      if ( v12 > 0xFFFFFFFF )
        return;
      v13 = (struct EDGE *)PALLOCNOZ(v12, 0x67646547u);
      if ( !v13 )
        return;
      v14 = 1;
    }
    v15 = *((_QWORD *)a2 + 1);
    top = *(_DWORD *)(v15 + 52);
    bottom = *(_DWORD *)(v15 + 60);
    if ( bottom >= top )
    {
      if ( a4 )
      {
        if ( top <= a4->top )
          top = a4->top;
        if ( bottom >= a4->bottom )
          bottom = a4->bottom;
      }
      v18 = bottom - (__int64)top;
      if ( v18 <= 0 )
        v18 = 0LL;
      v19 = 32 * (v18 >> 4) + 432;
      if ( v19 <= 0x7FFFFFFF )
      {
        Region = RGNMEMOBJ::AllocateRegion(v19);
        *(_QWORD *)v7 = Region;
        if ( Region )
        {
          REGION_CORE::set_sizeScan((struct REGION *)((char *)Region + 24), 0LL, v21);
          v22 = 0x80000000;
          *(_DWORD *)(*(_QWORD *)v7 + 76LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 72LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 48LL) = 0;
          v23 = (_QWORD *)(*(_QWORD *)v7 + 80LL);
          v23[1] = v23;
          *v23 = v23;
          v25 = bConstructGET((__int64)a2, (__int64)v74, v13, a4);
          if ( v25 )
          {
            CurrentThread = GreGetCurrentThread(v24);
            v73 = CurrentThread;
            v71[0] = v71;
            *(_QWORD *)((char *)&v71[1] + 4) = 0x7FFFFFFFLL;
            while ( 1 )
            {
              if ( !v25 || PsIsThreadTerminating(*((PETHREAD *)CurrentThread - 1)) )
                goto LABEL_81;
              v27 = (_QWORD *)v71[0];
              if ( (_QWORD *)v71[0] != v71 )
              {
                v28 = v71[2];
                v29 = v71;
                do
                {
                  if ( (*((_DWORD *)v27 + 2))-- == 1 )
                  {
                    --v28;
                    *v29 = *v27;
                  }
                  else
                  {
                    v31 = *((_DWORD *)v27 + 3) + *((_DWORD *)v27 + 12);
                    v32 = v27[4];
                    v33 = v27[3] + v32 < 0;
                    v34 = v27[3] + v32;
                    v27[3] = v34;
                    *((_DWORD *)v27 + 3) = v31;
                    if ( !v33 )
                    {
                      v35 = *((_DWORD *)v27 + 13);
                      v27[3] = v34 - v27[5];
                      *((_DWORD *)v27 + 3) = v31 + v35;
                    }
                    v29 = v27;
                  }
                  v27 = (_QWORD *)*v29;
                }
                while ( (_QWORD *)*v29 != v71 );
                v36 = (_QWORD *)v71[0];
                v7 = v72;
                LODWORD(v71[2]) = v28;
                if ( (_QWORD *)v71[0] != v71 )
                  break;
              }
              v40 = v74[0];
              v65 = v22;
              if ( (_QWORD *)v74[0] == v74 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(v7, v22, 0x7FFFFFFF) )
                  goto LABEL_81;
                RGNOBJ::vTighten(v7, v66);
                v67 = *(_DWORD **)v7;
                if ( (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != 0
                  && (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != -134217728
                  || (v67[16] & 0xF8000000) != 0 && (v67[16] & 0xF8000000) != -134217728
                  || (((v67[15] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || (((v67[14] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
                {
                  goto LABEL_81;
                }
                goto LABEL_87;
              }
              v22 = *(_DWORD *)(v74[0] + 16LL);
              if ( v22 != v65 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(v7, v65, v22) )
                  goto LABEL_81;
                goto LABEL_46;
              }
LABEL_47:
              if ( *(_DWORD *)(v40 + 16) == v22 )
              {
                v41 = v71[2];
                v42 = v71;
                v43 = (_QWORD *)v40;
                v44 = v40;
                do
                {
                  v45 = (__int64 *)*v42;
                  v46 = *(_DWORD *)(v44 + 12);
                  if ( v46 > *(_DWORD *)(*v42 + 12LL) )
                  {
                    do
                    {
                      v42 = v45;
                      v45 = (__int64 *)*v45;
                    }
                    while ( v46 > *((_DWORD *)v45 + 3) );
                  }
                  ++v41;
                  v74[0] = *(_QWORD *)v40;
                  *v43 = *v42;
                  *v42 = v43;
                  v42 = v43;
                  v40 = v74[0];
                  v43 = (_QWORD *)v74[0];
                  v44 = v74[0];
                }
                while ( *(_DWORD *)(v74[0] + 16LL) == v22 );
                LODWORD(v71[2]) = v41;
              }
              v47 = 4 * LODWORD(v71[2]) + 16;
              sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
              if ( v47 <= sizeScanAlloc - (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL))
                || (v68 = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)v7 + 24LL)),
                    v69 = v68 + v47,
                    v68 + v47 >= v68)
                && v69 + 1120 >= v69
                && (unsigned int)RGNOBJ::bExpand(v7, v69 + 1120) )
              {
                pscnTail = REGION_CORE::get_pscnTail((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
                v50 = (__int64 *)v71[0];
                v51 = pscnTail;
                v52 = (char *)pscnTail + 8;
                *((_DWORD *)pscnTail + 2) = 0x80000000;
                v53 = (_DWORD *)((char *)pscnTail + 8);
                if ( v50 != v71 )
                {
                  if ( (v70 & 2) != 0 )
                  {
                    do
                    {
                      v58 = *((_DWORD *)v50 + 3);
                      if ( *v53 >= v58 )
                      {
                        v59 = v53 - 1;
                      }
                      else
                      {
                        v59 = v53 + 1;
                        *v59 = v58;
                      }
                      v60 = *((_DWORD *)v50 + 14);
                      do
                      {
                        v50 = (__int64 *)*v50;
                        v60 += *((_DWORD *)v50 + 14);
                      }
                      while ( v60 );
                      v61 = *((_DWORD *)v50 + 3);
                      if ( *v59 >= v61 )
                      {
                        v53 = v59 - 1;
                      }
                      else
                      {
                        v53 = v59 + 1;
                        *v53 = v61;
                      }
                      v50 = (__int64 *)*v50;
                    }
                    while ( v50 != v71 );
                  }
                  else
                  {
                    do
                    {
                      v54 = *((_DWORD *)v50 + 3);
                      if ( *v53 >= v54 )
                        --v53;
                      else
                        *++v53 = v54;
                      v50 = (__int64 *)*v50;
                    }
                    while ( v50 != v71 );
                  }
                }
                v55 = (unsigned __int64)((char *)v53 - v52) >> 2;
                v56 = (unsigned int)(4 * *((_DWORD *)v51 - 1) + 16);
                v57 = (char *)v51 - v56 - 4;
                if ( *(_DWORD *)((char *)v51 - v56) == (_DWORD)v55
                  && !memcmp(v57 + 16, (char *)v51 + 12, 4LL * (unsigned int)v55) )
                {
                  *((_DWORD *)v57 + 3) = v22 + 1;
                }
                else
                {
                  ++*(_DWORD *)(*(_QWORD *)v7 + 48LL);
                  v62 = *(_QWORD *)v7;
                  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
                  REGION_CORE::set_sizeScan(
                    (REGION_CORE *)(v62 + 24),
                    (struct REGION_CORE *)(unsigned int)(sizeScan + 16 + 4 * v55),
                    v64);
                  *((_DWORD *)v51 + 1) = v22;
                  *((_DWORD *)v51 + 2) = v22 + 1;
                  *(_DWORD *)v51 = v55;
                  *((_DWORD *)v51 + (unsigned int)v55 + 3) = v55;
                }
                v25 = 1;
              }
              else
              {
                v25 = 0;
              }
              CurrentThread = v73;
              ++v22;
            }
            if ( *(_QWORD **)v71[0] != v71 )
            {
              while ( 1 )
              {
                v37 = (_QWORD *)*v36;
                v38 = v71;
                v39 = 0;
                do
                {
                  if ( *((_DWORD *)v37 + 3) < *((_DWORD *)v36 + 3) )
                  {
                    *v38 = v37;
                    v39 = 1;
                    *v36 = *v37;
                    *v37 = v36;
                    v36 = v37;
                  }
                  v38 = v36;
                  v36 = (_QWORD *)*v36;
                  v37 = (_QWORD *)*v36;
                }
                while ( (_QWORD *)*v36 != v71 );
                if ( !v39 )
                  break;
                v36 = (_QWORD *)v71[0];
              }
            }
LABEL_46:
            v40 = v74[0];
            goto LABEL_47;
          }
LABEL_81:
          RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)v7);
        }
      }
    }
LABEL_87:
    if ( v14 )
      GreDeleteFastMutex((char *)v13);
    return;
  }
  RGNOBJ::vTighten(v7, v9);
  v10 = *(_DWORD **)v7;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != 0
    && (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != -134217728
    || (v10[16] & 0xF8000000) != 0 && (v10[16] & 0xF8000000) != -134217728
    || (((v10[15] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v10[14] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
LABEL_14:
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)v7);
  }
}
