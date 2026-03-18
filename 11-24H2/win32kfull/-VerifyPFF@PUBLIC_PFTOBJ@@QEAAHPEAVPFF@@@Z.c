/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x14030DD0C
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x140327990 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B6EEC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(PUBLIC_PFTOBJ *this, struct PFF *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  unsigned int v9; // r8d
  struct PFF **v10; // rdx
  unsigned int v11; // ebx
  struct PFF *i; // rcx
  struct PFF *v13; // rax
  HSEMAPHORE v14; // [rsp+40h] [rbp+18h] BYREF

  result = PFTOBJ::bIsPrivatePFT(this, (__int64)a2, a3);
  if ( (_DWORD)result )
  {
    SessionState = W32GetSessionState(v7, v6);
    SEMOBJ<17>::SEMOBJ<17>(&v14, *(_QWORD *)(SessionState + 96) + 4872LL);
    v9 = 0;
    v10 = (struct PFF **)(*(_QWORD *)this + 40LL);
    v11 = 1;
    do
    {
      if ( v10 )
      {
        for ( i = *v10; ; i = (struct PFF *)*((_QWORD *)v13 + 1) )
        {
          v13 = SkipInvalidPff(i);
          if ( !v13 )
            break;
          if ( a2 == v13 )
            goto LABEL_10;
        }
      }
      ++v9;
      ++v10;
    }
    while ( v9 < 0x14 );
    v11 = 0;
LABEL_10:
    SEMOBJ<17>::vUnlock(&v14);
    return v11;
  }
  return result;
}
