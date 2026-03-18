/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830
 * Callers:
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401DCED4 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x14005D2E8 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x14005D5B0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??$GrepAcquireLockValidate@$0BB@@@YAXXZ @ 0x1400BBD8C (--$GrepAcquireLockValidate@$0BB@@@YAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400BC0A0 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z @ 0x1400BCE0C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BD5E4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct UDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4)
{
  __int64 v5; // rcx
  struct UDCOBJ *v6; // r12
  struct PFE *v7; // r14
  HDEV v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  bool v13; // zf
  struct LFONT *v14; // rsi
  __int64 v15; // r15
  unsigned int v16; // r14d
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  size_t v21; // r8
  HSEMAPHORE v22; // rbx
  __int64 v23; // rcx
  int NtoD; // eax
  __int64 v25; // rcx
  __int64 eYX_low; // rdx
  __int64 eYY_low; // r8
  float v28; // xmm2_4
  struct PFE *v29; // r15
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  int v38; // ecx
  int v39; // r14d
  __int64 v40; // rdx
  _QWORD *HDEV; // rcx
  int v42; // r14d
  int v43; // r14d
  __int64 v44; // rcx
  int v45; // [rsp+60h] [rbp-A0h]
  HSEMAPHORE v46; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v47; // [rsp+70h] [rbp-90h] BYREF
  struct PFE *v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  struct LFONT *v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v52[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v53[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v54; // [rsp+B8h] [rbp-48h]
  struct _FD_XFORM v55; // [rsp+C0h] [rbp-40h] BYREF
  struct tagENUMLOGFONTEXDVW v56; // [rsp+D0h] [rbp-30h] BYREF

  v46 = (HSEMAPHORE)a4;
  v5 = *(_QWORD *)a2;
  v6 = a2;
  LOBYTE(a2) = 10;
  v48 = a3;
  v7 = a3;
  v8 = *(HDEV *)(v5 + 48);
  v45 = *(_DWORD *)(v5 + 248) & 1;
  v9 = HmgShareLock(*(_QWORD *)(v5 + 1744), a2);
  v10 = v9 + 24;
  v11 = -v9;
  v12 = v10 & -(__int64)(v11 != 0);
  v49 = v12;
  if ( !v12 )
  {
    v14 = 0LL;
    v50 = 0LL;
    goto LABEL_3;
  }
  v13 = (*(_BYTE *)((v10 & -(__int64)(v11 != 0)) + 4) & 1) == 0;
  v14 = (struct LFONT *)(v12 - 24);
  v50 = (struct LFONT *)(v12 - 24);
  if ( v13 )
    goto LABEL_3;
  v39 = *(_DWORD *)v12;
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v12 - 24));
  v14 = 0LL;
  v50 = 0LL;
  if ( v8 )
  {
    HDEV = v8;
LABEL_53:
    v42 = v39 - 4;
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        if ( v43 != 1 )
        {
LABEL_58:
          v12 = ((unsigned __int64)v14 + 24) & -(__int64)(v14 != 0LL);
          v49 = v12;
          goto LABEL_59;
        }
        v44 = HDEV[181];
      }
      else
      {
        v44 = HDEV[180];
      }
    }
    else
    {
      v44 = HDEV[179];
    }
    if ( v44 )
    {
      LOBYTE(v40) = 10;
      v14 = (struct LFONT *)HmgShareLock(v44, v40);
      v50 = v14;
    }
    goto LABEL_58;
  }
  HDEV = (_QWORD *)UserGetHDEV();
  if ( HDEV )
    goto LABEL_53;
LABEL_59:
  v7 = v48;
