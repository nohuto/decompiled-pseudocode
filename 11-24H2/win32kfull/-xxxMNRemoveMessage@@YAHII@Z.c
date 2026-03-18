/*
 * XREFs of ?xxxMNRemoveMessage@@YAHII@Z @ 0x140268B90
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 */

__int64 __fastcall xxxMNRemoveMessage(int a1, int a2)
{
  unsigned __int64 v5; // [rsp+20h] [rbp-48h]
  unsigned __int64 v6; // [rsp+20h] [rbp-48h]
  int v7[14]; // [rsp+30h] [rbp-38h] BYREF

  LODWORD(v5) = 2;
  memset(v7, 0, 48);
  if ( !(unsigned int)xxxInternalGetMessage((__int64)v7, 0LL, 0, 0, v5, 0) || v7[2] != a1 && v7[2] != a2 )
    return 0LL;
  LODWORD(v6) = 1;
  xxxInternalGetMessage((__int64)v7, 0LL, v7[2], v7[2], v6, 0);
  return 1LL;
}
