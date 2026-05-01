/*
 * XREFs of ?SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x180516500
 * Callers:
 *     ?SetOldAppLayout@TabletModePositionerOperation@@WII@EAAXPEAUIAppLayout@@@Z @ 0x180516510 (-SetOldAppLayout@TabletModePositionerOperation@@WII@EAAXPEAUIAppLayout@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall BackOperation::SetOldAppLayout(BackOperation *this, struct IAppLayout *a2)
{
  CAppLayoutOperation::SetOldAppLayout(this, a2);
}
