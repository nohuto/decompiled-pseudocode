/*
 * XREFs of ??$_Erase@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x1800809D4
 * Callers:
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x1800801B4 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 *     ?RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x180141120 (-RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDra.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@IPEAX@std@@@1@AEBI_K@Z @ 0x180027390 (--$_Find_last@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Erase<unsigned int>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // rdx
  _QWORD *v4; // r10
  __int64 *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         a2);
  v5 = (__int64 *)std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>(
                    v4,
                    v12,
                    v3,
                    v2)[1];
  if ( !v5 )
    return 0LL;
  v7 = v6[3];
  v8 = 2 * (v2 & v6[6]);
  if ( *(__int64 **)(v7 + 16 * (v2 & v6[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v7 + 16 * (v2 & v6[6])) == v5 )
    {
      v9 = v6[1];
      *(_QWORD *)(v7 + 16 * (v2 & v6[6])) = v9;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (v2 & v6[6])) == v5 )
  {
    *(_QWORD *)(v7 + 16 * (v2 & v6[6])) = *v5;
  }
  v10 = *v5;
  --v6[2];
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_Deallocate<16,0>((char *)v5, (const struct std::nothrow_t *)0x18);
  return 1LL;
}
