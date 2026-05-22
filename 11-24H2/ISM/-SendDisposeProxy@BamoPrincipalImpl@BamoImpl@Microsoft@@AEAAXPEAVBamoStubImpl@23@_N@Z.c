/*
 * XREFs of ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x180044F40
 * Callers:
 *     ?Thunk_AckProxyReference_8@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800543C0 (-Thunk_AckProxyReference_8@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBam.c)
 *     ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z @ 0x180057460 (-AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z.c)
 *     ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18005BBF0 (-Thunk_RequestDisposeProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoB.c)
 *     ?RequestDisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x180061F70 (-RequestDisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z.c)
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180044CA8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2,
        char a3)
{
  __int64 v3; // rdi
  void (__fastcall *v6)(__int64, _QWORD, __int64); // rbx
  unsigned int ItemId; // eax
  __int64 v8; // r8

  v3 = *((_QWORD *)a2 + 4);
  v6 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 80LL);
  ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a2 + 3));
  LOBYTE(v8) = a3;
  v6(v3, ItemId, v8);
  if ( a3 )
    *((_BYTE *)a2 + 58) = 1;
  *((_BYTE *)a2 + 56) = 0;
  if ( !a3 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a2 + 56LL))(a2);
}
