/*
 * XREFs of ??0MONITOR_REF_ACCESSOR@@QEAA@AEBV0@@Z @ 0x140032CFC
 * Callers:
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032BB8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x14026BD84 (--1MONITOR_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

MONITOR_REF_ACCESSOR *__fastcall MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR(
        MONITOR_REF_ACCESSOR *this,
        const struct MONITOR_REF_ACCESSOR *a2)
{
  __int64 v2; // r8
  MONITOR_REF_ACCESSOR *v3; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 2LL;
  *(_QWORD *)this = retaddr;
  do
  {
    *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
    --v2;
  }
  while ( v2 );
  MONITOR_REF_ACCESSOR::AddReference(this);
  return v3;
}
