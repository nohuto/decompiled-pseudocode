/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x14005D5B0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401F6558 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1401542F0 (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140156AE4 (--$GreReleaseSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        __int64 a3,
        unsigned int a4,
        HDEV a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  HDEV v11; // rdi
  int v12; // ebx
  __int64 SessionState; // rax
  __int64 v15; // r8
  HDEV v16; // rsi
  HDEV *v17; // r15
  _QWORD *v18; // rsi
  unsigned int v19; // ebp
  int v20; // r12d
  int v21; // r13d
  __int64 v22; // rcx
  HDEV v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  HDEV v29; // rdi
  __int64 v30; // rax
  HDEV v31; // rdx
  HDEV v32; // rsi
  _QWORD *i; // rsi
  HDEV v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  HDEV v39; // rdi
  __int64 v40; // rax
  HDEV v42; // rdx
  _QWORD v43[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+18h]

  v45 = a3;
  v11 = a5;
  v12 = 0;
  LODWORD(a5) = 0;
  SessionState = W32GetSessionState(this, a2, a3);
  SEMOBJ<18>::SEMOBJ<18>(&a5, *(_QWORD *)(SessionState + 96) + 4872LL);
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
  {
    v16 = (HDEV)*((_QWORD *)v11 + 439);
    v12 = 1;
  }
  else
  {
    v16 = v11;
  }
  v17 = (HDEV *)(v11 + 878);
  if ( (v12 & 1) != 0 )
    v12 &= ~1u;
  v18 = (_QWORD *)*((_QWORD *)v16 + 190);
  v19 = a11;
  v20 = a10;
  v21 = a9;
  while ( 1 )
  {
    v22 = (_DWORD)v11[10] & 0x800000;
    if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    {
      v23 = *v17;
      v12 |= 2u;
    }
    else
    {
      v23 = v11;
    }
    v24 = v23 + 380;
    if ( (v12 & 2) != 0 )
      v12 &= ~2u;
    if ( v18 == v24 )
      break;
    v43[0] = 0LL;
    *(_QWORD *)this = v18 - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v43);
    if ( (unsigned int)RFONTOBJ::bMatchRealization(this, a2, v45, a4, a6, a7, a8, v21, v20, v19) )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 668LL);
      v25 = *(_QWORD *)this + 672LL;
      v26 = *(_QWORD *)v25;
      if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) == v25 )
      {
        v27 = *(_QWORD **)(*(_QWORD *)this + 680LL);
        if ( *v27 == v25 )
        {
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          v28 = (_QWORD *)(*(_QWORD *)this + 672LL);
          if ( ((_DWORD)v11[10] & 0x800000) != 0 )
            v11 = *v17;
          v29 = v11 + 380;
          v30 = *(_QWORD *)v29;
          if ( *(HDEV *)(*(_QWORD *)v29 + 8LL) == v29 )
          {
            *v28 = v30;
            v28[1] = v29;
            *(_QWORD *)(v30 + 8) = v28;
            *(_QWORD *)v29 = v28;
            goto LABEL_21;
          }
        }
      }
LABEL_49:
      __fastfail(3u);
    }
    v18 = (_QWORD *)*v18;
  }
  if ( (_DWORD)v22 )
  {
    v32 = *v17;
    v12 |= 8u;
  }
  else
  {
    v32 = v11;
  }
  if ( (v12 & 8) != 0 )
    v12 &= ~8u;
  for ( i = (_QWORD *)*((_QWORD *)v32 + 192); ; i = (_QWORD *)*i )
  {
    if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    {
      v34 = *v17;
      v12 |= 0x10u;
    }
    else
    {
      v34 = v11;
    }
    v35 = v34 + 384;
    if ( (v12 & 0x10) != 0 )
      v12 &= ~0x10u;
    if ( i == v35 )
    {
      v42 = a5;
      *(_QWORD *)this = 0LL;
      if ( v42 == (HDEV)-1LL )
      {
        v42 = *(HDEV *)(*(_QWORD *)(W32GetSessionState(v22, -1LL, v15) + 96) + 20352LL);
      }
      else if ( !v42 )
      {
        return 0LL;
      }
      GreReleaseSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v42);
      return 0LL;
    }
    v43[0] = 0LL;
    *(_QWORD *)this = i - 84;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v43);
    if ( (unsigned int)RFONTOBJ::bMatchRealization(this, a2, v45, a4, a6, a7, a8, v21, v20, v19) )
      break;
  }
  v36 = *(_QWORD *)this + 672LL;
  v37 = *(_QWORD *)v36;
  if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 )
    goto LABEL_49;
  v38 = *(_QWORD **)(*(_QWORD *)this + 680LL);
  if ( *v38 != v36 )
    goto LABEL_49;
  *v38 = v37;
  *(_QWORD *)(v37 + 8) = v38;
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    --*((_DWORD *)*v17 + 388);
  else
    --*((_DWORD *)v11 + 388);
  v28 = (_QWORD *)(*(_QWORD *)this + 672LL);
  if ( ((_DWORD)v11[10] & 0x800000) != 0 )
    v11 = *v17;
  v39 = v11 + 380;
  v40 = *(_QWORD *)v39;
  if ( *(HDEV *)(*(_QWORD *)v39 + 8LL) != v39 )
    goto LABEL_49;
  *v28 = v40;
  v28[1] = v39;
  *(_QWORD *)(v40 + 8) = v28;
  *(_QWORD *)v39 = v28;
  *(_DWORD *)(*(_QWORD *)this + 668LL) = 1;
LABEL_21:
  v31 = a5;
  if ( a5 == (HDEV)-1LL )
  {
    v31 = *(HDEV *)(*(_QWORD *)(W32GetSessionState(v28, -1LL, v15) + 96) + 20352LL);
    goto LABEL_47;
  }
  if ( a5 )
LABEL_47:
    GreReleaseSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v31);
  return 1LL;
}
