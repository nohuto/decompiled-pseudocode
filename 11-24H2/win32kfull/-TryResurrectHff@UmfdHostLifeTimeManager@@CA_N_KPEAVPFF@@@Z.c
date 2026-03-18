/*
 * XREFs of ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140220F04
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x140336620 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400B7194 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401B7374 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectHff(__int64 a1, struct PFF *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  char *v6; // rax
  _QWORD *v7; // rbx
  char *v8; // r12
  __int64 i; // r14
  __int64 v10; // rcx
  __int64 j; // rbx
  ULONG_PTR v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 k; // rbx
  ULONG_PTR v16; // rcx
  __int64 SessionState; // rax
  _BYTE *v18; // rax
  __int64 v19; // rdi
  ULONG_PTR v20; // rcx
  __int64 m; // rbx
  ULONG_PTR v23; // rcx
  void *v24; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *((unsigned int *)a2 + 9);
  v4 = *((_QWORD *)a2 + 12);
  v6 = (char *)PALLOCMEM(12 * (int)v2, 1886221383LL);
  v24 = v6;
  v7 = v6;
  if ( !v6 )
  {
    EngSetLastError(8u);
LABEL_32:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v24);
    return 0;
  }
  v8 = &v6[8 * v2];
  for ( i = 0LL; (unsigned int)i < (unsigned int)v2; i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * i);
    if ( !*(_QWORD *)(v10 + 16) )
    {
      v26 = 0LL;
      v25 = 0;
      if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v10, &v26, &v25, 0) )
      {
        for ( j = 0LL; (unsigned int)j < (unsigned int)v2; j = (unsigned int)(j + 1) )
        {
          v12 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * j);
          if ( *(_QWORD *)(v12 + 16) )
            EngUnmapFontFileFD(v12);
        }
        goto LABEL_32;
      }
    }
    v7[i] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * i) + 16LL);
    *(_DWORD *)&v8[4 * i] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * i) + 24LL);
  }
  if ( !(unsigned int)UmfdInsertFontFileViewForLookup(*((struct FONTFILEVIEW ***)a2 + 26), *((unsigned int *)a2 + 9)) )
  {
    for ( k = 0LL; (unsigned int)k < (unsigned int)v2; k = (unsigned int)(k + 1) )
    {
      v16 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * k);
      if ( *(_QWORD *)(v16 + 16) )
        EngUnmapFontFileFD(v16);
    }
    goto LABEL_32;
  }
  SessionState = W32GetSessionState(v14, v13);
  v18 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, char *, _QWORD, _DWORD, _DWORD))(v4 + 3040))(
                   *((unsigned int *)a2 + 9),
                   *((_QWORD *)a2 + 26),
                   v7,
                   v8,
                   *((_QWORD *)a2 + 5),
                   *(unsigned __int16 *)(*(_QWORD *)(SessionState + 96) + 20360LL),
                   0);
  if ( v18 == (_BYTE *)0xFFFFFFFFLL || !v18 )
  {
    for ( m = 0LL; (unsigned int)m < (unsigned int)v2; m = (unsigned int)(m + 1) )
    {
      v23 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * m);
      if ( *(_QWORD *)(v23 + 16) )
        EngUnmapFontFileFD(v23);
    }
    goto LABEL_32;
  }
  v18[24] = 1;
  *(_OWORD *)a1 = *(_OWORD *)v18;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v18 + 1);
  EngFreeMem(v18);
  v19 = 0LL;
  for ( *(_QWORD *)(a1 + 8) = a2; (unsigned int)v19 < (unsigned int)v2; v19 = (unsigned int)(v19 + 1) )
  {
    v20 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * v19);
    if ( *(_QWORD *)(v20 + 16) )
      EngUnmapFontFileFD(v20);
  }
  if ( v7 )
    Win32FreePool(v7);
  return 1;
}
