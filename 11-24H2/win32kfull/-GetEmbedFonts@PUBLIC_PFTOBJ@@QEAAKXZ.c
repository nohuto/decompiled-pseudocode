/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x14030DBB4
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x140337990 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B6EEC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(PUBLIC_PFTOBJ *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned int CurrentThreadId; // ebp
  __int64 v8; // rdx
  int v9; // ecx
  __int64 SessionState; // rax
  __int64 v11; // r11
  struct PFF **v12; // r9
  struct PFF *i; // rcx
  __int64 j; // rdx
  int v15; // r10d
  unsigned int v16; // eax
  struct PFF *v17; // rax
  struct PFF *v18; // r8
  HSEMAPHORE v19; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  result = PFTOBJ::bIsPrivatePFT(this, a2, a3);
  if ( (_DWORD)result )
  {
    v6 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    SessionState = W32GetSessionState(v9, v8);
    SEMOBJ<17>::SEMOBJ<17>(&v19, *(_QWORD *)(SessionState + 96) + 4872LL);
    v11 = 20LL;
    v12 = (struct PFF **)(*(_QWORD *)this + 40LL);
    do
    {
      if ( v12 )
      {
        for ( i = *v12; ; i = (struct PFF *)*((_QWORD *)v18 + 1) )
        {
          v17 = SkipInvalidPff(i);
          v18 = v17;
          if ( !v17 )
            break;
          for ( j = *((_QWORD *)v17 + 19); j; j = *(_QWORD *)(j + 16) )
          {
            v15 = *(_DWORD *)(j + 12);
            if ( (*(_DWORD *)(j + 8) & 4) != 0 )
            {
              v16 = v4 + 1;
              if ( v15 != CurrentThreadId )
                v16 = v4;
              v4 = v16;
            }
            else if ( v15 == v6 )
            {
              ++v4;
            }
          }
        }
      }
      ++v12;
      --v11;
    }
    while ( v11 );
    SEMOBJ<17>::vUnlock(&v19);
    return v4;
  }
  return result;
}
