/*
 * XREFs of ??0DXGK_LIST_HEAD@@QEAA@XZ @ 0x14003F740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DXGK_LIST_HEAD *__fastcall DXGK_LIST_HEAD::DXGK_LIST_HEAD(DXGK_LIST_HEAD *this)
{
  DXGK_LIST_HEAD *result; // rax

  *((_QWORD *)this + 1) = this;
  result = this;
  *(_QWORD *)this = this;
  return result;
}
