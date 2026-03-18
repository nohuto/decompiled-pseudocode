/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00C5280
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C001C0C0 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     prfntKillList @ 0x1C00C54B0 (prfntKillList.c)
 *     bKillPFFOBJ @ 0x1C00C56F0 (bKillPFFOBJ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00C5998 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C00C59CC (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0116B20 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0264E7C (--1SEMOBJ@@QEAA@XZ.c)
 *     vKillRFONTList @ 0x1C026AEE4 (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r12d
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  unsigned int v7; // edx
  _DWORD *v8; // rsi
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  struct PFF **i; // r14
  struct PFF *j; // rcx
  struct PFF *v13; // r13
  int v14; // ebp
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct PFF *v20; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // rbx
  _DWORD *v23; // rbp
  _QWORD v25[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v26 = *((_QWORD *)Gre::Base::Globals(this) + 6);
  GreAcquireSemaphore(v26);
  v6 = 1;
  v7 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v7 )
    goto LABEL_7;
  if ( v7 > 0x40 )
  {
    if ( 48 * v7 )
    {
      v8 = (_DWORD *)Win32AllocPool(48 * v7, 1769367111LL, v4, v5);
      if ( v8 )
      {
        v2 = 1;
        goto LABEL_9;
      }
    }
    v6 = 0;
LABEL_7:
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v26);
    return v6;
  }
  v8 = (_DWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 20296LL);
LABEL_9:
  v9 = *(_QWORD *)this;
  v10 = v8;
  for ( i = (struct PFF **)(*(_QWORD *)this + 40LL);
        (unsigned __int64)i < v9 + 8 * (unsigned __int64)*(unsigned int *)(v9 + 24) + 40;
        ++i )
  {
    for ( j = *i; ; j = v13 )
    {
      v20 = SkipInvalidPff(j);
      if ( !v20 )
        break;
      v13 = (struct PFF *)*((_QWORD *)v20 + 1);
      v14 = *((_DWORD *)v20 + 13) & 0x200;
      *((_DWORD *)v20 + 14) = 0;
      *((_DWORD *)v20 + 15) = 0;
      v25[0] = v20;
      PFFOBJ::vKill((PFFOBJ *)v25);
      if ( *i == (struct PFF *)v15 )
        *i = *(struct PFF **)(v15 + 8);
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
      {
        *(_QWORD *)(v16 + 16) = *(_QWORD *)(v15 + 16);
        v16 = *(_QWORD *)(v15 + 8);
      }
      v17 = *(_QWORD *)(v15 + 16);
      if ( v17 )
        *(_QWORD *)(v17 + 8) = v16;
      *(_QWORD *)v10 = v15;
      PFFOBJ::vRemoveHash((PFFOBJ *)v25);
      v18 = *(_QWORD *)this;
      if ( !v14 )
        ++*(_DWORD *)(v18 + 32);
      --*(_DWORD *)(v18 + 28);
      v19 = prfntKillList(v25);
      *((_QWORD *)v10 + 1) = v19;
      if ( !v19 )
        v10[10] = bKillPFFOBJ(v25, v10 + 4);
      v10 += 12;
    }
    v9 = *(_QWORD *)this;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v26);
  v21 = 0LL;
  v22 = 0xAAAAAAAAAAAAAAABuLL * (((char *)v10 - (char *)v8) >> 4);
  if ( (_DWORD)v22 )
  {
    v23 = v8 + 10;
    do
    {
      if ( *((_QWORD *)v23 - 4) )
      {
        v25[0] = *((_QWORD *)v23 - 5);
        vKillRFONTList((PFFOBJ *)v25);
      }
      else if ( *v23 )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v8[12 * v21 + 4]);
      }
      v21 = (unsigned int)(v21 + 1);
      v23 += 12;
    }
    while ( (unsigned int)v21 < (unsigned int)v22 );
  }
  if ( v2 )
    Win32FreePool(v8);
  return v6;
}
