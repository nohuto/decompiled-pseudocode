/*
 * XREFs of ?SetInstance@FxWmiInstanceInternal@@MEAAJKPEAX@Z @ 0x14008DA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiInstanceInternal::SetInstance(
        FxWmiInstanceInternal *this,
        unsigned int InBufferSize,
        void *InBuffer)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, void *))this->m_SetInstance)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           InBufferSize,
           InBuffer);
}
