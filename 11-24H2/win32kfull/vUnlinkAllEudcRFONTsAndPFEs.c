/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEs @ 0x1401ED0FC
 * Callers:
 *     bDeleteAllFlEntry @ 0x1400FE098 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030C520 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1401ED1F0 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEs(unsigned int a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 j; // rdi
  HSEMAPHORE v12; // [rsp+48h] [rbp+10h] BYREF
  HSEMAPHORE v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v13, v3 + 4872);
  SEMOBJ<18>::SEMOBJ<18>(&v12, v3 + 4872);
  v6 = *(_QWORD *)(v3 + 20416);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(v6 + 8 * i + 40);
    if ( v4 )
      vUnlinkAllEudcRFONTsAndPFEsWorker(a1);
  }
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 20424LL);
  if ( *(_DWORD *)(v9 + 24) )
  {
    do
    {
      if ( *(_QWORD *)(v9 + 8 * v8 + 40) )
        vUnlinkAllEudcRFONTsAndPFEsWorker(a1);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v9 + 24) );
  }
  v10 = *(_QWORD *)(v3 + 20408);
  if ( v10 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v10 + 24); j = (unsigned int)(j + 1) )
    {
      if ( *(_QWORD *)(v10 + 8 * j + 40) )
        vUnlinkAllEudcRFONTsAndPFEsWorker(a1);
    }
  }
  SEMOBJ<18>::vUnlock(&v12);
  SEMOBJ<17>::vUnlock(&v13);
}
