/*
 * XREFs of ??1PATH_CORE@@QEAA@XZ @ 0x140024340
 * Callers:
 *     <none>
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140024360 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 */

void __fastcall PATH_CORE::~PATH_CORE(PATH_CORE *this)
{
  PATH_CORE::vFreeBlocks(this);
}
