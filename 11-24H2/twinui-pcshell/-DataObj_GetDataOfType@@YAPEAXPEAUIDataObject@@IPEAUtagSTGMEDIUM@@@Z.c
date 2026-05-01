/*
 * XREFs of ?DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z @ 0x18068D3D8
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068D47C (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LPVOID __fastcall DataObj_GetDataOfType(struct IDataObject *a1, __int16 a2, struct tagSTGMEDIUM *a3)
{
  LPVOID v3; // rbx
  __int16 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+22h] [rbp-36h]
  __int16 v8; // [rsp+26h] [rbp-32h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  v6 = a2;
  v7 = 0;
  v8 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v11 = -1;
  v10 = 1;
  v12 = 1LL;
  if ( !((unsigned int (__fastcall *)(struct IDataObject *, __int16 *))a1->lpVtbl->GetData)(a1, &v6) )
  {
    v3 = GlobalLock(a3->hBitmap);
    if ( !v3 )
      ReleaseStgMedium(a3);
  }
  return v3;
}
