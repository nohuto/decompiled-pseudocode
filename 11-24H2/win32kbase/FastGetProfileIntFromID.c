/*
 * XREFs of FastGetProfileIntFromID @ 0x14009F4A0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     FastGetProfileIntW @ 0x14009FA20 (FastGetProfileIntW.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall FastGetProfileIntFromID(int a1, int a2, ULONG MessageId, int a4, PULONG Value, int a6)
{
  int v9; // ebx
  BYTE *Text; // rdx
  __int64 v11; // rbx
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+30h] [rbp-E8h] BYREF
  _WORD v14[80]; // [rsp+40h] [rbp-D8h] BYREF

  MessageResourceEntry = 0LL;
  v9 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, MessageId, &MessageResourceEntry) < 0 )
  {
LABEL_9:
    v14[v9] = 0;
    return FastGetProfileIntW(a1, a2, (int)v14, a4, Value, a6);
  }
  Text = MessageResourceEntry->Text;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)&Text[2 * v11] );
  v9 = v11 - 2;
  if ( v9 >= 0 )
  {
    if ( v9 > 79 )
      v9 = 79;
    memmove(v14, Text, 2LL * v9);
    goto LABEL_9;
  }
  return FastGetProfileIntW(a1, a2, (int)v14, a4, Value, a6);
}
