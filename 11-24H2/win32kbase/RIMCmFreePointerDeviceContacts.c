/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x14019AA40
 * Callers:
 *     RIMFreePointerDevice @ 0x1401E03EC (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1401E6C48 (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F19DC (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rcx
  __int64 result; // rax

  v2 = *(char **)(a1 + 1000);
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *(_QWORD *)(a1 + 1000) = 0LL;
    *(_DWORD *)(a1 + 1008) = 0;
  }
  v3 = *(char **)(a1 + 976);
  if ( v3 )
  {
    GreDeleteFastMutex(v3);
    *(_QWORD *)(a1 + 976) = 0LL;
  }
  result = a1 + 984;
  *(_QWORD *)(a1 + 992) = a1 + 984;
  *(_QWORD *)(a1 + 984) = a1 + 984;
  return result;
}
