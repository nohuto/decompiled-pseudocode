/*
 * XREFs of InitFNTCache @ 0x140115854
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140102580 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B764C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B7A3C (--$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ComputeFileviewCheckSum @ 0x140114610 (ComputeFileviewCheckSum.c)
 *     QueryFontReg @ 0x140115C98 (QueryFontReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x140115D68 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x140115DEC (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bServicingStackModifiedFonts @ 0x140115E98 (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0x140115EFC (vGetLastBootTimeStatus.c)
 *     bFntCacheDisabled @ 0x140115F68 (bFntCacheDisabled.c)
 *     bQueryFntCacheReg @ 0x1401161F4 (bQueryFntCacheReg.c)
 *     SaveDisabledKIRListToReg @ 0x14026BE58 (SaveDisabledKIRListToReg.c)
 *     bSetFntCacheReg @ 0x14026C7C0 (bSetFntCacheReg.c)
 *     bInitCacheTable @ 0x140302988 (bInitCacheTable.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140304C50 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 */

void __fastcall InitFNTCache(Gre::Base *a1)
{
  int v1; // r14d
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rsi
  int FontReg; // eax
  int v13; // r12d
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // r8
  USHORT v21; // cx
  __int64 v22; // rdx
  __int64 SessionState; // rax
  int inited; // eax
  __int64 v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h]
  __int64 v27; // [rsp+50h] [rbp-19h]
  __int64 v28; // [rsp+58h] [rbp-11h]
  __int64 v29; // [rsp+60h] [rbp-9h]
  struct Gre::Base::SESSION_GLOBALS *v30; // [rsp+68h] [rbp-1h]
  __int64 v31; // [rsp+70h] [rbp+7h] BYREF
  USHORT AnsiCodePage; // [rsp+D0h] [rbp+67h] BYREF
  USHORT OemCodePage; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 *v34; // [rsp+E0h] [rbp+77h]
  int v35; // [rsp+E8h] [rbp+7Fh]

  v27 = 0LL;
  v1 = 0;
  v26 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  LODWORD(v34) = 0;
  v35 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  v2 = Gre::Base::Globals(a1);
  v30 = v2;
  v6 = *(_QWORD *)(W32GetSessionState(v4, v3, v5) + 96) + 4872LL;
  SEMOBJ<25>::SEMOBJ<25>((HSEMAPHORE *)&v31, v6);
  *(_DWORD *)(v6 + 14720) = 0;
  if ( (int)GetGreRegKey(
              (PHANDLE)(v6 + 14744),
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0 )
    goto LABEL_40;
  if ( (unsigned int)bFntCacheDisabled() )
    goto LABEL_40;
  v7 = Win32AllocPoolZInit(128LL, 1128682580LL);
  *(_QWORD *)(v6 + 14728) = v7;
  if ( !v7 || *((_DWORD *)v2 + 712) && !(unsigned int)bSetFntCacheReg(0LL, 1LL) )
    goto LABEL_40;
  **(_QWORD **)(v6 + 14728) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 20LL) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  v25 = 0LL;
  v8 = Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys", &v25, 0LL);
  v9 = v28;
  if ( v8 )
    v9 = v25;
  v10 = Win32FileInfo(L"\\SystemRoot\\system32\\fontdrvhost.exe", &v25, 0LL);
  v11 = v29;
  if ( v10 )
    v11 = v25;
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v13 = (int)v34;
  if ( FontReg )
  {
    v13 = (_DWORD)v34 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v1 = v35;
  }
  if ( !(unsigned int)bServicingStackModifiedFonts()
    && (unsigned int)bMapFileRetainHandle(v14, *(_QWORD *)(v6 + 14728) + 48LL, 0LL) )
  {
    **(_QWORD **)(v6 + 14728) = *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 56LL);
  }
  v15 = *(__int64 **)(v6 + 14728);
  v34 = v15;
  v16 = *v15;
  if ( !*v15 )
  {
    if ( *((_DWORD *)v2 + 712) )
    {
      inited = bInitCacheTable(v13, v1, v27, v26, v9, v11, AnsiCodePage);
LABEL_37:
      if ( inited )
        *(_DWORD *)(v6 + 14720) = 2;
    }
LABEL_39:
    SaveDisabledKIRListToReg(0LL);
    goto LABEL_40;
  }
  v17 = v27;
  v18 = v26;
  if ( !*(_DWORD *)v16 )
    goto LABEL_31;
  v19 = *((_DWORD *)v15 + 18);
  if ( v19 != *(_DWORD *)(v16 + 24)
    || *(_DWORD *)v16 != (unsigned int)ComputeFileviewCheckSum((_DWORD *)(v16 + 4), (unsigned int)(v19 - 4))
    || *(_QWORD *)(v16 + 48) != v11 )
  {
    goto LABEL_31;
  }
  v21 = AnsiCodePage;
  if ( *(_DWORD *)(v16 + 12) != AnsiCodePage
    || (v22 = *((unsigned int *)v34 + 3), (v22 & 1) != 0)
    || *((_DWORD *)v30 + 712)
    && ((v22 & 2) != 0 || *(_QWORD *)(v16 + 40) != v9 || v17 != *(_QWORD *)(v16 + 56) || v18 != *(_QWORD *)(v16 + 64)) )
  {
LABEL_32:
    if ( *((_DWORD *)v30 + 712) )
    {
      inited = bInitCacheTable(v13, v35, v17, v18, v9, v11, v21);
      goto LABEL_37;
    }
    goto LABEL_39;
  }
  LODWORD(v34) = -1;
  SessionState = W32GetSessionState(AnsiCodePage, v22, v20);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL));
  if ( (_DWORD)v34 )
  {
LABEL_31:
    v21 = AnsiCodePage;
    goto LABEL_32;
  }
  *(_DWORD *)(v6 + 14720) = 1;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() && v17 == *(_QWORD *)(**(_QWORD **)(v6 + 14728) + 56LL) )
    *(_DWORD *)(v6 + 14720) |= 4u;
LABEL_40:
  if ( (*(_DWORD *)(v6 + 14720) & 3) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 24LL) = **(_QWORD **)(v6 + 14728)
                                                + ((80LL * *(unsigned int *)(**(_QWORD **)(v6 + 14728) + 16LL) + 327) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 32LL) = *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v6 + 14728) + 36LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 40LL) = *(_QWORD *)(*(_QWORD *)(v6 + 14728) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v6 + 14728) + 28LL)
                                                + (unsigned __int64)*(unsigned int *)(**(_QWORD **)(v6 + 14728) + 32LL);
    *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 8LL) = *(_DWORD *)(**(_QWORD **)(v6 + 14728) + 20LL);
    if ( (*(_DWORD *)(v6 + 14720) & 1) != 0 )
      bSetFntCacheReg(0LL, 0LL);
    else
      *(_DWORD *)(*(_QWORD *)(v6 + 14728) + 16LL) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  if ( v31 )
    GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v31);
}
