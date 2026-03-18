/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x14030D064
 * Callers:
 *     bDeleteFlEntry @ 0x14030C64C (bDeleteFlEntry.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019494C (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x14030D168 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rdi
  __int64 j; // rbx
  __int64 v10; // rbx
  __int64 k; // rdi
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v13; // [rsp+60h] [rbp+18h] BYREF
  HSEMAPHORE v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v14, v4 + 4872);
  SEMOBJ<18>::SEMOBJ<18>(&v13, v4 + 4872);
  v6 = *(_QWORD *)(v4 + 20416);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v6 + 8 * i + 40) )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v12, v5);
  v8 = v12[0];
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v8 + 24); j = (unsigned int)(j + 1) )
  {
    if ( *(_QWORD *)(v8 + 8 * j + 40) )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  v10 = *(_QWORD *)(v4 + 20408);
  if ( v10 )
  {
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v10 + 24); k = (unsigned int)(k + 1) )
    {
      if ( *(_QWORD *)(v10 + 8 * k + 40) )
        vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
    }
  }
  SEMOBJ<18>::vUnlock(&v13);
  SEMOBJ<17>::vUnlock(&v14);
}
