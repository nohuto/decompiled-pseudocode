/*
 * XREFs of EtwpFreeStackCache @ 0x140A3A000
 * Callers:
 *     EtwpEnableStackCaching @ 0x140A39C78 (EtwpEnableStackCaching.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeStackCache(char *P)
{
  __int64 i; // rsi
  PSLIST_ENTRY v3; // rbx
  PSLIST_ENTRY v4; // rcx
  char *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
  {
    while ( 1 )
    {
      v5 = &P[16 * i + 32 + 8 * i];
      v6 = *(_QWORD **)v5;
      if ( *(char **)v5 == v5 )
        break;
      if ( (char *)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      v7[1] = v5;
      do
      {
        v8 = (_QWORD *)v6[2];
        ExFreePoolWithTag(v6, 0);
        v6 = v8;
      }
      while ( v8 );
    }
  }
  v3 = RtlpInterlockedFlushSList((PSLIST_HEADER)P + 1);
  while ( v3 )
  {
    v4 = v3;
    v3 = v3->Next;
    ExFreePoolWithTag(v4, 0);
  }
  ExFreePoolWithTag(P, 0);
}
