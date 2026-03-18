/*
 * XREFs of ?IsSoftGPU@MONITOR_MGR@@UEBA_NXZ @ 0x1402730B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MONITOR_MGR::IsSoftGPU(MONITOR_MGR *this)
{
  return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 444LL) & 8) != 0;
}
