/*
 * XREFs of EtwpDereferenceStackEntry @ 0x1403DEC00
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     EtwpStackRundown @ 0x1403DEAE4 (EtwpStackRundown.c)
 *     EtwpGetCrimsonStackKey @ 0x1404C5C9C (EtwpGetCrimsonStackKey.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpDereferenceStackEntry(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  PSLIST_ENTRY v3; // rbx
  PSLIST_ENTRY result; // rax
  unsigned __int64 Alignment; // rax
  PSLIST_ENTRY v6; // r10
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned __int16 v9; // r11
  int Next; // r9d
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _SLIST_ENTRY *v13; // rdi
  PSLIST_ENTRY v14; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v15[18]; // [rsp+40h] [rbp-A8h] BYREF

  v3 = ListEntry;
  result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchangeAdd(
                                         (volatile signed __int32 *)&ListEntry[1].Next + 2,
                                         0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    Alignment = a2->Alignment;
    v6 = ListEntry;
    v14 = ListEntry;
    v15[1] = 8LL;
    v7 = *(_DWORD *)Alignment;
    v8 = *(_QWORD *)(Alignment + 1360);
    v15[0] = &v14;
    v9 = 1;
    do
    {
      Next = 32;
      if ( LODWORD(v6[2].Next) < 0x20 )
        Next = (int)v6[2].Next;
      v11 = 2LL * v9++;
      v12 = &v15[v11];
      *v12 = (char *)v6 + 40;
      v12[1] = (unsigned int)(8 * Next);
      v6 = v6[1].Next;
    }
    while ( v6 );
    EtwpLogKernelEvent((__int64)v15, v8, v7, v9, 6179, 0x500602u);
    do
    {
      v13 = v3[1].Next;
      result = RtlpInterlockedPushEntrySList(a2 + 1, v3);
      v3 = v13;
    }
    while ( v13 );
  }
  return result;
}
