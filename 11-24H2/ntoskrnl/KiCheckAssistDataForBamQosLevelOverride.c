/*
 * XREFs of KiCheckAssistDataForBamQosLevelOverride @ 0x1404DD3DC
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckAssistDataForBamQosLevelOverride(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  __int64 result; // rax

  if ( *a2 )
  {
    v2 = *(_DWORD **)(a1 + 968);
    if ( v2 )
    {
      result = (unsigned int)v2[7];
      if ( *(_QWORD *)(v2 + 7) || (v2[5] & 0x4000) != 0 || (*v2 & 0x200000) != 0 )
        *a2 = 0;
    }
  }
  return result;
}
