/*
 * XREFs of ?OnReaderDisconnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z @ 0x180094200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnDataSourceReaderDisconnected@GestureServices@@QEAAX_K@Z @ 0x180094240 (-OnDataSourceReaderDisconnected@GestureServices@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderPrincipal::OnReaderDisconnected(
        DataProviderPrincipal *this,
        struct BamoDataProviderStub *a2,
        unsigned __int64 a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v5; // rax

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v5 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                             + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  GestureServices::OnDataSourceReaderDisconnected(v5, a3);
  return 0LL;
}
