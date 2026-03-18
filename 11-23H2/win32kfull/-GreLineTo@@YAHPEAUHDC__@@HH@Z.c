/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA0E8
 * Callers:
 *     NtGdiLineTo @ 0x1C015A570 (NtGdiLineTo.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008C210 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00BDAA4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0159E14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0159EFA (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C015A002 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0283F94 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028530C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  LONG v4; // r12d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  struct ECLIPOBJ *v7; // r8
  __int64 v8; // rdx
  LINEATTRS *v9; // r15
  int v10; // esi
  __int64 v11; // r9
  struct ECLIPOBJ *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  BOOL (__stdcall *v16)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // r15
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  LONG v20; // r12d
  LONG v21; // r13d
  int x; // r14d
  LONG y; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  LONG v26; // ecx
  struct ECLIPOBJ *v27; // rdx
  char *v28; // rcx
  int v29; // eax
  int v30; // r14d
  Gre::Base *v31; // rcx
  __int32 v32; // r13d
  int v33; // esi
  int v34; // r12d
  __int32 v35; // eax
  __int32 v36; // eax
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  struct ECLIPOBJ *v40; // rdx
  int v41; // eax
  struct REGION *v42; // rax
  XCLIPOBJ *v43; // r10
  char *v44; // r10
  bool v45; // zf
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rdx
  char *v49; // r8
  struct ECLIPOBJ *v50; // rcx
  int v51; // edx
  __int64 v52; // rdx
  struct ECLIPOBJ *v53; // rcx
  int v54; // edx
  struct _POINTFIX Current; // rax
  struct ECLIPOBJ *v57; // r9
  __int64 v58; // [rsp+28h] [rbp-D8h]
  struct _POINTL v59[2]; // [rsp+50h] [rbp-B0h] BYREF
  LONG v60; // [rsp+60h] [rbp-A0h]
  LONG v61; // [rsp+64h] [rbp-9Ch]
  struct ECLIPOBJ *v62[2]; // [rsp+68h] [rbp-98h] BYREF
  char v63[32]; // [rsp+78h] [rbp-88h] BYREF
  char *v64; // [rsp+98h] [rbp-68h]
  struct _POINTL v65; // [rsp+A0h] [rbp-60h] BYREF
  int v66; // [rsp+A8h] [rbp-58h]
  LONG v67; // [rsp+ACh] [rbp-54h]
  _QWORD v68[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-40h]
  LINEATTRS *v70; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v71[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v72[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v73[64]; // [rsp+100h] [rbp+0h] BYREF
  __m128i v74; // [rsp+140h] [rbp+40h] BYREF
  __m128i v75; // [rsp+150h] [rbp+50h] BYREF
  PATHOBJ ppo; // [rsp+160h] [rbp+60h] BYREF
  __int64 v77; // [rsp+168h] [rbp+68h]

  v3 = a2;
  v60 = a2;
  v61 = a3;
  v4 = a3;
  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v62, a1);
  v6 = 0;
  if ( v62[0] )
  {
    if ( (*((_DWORD *)v62[0] + 9) & 0x10000) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v68, (struct XDCOBJ *)v62, 516);
      v7 = v62[0];
      v8 = *((_QWORD *)v62[0] + 122);
      v9 = (LINEATTRS *)((char *)v62[0] + 208);
      v70 = (LINEATTRS *)((char *)v62[0] + 208);
      v10 = *(_DWORD *)(v8 + 152);
      if ( (v10 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v62[0], *(_QWORD *)(v8 + 160));
        v7 = v62[0];
      }
      if ( (v10 & 0x2000) != 0 )
      {
        GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 122) + 168LL));
        v7 = v62[0];
      }
      if ( (v9->fl & 0xB) != 0
        || (*((_DWORD *)v7 + 62) & 1) != 0
        || (*(_DWORD *)(v68[0] + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 122) + 208LL) == 2 )
      {
        goto LABEL_63;
      }
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v72);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v71, (struct XDCOBJ *)v62, 0);
      v12 = v62[0];
      v13 = *((_QWORD *)v62[0] + 6);
      if ( (v71[24] & 1) != 0 )
      {
        v14 = *((_QWORD *)v62[0] + 62);
        v69 = v14;
        if ( !v14 )
          goto LABEL_15;
        v15 = *(_DWORD *)(v14 + 112);
        if ( (v15 & 0x100) != 0 )
        {
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v13 + 2912);
          if ( !v16 )
            goto LABEL_15;
        }
        else
        {
          if ( *(_WORD *)(v14 + 100) || (v15 & 0x20) != 0 )
          {
LABEL_15:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v71, (__int64)v62[0], v14, v11);
            if ( v72[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v72);
LABEL_62:
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v73);
            v9 = v70;
LABEL_63:
            v65.x = v3;
            v65.y = v4;
            PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, v62, 1);
            if ( v77 )
            {
              if ( (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v68, &v65, 1u) )
              {
                Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v70);
                v57 = v62[0];
                *(_DWORD *)(*((_QWORD *)v62[0] + 122) + 152LL) &= 0xFFFFFCFF;
                *(struct _POINTL *)(*((_QWORD *)v57 + 122) + 216LL) = v65;
                *(_DWORD *)(*((_QWORD *)v57 + 122) + 8LL) = *(_DWORD *)Current.x;
                *(_DWORD *)(*((_QWORD *)v57 + 122) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
                if ( (*((_DWORD *)v62[0] + 62) & 1) == 0
                  && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v62, v9, (struct _XFORMOBJ *)v68, 1u) )
                {
                  v5 = 0;
                }
              }
            }
            else
            {
              EngSetLastError(8u);
            }
            XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
            goto LABEL_79;
          }
          v16 = EngLineTo;
        }
        if ( (*(_DWORD *)(v68[0] + 32LL) & 2) != 0 )
        {
          v17 = *((_QWORD *)v62[0] + 122);
          v18 = *(int *)(v68[0] + 24LL) >> 4;
          v19 = *(int *)(v68[0] + 28LL) >> 4;
          v20 = v19 + v4;
          v21 = v3 + v18;
          if ( _bittest((const signed __int32 *)(v17 + 152), 8u) )
          {
            x = *(int *)(v17 + 8) >> 4;
            y = *(int *)(v17 + 12) >> 4;
          }
          else
          {
            x = v18 + *(_DWORD *)(v17 + 216);
            y = v19 + *(_DWORD *)(v17 + 220);
          }
        }
        else
        {
          v24 = *((_QWORD *)v62[0] + 122);
          v59[0].x = v3;
          v59[0].y = v4;
          if ( (*(_DWORD *)(v24 + 152) & 0x200) != 0 )
          {
            v59[1] = *(struct _POINTL *)(v24 + 216);
            EXFORMOBJ::bXform((EXFORMOBJ *)v68, v59, 2LL);
            v12 = v62[0];
            x = v59[1].x;
            y = v59[1].y;
          }
          else
          {
            EXFORMOBJ::bXform((EXFORMOBJ *)v68, v59, 1LL);
            v12 = v62[0];
            v25 = *((_QWORD *)v62[0] + 122);
            x = *(int *)(v25 + 8) >> 4;
            y = *(int *)(v25 + 12) >> 4;
          }
          v21 = v59[0].x;
          v20 = v59[0].y;
        }
        v59[0].x = y;
        LODWORD(v64) = x;
        v67 = y;
        v66 = x;
        if ( (unsigned int)(v21 + 134217726) > 0xFFFFFFC || (unsigned int)(v20 + 134217726) > 0xFFFFFFC )
        {
          EngSetLastError(0x57u);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v71);
          DCOBJ::~DCOBJ((DCOBJ *)v62);
          return 0LL;
        }
        v26 = v60;
        *(_DWORD *)(*((_QWORD *)v12 + 122) + 152LL) &= 0xFFFFFCFF;
        *(_DWORD *)(*((_QWORD *)v12 + 122) + 216LL) = v26;
        *(_DWORD *)(*((_QWORD *)v12 + 122) + 220LL) = v61;
        *(_DWORD *)(*((_QWORD *)v12 + 122) + 8LL) = 16 * v21;
        *(_DWORD *)(*((_QWORD *)v12 + 122) + 12LL) = 16 * v20;
        v27 = (struct ECLIPOBJ *)(*((_DWORD *)v62[0] + 10) & 1);
        v28 = (char *)v62[0] + 1024;
        if ( (*((_DWORD *)v62[0] + 10) & 1) == 0 )
          v28 = (char *)v62[0] + 1016;
        v29 = *(_DWORD *)v28;
        v30 = *(_DWORD *)v28 + x;
        v31 = (Gre::Base *)*((unsigned int *)v62[0] + 2 * (_QWORD)v27 + 255);
        v32 = v29 + v21;
        v33 = (_DWORD)v31 + y;
        v34 = (_DWORD)v31 + v20;
        if ( (unsigned int)(v30 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v33 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v32 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v34 + 134217726) > 0xFFFFFFC )
        {
          EngSetLastError(0x57u);
          v53 = v62[0];
          v54 = 16 * (_DWORD)v64;
          *(_DWORD *)(*((_QWORD *)v62[0] + 122) + 152LL) &= ~0x200u;
          *(_DWORD *)(*((_QWORD *)v53 + 122) + 152LL) |= 0x100u;
          *(_DWORD *)(*((_QWORD *)v53 + 122) + 8LL) = v54;
          *(_DWORD *)(*((_QWORD *)v53 + 122) + 12LL) = 16 * v59[0].x;
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v71);
LABEL_71:
          DCOBJ::~DCOBJ((DCOBJ *)v62);
          return v6;
        }
        if ( v30 > v32 )
        {
          v75.m128i_i32[0] = v32;
          v35 = v30 + 1;
        }
        else
        {
          v75.m128i_i32[0] = v30;
          v35 = v32 + 1;
        }
        v75.m128i_i32[2] = v35;
        if ( v33 > v34 )
        {
          v75.m128i_i32[1] = v34;
          v36 = v33 + 1;
        }
        else
        {
          v75.m128i_i32[1] = v33;
          v36 = v34 + 1;
        }
        v75.m128i_i32[3] = v36;
        if ( (*((_DWORD *)v62[0] + 9) & 0xE0) != 0 )
        {
          *(__m128i *)&v59[0].x = v75;
          XDCOBJ::vAccumulate((XDCOBJ *)v62, v27, (__m128i *)v59);
        }
        v37 = Gre::Base::Globals(v31);
        v40 = v62[0];
        if ( *((_QWORD *)v62[0] + 18) != *((_QWORD *)v37 + 32) )
        {
          v41 = *((_DWORD *)v62[0] + 250);
          v59[0] = 0LL;
          if ( v75.m128i_i32[0] >= v41
            && v75.m128i_i32[2] <= *((_DWORD *)v62[0] + 252)
            && v75.m128i_i32[1] >= *((_DWORD *)v62[0] + 251)
            && v75.m128i_i32[3] <= *((_DWORD *)v62[0] + 253) )
          {
LABEL_51:
            v44 = (char *)v40 + 1336;
            v45 = *((_DWORD *)v40 + 334) == -1;
            v64 = (char *)v40 + 1336;
            if ( v45 )
            {
              *(_DWORD *)(*((_QWORD *)v40 + 122) + 152LL) |= 2u;
              v40 = v62[0];
            }
            v46 = *((_QWORD *)v40 + 122);
            if ( ((*((_BYTE *)v40 + 316) | *(_BYTE *)(v46 + 152)) & 2) != 0 )
            {
              *(_DWORD *)(v46 + 152) &= ~2u;
              v47 = v69;
              v58 = v69;
              *((_DWORD *)v62[0] + 79) &= ~2u;
              EBRUSHOBJ::vInitBrush(
                v44,
                v62[0],
                *((_QWORD *)v62[0] + 18),
                *((_QWORD *)v62[0] + 11),
                *(_QWORD *)(v47 + 128),
                v58,
                0);
              v40 = v62[0];
              v44 = v64;
            }
            if ( (*((_DWORD *)v40 + 9) & 0xE0) != 0 && (*((_DWORD *)v44 + 30) & 0x100) == 0 )
            {
              v74 = v75;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v62, v40, &v74);
            }
            v48 = v69;
            v49 = v64;
            ++*(_DWORD *)(v69 + 92);
            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, char *, _QWORD, int, __int32, int, __m128i *, int))v16)(
                    v48 + 24,
                    *(_QWORD *)v59,
                    v49,
                    (unsigned int)v30,
                    v33,
                    v32,
                    v34,
                    &v75,
                    ((((*(_BYTE *)(*((_QWORD *)v62[0] + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v62[0] + 122) + 212LL)
                                                                                                - 1) & 0xF)
                                                                                              + 1)) )
            {
              v50 = v62[0];
              v51 = 16 * v66;
              *(_DWORD *)(*((_QWORD *)v62[0] + 122) + 152LL) &= ~0x200u;
              *(_DWORD *)(*((_QWORD *)v50 + 122) + 152LL) |= 0x100u;
              *(_DWORD *)(*((_QWORD *)v50 + 122) + 8LL) = v51;
              v52 = (unsigned int)(16 * v67);
              *(_DWORD *)(*((_QWORD *)v50 + 122) + 12LL) = v52;
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v71, v52, v38, v39);
              if ( v72[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v72);
              v4 = v61;
              v3 = v60;
              goto LABEL_62;
            }
            goto LABEL_68;
          }
          v59[0] = (struct _POINTL)((char *)v62[0] + 1768);
          v42 = XDCOBJ::prgnEffRao(v62);
          XCLIPOBJ::vSetup(v43, v42, (struct ERECTL *)&v75, 0);
          if ( !ERECTL::bEmpty((ERECTL *)(*(_QWORD *)v59 + 4LL)) )
          {
            v40 = v62[0];
            goto LABEL_51;
          }
        }
      }
      else
      {
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)v62);
      }
LABEL_68:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v71, (__int64)v40, v38, v39);
      if ( v72[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v72);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v73);
      v6 = v5;
      goto LABEL_71;
    }
    EngSetLastError(6u);
    v5 = 0;
  }
  else
  {
    v5 = 0;
    EngSetLastError(6u);
  }
LABEL_79:
  if ( v62[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v62);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v63);
  return v5;
}
