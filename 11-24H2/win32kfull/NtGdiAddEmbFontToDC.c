/*
 * XREFs of NtGdiAddEmbFontToDC @ 0x140327990
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400DB6B8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401B77CC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1402FEB90 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x14030DD0C (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

__int64 __fastcall NtGdiAddEmbFontToDC(HDC a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  struct PFF *PFFFromId; // rdi
  __int64 v9; // r8
  _QWORD v10[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v11[14]; // [rsp+30h] [rbp-78h] BYREF
  HSEMAPHORE v12; // [rsp+C8h] [rbp+20h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v5 = *a2;
    v6 = 0;
    v7 = *(_QWORD *)(W32GetSessionState(MmUserProbeAddress, v3) + 96);
    SEMOBJ<17>::SEMOBJ<17>(&v12, v7 + 4872);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v10, *(struct PFT **)(v7 + 20408));
    if ( v10[0] )
    {
      PFFFromId = GetPFFFromId(*(struct PFT **)(v7 + 20408), (unsigned int)v5, 0LL);
      if ( (unsigned int)PUBLIC_PFTOBJ::VerifyPFF((PUBLIC_PFTOBJ *)v10, PFFFromId, v9) )
        v6 = XDCOBJ::bAddRemoteFont((XDCOBJ *)v11, PFFFromId);
    }
    SEMOBJ<17>::vUnlock(&v12);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
    return v6;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
    return 0LL;
  }
}
