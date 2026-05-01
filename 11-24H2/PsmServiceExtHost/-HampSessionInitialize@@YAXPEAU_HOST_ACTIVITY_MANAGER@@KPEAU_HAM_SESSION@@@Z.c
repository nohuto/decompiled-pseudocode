/*
 * XREFs of ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180064F84
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064EF0 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     CempLockInitialize @ 0x180040B9C (CempLockInitialize.c)
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x1800472F0 (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18004733C (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180065234 (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall HampSessionInitialize(struct _HOST_ACTIVITY_MANAGER *a1, int a2, struct _HAM_SESSION *a3)
{
  int v6; // ebx

  memset_0(a3, 0, 0x98uLL);
  HamRcNodeInitializeFromRoot(
    (void (*)(struct _CEM_RC_OBJECT *))HampUserDestroy,
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352),
    a3);
  CempLockInitialize((__int64)a3 + 96);
  *((_DWORD *)a3 + 22) = a2;
  v6 = 0;
  if ( (unsigned int)HampSystemCdplIsManaged() || (unsigned int)HampSystemEdpIsManaged() )
    v6 = 1;
  *((_DWORD *)a3 + 36) = v6 | *((_DWORD *)a3 + 36) & 0xFFFFFFFE;
}
