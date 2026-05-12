/*
 * XREFs of StorPortResume @ 0x1400749D0
 * Callers:
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     StorPortResumeVrfy @ 0x1401C1740 (StorPortResumeVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140071A58 (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall StorPortResume(__int64 a1)
{
  __int64 v2; // r8
  int *v3; // rdi
  int *v4; // rsi
  int *v5; // r9
  int *v6; // rcx
  __int64 v7; // rcx
  int *v9; // rdx
  char *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int *v13; // [rsp+70h] [rbp+18h] BYREF
  int *v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  RaidpPortGetAdapter(a1, &v13, &v14);
  v3 = v13;
  v4 = v14;
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v5 = v14;
    v6 = v14;
    if ( v13 )
    {
      v5 = v13;
      v6 = v13;
    }
    DbgLogRequest((__int64)v6, 15, retaddr, (__int64)v5, 0LL, 0LL, 0LL);
  }
  if ( v3 )
  {
    v7 = (unsigned int)v3[14];
  }
  else if ( v4 )
  {
    v7 = (unsigned int)v4[14];
  }
  else
  {
    v7 = 255LL;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v11) = v7;
    McTemplateK0pq_EtwWriteTransfer(v7, &EventPortResume, v2, a1, v11);
  }
  if ( !v3 )
    return 0;
  _InterlockedExchange(v3 + 345, 0);
  v9 = v13 + 324;
  if ( _InterlockedCompareExchange(v13 + 328, 134684676, 134684677) == 134684677 && v9 )
  {
    v10 = (char *)(v13 + 252);
    v9[8] = 4;
    RaidQueueDeferredItem(v10, (struct _SLIST_ENTRY *)v9);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140170460 & 0x800) != 0 )
      DbgLogRequest((__int64)v13, 22, retaddr, 469LL, 0LL, 0LL, 0LL);
  }
  return 1;
}