LABEL_3:
  if ( !v12 )
  {
    *(_QWORD *)this = 0LL;
    goto LABEL_29;
  }
  v15 = *((_QWORD *)v7 + 4);
  v16 = 0;
  v52[0] = v15;
  v17 = *((_DWORD *)v46 + 1);
  if ( (v17 & 0x4000) != 0 || (*(_DWORD *)v46 & 1) != 0 )
  {
    v37 = *(int *)(v15 + 24);
    v38 = 0;
    if ( (_DWORD)v37 )
    {
      if ( (*(_BYTE *)(v15 + 52) & 0x20) != 0 )
        v38 = *(_DWORD *)(v37 + v15 + 8);
      else
        v38 = *(_DWORD *)(v37 + v15 + 4);
    }
    if ( (*(_BYTE *)(v15 + 52) & 1) == 0 && *(_BYTE *)(v12 + 272) && v38 )
      v16 = 0x4000;
  }
  if ( (((_DWORD)v8[10] & 1) != 0 || *((_DWORD *)v46 + 6))
    && (((_DWORD)v46[1] & 0x2000) != 0 || (*(_BYTE *)v46 & 0x20) != 0) )
  {
    v18 = 400;
    if ( *(_DWORD *)(v12 + 268) )
      v18 = *(_DWORD *)(v12 + 268);
    v16 |= ((*(unsigned __int16 *)(v15 + 46) - v18) >> 31) & 0x2000;
  }
  v19 = *(_DWORD *)(v15 + 48);
  if ( (v19 & 1) != 0 && *(int *)(v12 + 252) <= 0 )
    v16 |= 0x8000u;
  if ( (v17 & 0x10000) != 0 && (v19 & 0x40) != 0 )
    v16 |= v17 & 0x10010000;
  memset_0(&v56, 0, sizeof(v56));
  v20 = *(_DWORD *)(v12 + 248);
  v21 = 420LL;
  if ( v20 < 0x1A4 )
    v21 = v20;
  memmove(&v56, (const void *)(v12 + 252), v21);
  v22 = v46;
  v55 = 0LL;
  LODWORD(v56.elfEnumLogfontEx.elfLogFont.lfHeight) = v46[3];
  v56.elfEnumLogfontEx.elfLogFont.lfWidth = (int)v46[2];
  v56.elfEnumLogfontEx.elfLogFont.lfOrientation = (int)v46[5];
  v56.elfEnumLogfontEx.elfLogFont.lfEscapement = (int)v46[4];
  if ( (*(_DWORD *)(v15 + 48) & 0x3000010) == 0
    || ((v23 = *(_QWORD *)v6,
         v47.x = 1,
         v47.y = 1,
         DC::QuickInitXform(v23, &v46, 516LL),
         *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 976LL) + 208LL) != 1)
      ? (NtoD = bGetNtoD(&v55, &v56.elfEnumLogfontEx.elfLogFont, (struct IFIOBJ *)v52, v6, &v47))
      : (NtoD = bGetNtoD_Win31(&v55, &v56.elfEnumLogfontEx.elfLogFont, (struct IFIOBJ *)v52, v6, 0, &v47, 1)),
        !NtoD) )
  {
    *(_QWORD *)this = 0LL;
LABEL_39:
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v49);
    return;
  }
  eYX_low = LODWORD(v55.eYX);
  if ( LODWORD(v55.eYX) )
  {
    eYX_low = LODWORD(v55.eYX) ^ 0x80000000;
    LODWORD(v55.eYX) ^= 0x80000000;
  }
  eYY_low = LODWORD(v55.eYY);
  if ( LODWORD(v55.eYY) )
  {
    eYY_low = LODWORD(v55.eYY) ^ 0x80000000;
    LODWORD(v55.eYY) ^= 0x80000000;
  }
  if ( (*(_DWORD *)(v52[0] + 48LL) & 0x1000000) != 0 )
  {
    LODWORD(v55.eXX) = eYY_low;
    LODWORD(v55.eXY) = eYX_low;
    if ( (_DWORD)eYX_low )
    {
      eYX_low = (unsigned int)eYX_low ^ 0x80000000;
      LODWORD(v55.eXY) = eYX_low;
    }
  }
  v28 = *((float *)v22 + 7);
  v55.eXX = v55.eXX * v28;
  v55.eXY = v55.eXY * v28;
  v46 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v25, eYX_low, eYY_low) + 96) + 20344LL);
  GreAcquireSemaphoreInternal(v46);
  GrepAcquireLockValidate<17>();
  v29 = v48;
  v53[0] = *(_QWORD *)v48;
  v30 = v53[0];
  W32GetSessionState(v32, v31, v33);
  ++*(_DWORD *)(v30 + 68);
  v54 = 0;
  SEMOBJ<17>::vUnlock(&v46);
  v34 = *(_QWORD *)v6;
  v51 = *(_QWORD *)v6 + 320LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       &v55,
                       v16,
                       0,
                       v8,
                       (struct EXFORMOBJ *)&v51,
                       v29,
                       v45,
                       *(_DWORD *)(*(_QWORD *)(v34 + 976) + 208LL),
                       0,
                       2u) )
  {
    GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
    *(_DWORD *)(*(_QWORD *)v6 + 252LL) &= ~1u;
    if ( v30 )
      PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v53, v35, v36);
    goto LABEL_29;
  }
  if ( !(unsigned int)RFONTOBJ::bRealizeFont(this, v6, v8, &v56, v29, &v55, &v47, v16, 0, v45, 0, 2u) )
  {
    *(_QWORD *)this = 0LL;
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v53);
    goto LABEL_39;
  }
  GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
  *(_DWORD *)(*(_QWORD *)v6 + 252LL) &= ~1u;
LABEL_29:
  if ( v14 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v14);
}
