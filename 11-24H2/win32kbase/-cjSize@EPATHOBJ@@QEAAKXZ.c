/*
 * XREFs of ?cjSize@EPATHOBJ@@QEAAKXZ @ 0x140131900
 * Callers:
 *     <none>
 * Callees:
 *     ?cjSize@PATH_CORE@@QEBAKXZ @ 0x140131920 (-cjSize@PATH_CORE@@QEBAKXZ.c)
 */

unsigned int __fastcall EPATHOBJ::cjSize(EPATHOBJ *this)
{
  return PATH_CORE::cjSize((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
}
