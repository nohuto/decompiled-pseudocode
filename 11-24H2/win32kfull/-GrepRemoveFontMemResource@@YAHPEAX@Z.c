/*
 * XREFs of ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x140214100
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x140114FB0 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiRemoveFontMemResourceEx @ 0x1402140E0 (NtGdiRemoveFontMemResourceEx.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1400FD81C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401B77CC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 */

__int64 __fastcall GrepRemoveFontMemResource(void *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v4; // rbx
  struct PFT *v5; // rcx
  struct PFF *PFFFromId; // rax
  BOOL v7; // eax
  HSEMAPHORE v8; // rcx
  struct PFT *v10; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v11; // [rsp+58h] [rbp+10h] BYREF
  struct PFF **v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = (unsigned int)a1;
  v3 = 0;
  v12 = 0LL;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v11, v4 + 4872);
  v5 = *(struct PFT **)(v4 + 20408);
  v10 = v5;
  if ( v5 )
  {
    PFFFromId = GetPFFFromId(v5, v2, &v12);
    if ( PFFFromId )
    {
      if ( (*((_DWORD *)PFFFromId + 13) & 0x10) != 0 )
      {
        v7 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v10, PFFFromId, v12, 0x30u);
        v8 = v11;
        v3 = v7;
        if ( v7 )
          v8 = 0LL;
        v11 = v8;
      }
    }
  }
  SEMOBJ<17>::vUnlock(&v11);
  return v3;
}
