/*
 * XREFs of ?DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z @ 0x18068D68C
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068D47C (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataObj_GetPath(struct IDataObject *a1, unsigned __int16 *a2)
{
  struct IDataObjectVtbl *lpVtbl; // rax
  __int64 result; // rax
  UINT FileW; // ebx
  __int16 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+22h] [rbp-3Eh]
  __int16 v8; // [rsp+26h] [rbp-3Ah]
  __int64 v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  __int64 v12; // [rsp+38h] [rbp-28h]
  STGMEDIUM hDrop; // [rsp+40h] [rbp-20h] BYREF

  v11 = -1;
  hDrop.pUnkForRelease = 0LL;
  *a2 = 0;
  v9 = 0LL;
  v6 = 15;
  v7 = 0;
  v8 = 0;
  v10 = 1;
  v12 = 1LL;
  lpVtbl = a1->lpVtbl;
  *(_OWORD *)&hDrop.tymed = 0LL;
  result = ((__int64 (__fastcall *)(struct IDataObject *, __int16 *, STGMEDIUM *))lpVtbl->GetData)(a1, &v6, &hDrop);
  if ( (int)result >= 0 )
  {
    FileW = DragQueryFileW((HDROP)hDrop.hBitmap, 0, a2, 0x824u);
    ReleaseStgMedium(&hDrop);
    return FileW == 0 ? 0x80004005 : 0;
  }
  return result;
}
