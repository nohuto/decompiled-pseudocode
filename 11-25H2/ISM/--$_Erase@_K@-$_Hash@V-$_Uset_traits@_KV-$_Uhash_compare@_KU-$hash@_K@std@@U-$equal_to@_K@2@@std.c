/*
 * XREFs of ??$_Erase@_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x1800230A8
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18002286C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800F51D0 (-DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x18002360C (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 */

__int64 std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Erase<unsigned __int64>()
{
  __int64 v0; // rax
  __int64 *v1; // rdx
  _QWORD *v2; // r11
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 *v5; // rax
  __int64 v6; // r10
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v0 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>();
  v3 = v2[3];
  v4 = v2[6] & v0;
  v5 = (__int64 *)v2[1];
  v6 = 2 * v4;
  v7 = *(__int64 **)(v3 + 8 * v6 + 8);
  if ( v7 == v5 )
  {
LABEL_6:
    v7 = 0LL;
  }
  else
  {
    v8 = *v1;
    while ( v8 != v7[2] )
    {
      if ( v7 == *(__int64 **)(v3 + 8 * v6) )
        goto LABEL_6;
      v7 = (__int64 *)v7[1];
    }
  }
  if ( !v7 )
    return 0LL;
  if ( *(__int64 **)(v3 + 8 * v6 + 8) == v7 )
  {
    if ( *(__int64 **)(v3 + 8 * v6) == v7 )
      *(_QWORD *)(v3 + 8 * v6) = v5;
    else
      v5 = (__int64 *)v7[1];
    *(_QWORD *)(v3 + 8 * v6 + 8) = v5;
  }
  else if ( *(__int64 **)(v3 + 8 * v6) == v7 )
  {
    *(_QWORD *)(v3 + 8 * v6) = *v7;
  }
  v9 = *v7;
  --v2[2];
  *(_QWORD *)v7[1] = v9;
  *(_QWORD *)(v9 + 8) = v7[1];
  std::_Deallocate<16,0>((char *)v7, (const struct std::nothrow_t *)0x18);
  return 1LL;
}
