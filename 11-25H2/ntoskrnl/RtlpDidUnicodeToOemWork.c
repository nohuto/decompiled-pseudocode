/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x1408E6310
 * Callers:
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1408E7AB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1408E87F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140A6AE40 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1408E7140 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // rbx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v5; // r11
  unsigned int v6; // ecx
  struct _LIST_ENTRY *Flink; // rdi
  __int16 v8; // r9
  __int16 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 i; // rax
  __int64 v16; // rbp
  signed __int32 v17[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(a1) )
    return 1;
  _InterlockedOr(v17, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = *v2;
  Flink = CurrentServerSiloGlobals[74].Flink;
  v8 = WORD2(CurrentServerSiloGlobals[68].Blink);
  v9 = (__int16)CurrentServerSiloGlobals[69].Flink;
  if ( WORD2(CurrentServerSiloGlobals[69].Flink) )
  {
    v10 = 0LL;
    v11 = 0;
    while ( (unsigned int)v10 < v6 )
    {
      v12 = *((_QWORD *)v2 + 1);
      v13 = *(unsigned __int8 *)(v10 + v12);
      if ( *((_WORD *)&Flink->Flink + v13) && (v16 = (unsigned int)(v10 + 1), (unsigned int)v16 < v6) )
      {
        LODWORD(v10) = v10 + 1;
        if ( ((char)v13 << 8) + *(unsigned __int8 *)(v16 + v12) == v8
          && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v11) != v9 )
        {
          return 0;
        }
      }
      else if ( (char)v13 == (unsigned __int8)v8 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v11) != v9 )
      {
        return 0;
      }
      v10 = (unsigned int)(v10 + 1);
      ++v11;
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      if ( *(char *)(i + *((_QWORD *)v2 + 1)) == (unsigned __int8)v8 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * i) != v9 )
        return 0;
    }
  }
  return v5;
}
