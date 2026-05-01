/*
 * XREFs of ?RmpPsmAppFamilyInitialize@@YAXPEAU_RM_PSM_APP_FAMILY_ID@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000C4BC
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003A980 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D27C (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

void __fastcall RmpPsmAppFamilyInitialize(struct _RM_PSM_APP_FAMILY_ID *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // r8
  __int128 v6; // xmm1

  memset_0(a2, 0, 0x248uLL);
  v4 = 4LL;
  v5 = (_OWORD *)((char *)a2 + 16);
  do
  {
    *v5 = *(_OWORD *)a1;
    v5[1] = *((_OWORD *)a1 + 1);
    v5[2] = *((_OWORD *)a1 + 2);
    v5[3] = *((_OWORD *)a1 + 3);
    v5[4] = *((_OWORD *)a1 + 4);
    v5[5] = *((_OWORD *)a1 + 5);
    v5[6] = *((_OWORD *)a1 + 6);
    v5 += 8;
    v6 = *((_OWORD *)a1 + 7);
    a1 = (struct _RM_PSM_APP_FAMILY_ID *)((char *)a1 + 128);
    *(v5 - 1) = v6;
    --v4;
  }
  while ( v4 );
  *v5 = *(_OWORD *)a1;
  *((_QWORD *)v5 + 2) = *((_QWORD *)a1 + 2);
  *((_QWORD *)a2 + 1) = RmpPsmAppFamilyIdHash((struct _RM_PSM_APP_FAMILY *)((char *)a2 + 16));
}
