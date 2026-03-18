/*
 * XREFs of NtGdiGetPublicFontTableChangeCookie @ 0x1401C5B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetPublicFontTableChangeCookie(int a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  HSEMAPHORE v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( !*(_QWORD *)(v2 + 20344) || !*(_QWORD *)(v2 + 20416) )
    return 0LL;
  SEMOBJ<17>::SEMOBJ<17>(&v5, v2 + 4872);
  v3 = *(_DWORD *)(*(_QWORD *)(v2 + 20416) + 32LL);
  SEMOBJ<17>::vUnlock(&v5);
  return v3;
}
