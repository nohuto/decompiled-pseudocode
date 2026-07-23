/*
 * XREFs of EtwpDereferenceStackEntry @ 0x1403F6280
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpTraceStackKey @ 0x1403F5C40 (EtwpTraceStackKey.c)
 *     EtwpStackRundown @ 0x1403F6164 (EtwpStackRundown.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CCBE8 (EtwpGetCrimsonStackKey.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
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
    EtwpLogKernelEvent((struct _KTHREAD *)v15, v8, v7, v9, 0x1823u, 0x500602u);
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
