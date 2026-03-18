/*
 * XREFs of ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x140259878
 * Callers:
 *     ?GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x14032663C (-GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::QueryFonts(
        PUBLIC_PFTOBJ *this,
        struct _UNIVERSAL_FONT_ID *a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct PFF **i; // r8
  struct PFF *j; // rcx
  __int64 v13; // rcx
  struct PFF *v14; // rax
  __int64 v15; // r8
  int v16; // r9d
  HSEMAPHORE v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  *a4 = *(union _LARGE_INTEGER *)((char *)this + 8);
  v9 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  if ( a2 && a3 )
  {
    SEMOBJ<17>::SEMOBJ<17>(&v18, v9 + 4872);
    if ( *(_DWORD *)(v9 + 24304) == 2 )
    {
      v5 = 1;
      *(_QWORD *)a2 = *(_QWORD *)(v9 + 24304);
    }
    v10 = *(_QWORD *)this;
    for ( i = (struct PFF **)(*(_QWORD *)this + 40LL);
          (unsigned __int64)i < v10 + 8 * (unsigned __int64)*(unsigned int *)(v10 + 24) + 40 && v5 < a3;
          i = (struct PFF **)(v15 + 8) )
    {
      for ( j = *i; ; j = (struct PFF *)*((_QWORD *)v14 + 1) )
      {
        v14 = SkipInvalidPff(j);
        if ( !v14 || v5 >= a3 )
          break;
        if ( (*((_DWORD *)v14 + 13) & 0x20) == 0 )
        {
          v13 = v5;
          v5 += v16;
          *((_DWORD *)a2 + 2 * v13 + 1) = v16;
          *((_DWORD *)a2 + 2 * v13) = *((_DWORD *)v14 + 36);
        }
      }
      v10 = *(_QWORD *)this;
    }
    SEMOBJ<17>::vUnlock(&v18);
    return v5;
  }
  else
  {
    LOBYTE(v4) = *(_DWORD *)(v9 + 24304) == 2;
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 28LL) + v4);
  }
}
