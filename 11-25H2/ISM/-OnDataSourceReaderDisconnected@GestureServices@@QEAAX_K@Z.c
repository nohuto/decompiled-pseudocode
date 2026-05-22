/*
 * XREFs of ?OnDataSourceReaderDisconnected@GestureServices@@QEAAX_K@Z @ 0x180094040
 * Callers:
 *     ?OnReaderDisconnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z @ 0x180094000 (-OnReaderDisconnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z.c)
 * Callees:
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x18002360C (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x180083658 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 */

void __fastcall GestureServices::OnDataSourceReaderDisconnected(GestureServices *this, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r10
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>(
         (__int64)this,
         (__int64)&v10);
  v5 = v3[36];
  v6 = 2 * (v3[39] & v2);
  v7 = v3[34];
  v8 = *(_QWORD *)(v5 + 8 * v6 + 8);
  if ( v8 == v7 )
  {
LABEL_6:
    v8 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 8 * v6);
    while ( v4 != *(_QWORD *)(v8 + 16) )
    {
      if ( v8 == v9 )
        goto LABEL_6;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  if ( !v8 )
    v8 = v3[34];
  if ( v8 != v7 )
    GestureHandler::OnDataSourceReaderDisconnected(*(GestureHandler **)(v8 + 24));
}
