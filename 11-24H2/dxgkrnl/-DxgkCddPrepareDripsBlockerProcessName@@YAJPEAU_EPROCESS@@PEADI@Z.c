/*
 * XREFs of ?DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z @ 0x1402E67C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402E6808 (-PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 */

int __fastcall DxgkCddPrepareDripsBlockerProcessName(struct _EPROCESS *a1, char *a2, unsigned int a3)
{
  DXGGLOBAL *Global; // rax
  const char *v7; // rdx
  unsigned __int64 *v9; // [rsp+28h] [rbp-10h]

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::PrepareDripsBlockerProcessName(Global, v7, a1, a2, a3, v9);
}
