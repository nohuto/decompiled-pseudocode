/*
 * XREFs of ImageList_Destroy @ 0x180390EE4
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1802E82C8 (--1-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_Destroy@@YAH0@ZU.c)
 *     CreateBitmapFromIcon @ 0x180552990 (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18098C458;
  if ( qword_18098C458 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C458, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18098C458;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
