/*
 * XREFs of ?InitFromItem@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18022E0C0
 * Callers:
 *     ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1801C5700 (-GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::InitFromItem(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rax
  int v6; // ebx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v4 = *a2;
  v8 = 0LL;
  v6 = (*v4)(a2, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v8);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, a4, 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v6;
}
