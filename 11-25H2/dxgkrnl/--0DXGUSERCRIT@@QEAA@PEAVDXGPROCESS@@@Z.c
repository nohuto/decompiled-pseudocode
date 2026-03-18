/*
 * XREFs of ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047630
 * Callers:
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14030A210 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkSetDisplayMode @ 0x14030F550 (DxgkSetDisplayMode.c)
 *     DxgkCheckOcclusion @ 0x1403263F0 (DxgkCheckOcclusion.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035B3A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035C5F8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

DXGUSERCRIT *__fastcall DXGUSERCRIT::DXGUSERCRIT(DXGUSERCRIT *this, struct DXGPROCESS *a2)
{
  DXGUSERCRIT *result; // rax

  *((_QWORD *)this + 1) = a2;
  result = this;
  *((_BYTE *)this + 16) = 0;
  return result;
}
