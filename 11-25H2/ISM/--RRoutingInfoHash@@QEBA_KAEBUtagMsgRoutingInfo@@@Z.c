/*
 * XREFs of ??RRoutingInfoHash@@QEBA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18007146C
 * Callers:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@V21@@Z @ 0x180094CD0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtagMsgRoutingInfo@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoutingInfoHash::operator()(__int64 a1, int *a2)
{
  int v2; // eax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+8h] [rbp+8h]
  int v11; // [rsp+Ch] [rbp+Ch]

  v2 = *a2;
  v3 = 0LL;
  v11 = HIDWORD(a1);
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  v10 = v2;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)&v10 + v4++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v4 < 4 );
  v10 = a2[1];
  do
  {
    v8 = *((unsigned __int8 *)&v10 + v3++);
    v5 = 0x100000001B3LL * (v8 ^ v5);
  }
  while ( v3 < 4 );
  return v6 ^ v5;
}
