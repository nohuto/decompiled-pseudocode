/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x140145D50
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x140145CAC (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     prfntKillList @ 0x1400DCA9C (prfntKillList.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1400FEA04 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     bKillPFFOBJ @ 0x14019F0F0 (bKillPFFOBJ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1401E2984 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     vKillRFONTList @ 0x140200E28 (vKillRFONTList.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this, __int64 a2, __int64 a3)
{
  int v4; // r13d
  __int64 SessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rdx
  char *v10; // rbx
  __int64 v11; // rcx
  char *v12; // r14
  struct PFF **i; // r15
  struct PFF *v14; // r9
  __int64 *v15; // rsi
  struct PFF *v16; // rax
  int v17; // r12d
  int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned int v24; // ebp
  __int64 v25; // r14
  char *v26; // rsi
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF
  HSEMAPHORE v29; // [rsp+70h] [rbp+8h] BYREF
  struct PFF *v30; // [rsp+80h] [rbp+18h]

  v4 = 0;
  SessionState = W32GetSessionState(this, a2, a3);
  SEMOBJ<17>::SEMOBJ<17>(&v29, *(_QWORD *)(SessionState + 96) + 4872LL);
  v8 = 1;
  v9 = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( !(_DWORD)v9 )
    goto LABEL_5;
  if ( (unsigned int)v9 <= 0x40 )
  {
    v10 = (char *)(*(_QWORD *)(W32GetSessionState(v6, v9, v7) + 96) + 20440LL);
  }
  else
  {
    v10 = (char *)PALLOCNOZ(56 * (int)v9, 1769367111LL);
    if ( !v10 )
    {
      v8 = 0;
LABEL_5:
      SEMOBJ<17>::vUnlock(&v29);
      return v8;
    }
    v4 = 1;
  }
  v11 = *(_QWORD *)this;
  v12 = v10;
  for ( i = (struct PFF **)(*(_QWORD *)this + 40LL);
        (unsigned __int64)i < v11 + 8 * (unsigned __int64)*(unsigned int *)(v11 + 24) + 40;
        ++i )
  {
    v14 = SkipInvalidPff(*i);
    if ( v14 )
    {
      v15 = (__int64 *)(v12 + 8);
      do
      {
        v16 = (struct PFF *)*((_QWORD *)v14 + 1);
        v17 = *((_DWORD *)v14 + 13);
        *((_DWORD *)v14 + 14) = 0;
        v18 = v17 & 0x200;
        *((_DWORD *)v14 + 15) = 0;
        v30 = v16;
        v28[0] = v14;
        PFFOBJ::vKill((PFFOBJ *)v28);
        if ( *i == (struct PFF *)v19 )
          *i = *(struct PFF **)(v19 + 8);
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
          *(_QWORD *)(v20 + 16) = *(_QWORD *)(v19 + 16);
        v21 = *(_QWORD *)(v19 + 16);
        if ( v21 )
          *(_QWORD *)(v21 + 8) = *(_QWORD *)(v19 + 8);
        *(_QWORD *)v12 = v19;
        PFFOBJ::vRemoveHash((PFFOBJ *)v28);
        v23 = *(_QWORD *)this;
        if ( !v18 )
          ++*(_DWORD *)(v23 + 32);
        --*(_DWORD *)(v23 + 28);
        v15[1] = (__int64)v15;
        *v15 = (__int64)v15;
        prfntKillList(v28, v15, v22);
        if ( (__int64 *)*v15 == v15 )
          *((_DWORD *)v15 + 10) = bKillPFFOBJ(v28, v15 + 2);
        v12 += 56;
        v15 += 7;
        v14 = SkipInvalidPff(v30);
      }
      while ( v14 );
    }
    v11 = *(_QWORD *)this;
  }
  SEMOBJ<17>::vUnlock(&v29);
  v24 = 0;
  v25 = 0x6DB6DB6DB6DB6DB7LL * ((v12 - v10) >> 3);
  if ( (_DWORD)v25 )
  {
    v26 = v10 + 8;
    do
    {
      if ( *(char **)v26 == v26 )
      {
        if ( *((_DWORD *)v26 + 10) )
          vCleanupFontFile((struct PFFCLEANUP *)&v10[56 * v24 + 24]);
      }
      else
      {
        v28[0] = *((_QWORD *)v26 - 1);
        vKillRFONTList((PFFOBJ *)v28);
      }
      ++v24;
      v26 += 56;
    }
    while ( v24 < (unsigned int)v25 );
  }
  if ( v4 )
    Win32FreePool(v10);
  return v8;
}
