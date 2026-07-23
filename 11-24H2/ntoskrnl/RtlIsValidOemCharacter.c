/*
 * XREFs of RtlIsValidOemCharacter @ 0x1409075B0
 * Callers:
 *     RtlGenerate8dot3Name @ 0x140906940 (RtlGenerate8dot3Name.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x1403FAB40 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 */

BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v3; // dl
  struct _LIST_ENTRY *Blink; // r9
  struct _LIST_ENTRY *Flink; // r10
  __int64 v6; // rcx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned __int16 v9; // dx
  WCHAR v10; // r9
  __int16 v11; // r11
  __int64 v12; // r10
  __int16 v13; // ax
  __int64 v15; // r10
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  RtlpIsUtf8Process();
  _InterlockedOr(v16, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( v3 == 1 )
  {
    if ( *Char <= 0x7Fu )
    {
      *Char = NLS_UPCASE((__int64)CurrentServerSiloGlobals[75].Flink, *Char);
      return 1;
    }
  }
  else
  {
    Blink = CurrentServerSiloGlobals[70].Blink;
    Flink = CurrentServerSiloGlobals[71].Flink;
    v6 = *Char;
    if ( WORD2(CurrentServerSiloGlobals[69].Flink) )
    {
      v7 = *((unsigned __int16 *)&Flink->Flink + v6);
      v8 = *((unsigned __int16 *)&CurrentServerSiloGlobals[74].Flink->Flink + ((unsigned __int64)v7 >> 8));
      if ( (_WORD)v8 )
        v9 = *((_WORD *)&CurrentServerSiloGlobals[72].Flink->Flink + v8 + (unsigned __int8)v7);
      else
        v9 = *((_WORD *)&Blink->Flink + (unsigned __int8)v7);
      v10 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[75].Flink, v9);
      v13 = *(_WORD *)(v12 + 2LL * v10);
    }
    else
    {
      v10 = NLS_UPCASE(
              (__int64)CurrentServerSiloGlobals[75].Flink,
              *((_WORD *)&Blink->Flink + *((unsigned __int8 *)&Flink->Flink + v6)));
      v13 = *(char *)(v10 + v15);
    }
    if ( v13 != v11 )
    {
      *Char = v10;
      return 1;
    }
  }
  return 0;
}
