/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401F6558
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400B1490 (--0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x14005D2E8 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x14005D5B0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1400B1364 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BD5E4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 */

__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct UDCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  HDEV v7; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r10
  unsigned int v11; // r15d
  __int64 SessionState; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rcx
  HSEMAPHORE v21[2]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-9h] BYREF
  struct _POINTL v23; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v24[2]; // [rsp+80h] [rbp+7h] BYREF
  int v25; // [rsp+90h] [rbp+17h]
  unsigned int v26; // [rsp+E0h] [rbp+67h]
  struct PFE *v27; // [rsp+E8h] [rbp+6Fh]

  v7 = *(HDEV *)(*(_QWORD *)a2 + 48LL);
  DC::QuickInitXform(*(_QWORD *)a2, v22, 516LL);
  v10 = *(_QWORD *)this;
  v26 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v11 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v23 = *(struct _POINTL *)(*(_QWORD *)this + 656LL);
  v27 = *(struct PFE **)(v10 + 120);
  if ( v10 )
    RFONTOBJ::vReleaseCache(this);
  SessionState = W32GetSessionState(v9, v8);
  SEMOBJ<17>::SEMOBJ<17>(v21, *(_QWORD *)(SessionState + 96) + 4872LL);
  v24[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v13 = v24[0];
  W32GetSessionState(v15, v14);
  v25 = 0;
  v16 = 1;
  ++*(_DWORD *)(v13 + 68);
  SEMOBJ<17>::vUnlock(v21);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       a3,
                       v11,
                       v26,
                       v7,
                       (struct EXFORMOBJ *)v22,
                       v27,
                       0,
                       *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL),
                       0,
                       a4) )
  {
    GreAcquireSemaphore<5,RFONT *>(*(_QWORD *)this);
    if ( v13 )
      PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v24, v17, v18);
  }
  else
  {
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)v21, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL), v7);
    if ( v21[0]
      && (unsigned int)RFONTOBJ::bRealizeFont(
                         this,
                         a2,
                         v7,
                         (struct tagENUMLOGFONTEXDVW *)(v21[0] + 63),
                         v27,
                         a3,
                         &v23,
                         v11,
                         v26,
                         0,
                         0,
                         a4) )
    {
      v20 = *(_QWORD *)this;
      v25 = 1;
      GreAcquireSemaphore<5,RFONT *>(v20);
    }
    else
    {
      *(_QWORD *)this = 0LL;
      v16 = 0;
    }
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)v21);
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v24);
  }
  return v16;
}
