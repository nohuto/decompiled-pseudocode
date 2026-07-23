/*
 * XREFs of PiUEventCoalesceBroadcastEvents @ 0x140A60280
 * Callers:
 *     PiUEventQueueBroadcastEventEntry @ 0x140A601C4 (PiUEventQueueBroadcastEventEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

char __fastcall PiUEventCoalesceBroadcastEvents(__int64 a1)
{
  PVOID *v1; // rbx
  PVOID *v3; // rax
  int v4; // ecx
  char *v5; // rcx
  __int64 v6; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = (PVOID *)PiUEventBroadcastEventQueue;
  DestinationString = 0LL;
  String2 = 0LL;
  while ( 1 )
  {
    v3 = &PiUEventBroadcastEventQueue;
    if ( v1 == &PiUEventBroadcastEventQueue )
      return (char)v3;
    v4 = *((_DWORD *)v1 + 5);
    if ( v4 == *(_DWORD *)(a1 + 20) )
    {
      LODWORD(v3) = *(_DWORD *)(a1 + 24);
      if ( *((_DWORD *)v1 + 6) == (_DWORD)v3 )
      {
        if ( v4 == 3 )
        {
          v5 = *(char **)((char *)v1 + 28) - *(_QWORD *)(a1 + 28);
          if ( !v5 )
            v5 = *(char **)((char *)v1 + 36) - *(_QWORD *)(a1 + 36);
          if ( !v5 )
          {
            RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 44));
            RtlInitUnicodeString(&String2, (PCWSTR)v1 + 22);
            LOBYTE(v3) = RtlEqualUnicodeString(&DestinationString, &String2, 1u);
            if ( (_BYTE)v3 )
            {
LABEL_8:
              *((_BYTE *)v1 + 16) = 0;
              return (char)v3;
            }
          }
        }
        else
        {
          if ( v4 != 2 )
            goto LABEL_8;
          v6 = *(_QWORD *)(a1 + 28) - *(_QWORD *)((char *)v1 + 28);
          if ( !v6 )
            v6 = *(_QWORD *)(a1 + 36) - *(_QWORD *)((char *)v1 + 36);
          if ( !v6 )
            goto LABEL_8;
        }
      }
    }
    v1 = (PVOID *)*v1;
  }
}
