/*
 * XREFs of ExpPlProcessNotifications @ 0x1406492D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY ExpPlProcessNotifications()
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rbx
  _QWORD *v2; // rdx
  int v3; // [rsp+58h] [rbp+10h] BYREF

  dword_140E28DF0 = 0;
  result = RtlpInterlockedFlushSList(&stru_140E28DE0);
  p_Next = &result->Next;
  if ( result )
  {
    do
    {
      v2 = p_Next;
      p_Next = (_QWORD *)*p_Next;
      *((_DWORD *)v2 + 4) = 0;
      v3 = *((_DWORD *)v2 - 18);
      result = (PSLIST_ENTRY)ZwUpdateWnfStateData(v2 - 2, &v3, 4LL, 0LL, 0LL, 0, 0);
    }
    while ( p_Next );
  }
  return result;
}
