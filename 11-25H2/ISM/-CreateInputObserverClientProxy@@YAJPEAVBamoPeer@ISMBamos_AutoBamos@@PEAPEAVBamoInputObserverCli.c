/*
 * XREFs of ?CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientProxy@@@Z @ 0x180135E3C
 * Callers:
 *     ?Materialize_BamoInputObserverClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011BF8C (-Materialize_BamoInputObserverClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18002EFA0 (-GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateInputObserverClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputObserverClientProxy **a2)
{
  struct ISMBamos_AutoBamos::BamoConnection *Connection; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rbx

  Connection = ISMBamos_AutoBamos::BamoPeer::GetConnection(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)Connection + 31) + 8LL) + 136LL))(*((_QWORD *)Connection + 31) + 8LL);
  v5 = operator new(0x40uLL);
  v5[6] = 0;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 2) = &BamoImpl::BamoInputObserverClientProxyImpl::`vftable';
  *(_QWORD *)v5 = &InputObserverClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v5 + 1) = &InputObserverClientProxy::`vftable'{for `IInputObserverClientProxy'};
  *((_QWORD *)v5 + 6) = v4;
  if ( v4 )
    (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
  v5[14] = 1;
  *a2 = (struct BamoInputObserverClientProxy *)v5;
  return 0LL;
}
