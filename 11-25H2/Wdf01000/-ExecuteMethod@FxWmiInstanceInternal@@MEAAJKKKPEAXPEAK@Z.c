/*
 * XREFs of ?ExecuteMethod@FxWmiInstanceInternal@@MEAAJKKKPEAXPEAK@Z @ 0x14008D990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiInstanceInternal::ExecuteMethod(
        FxWmiInstanceInternal *this,
        unsigned int MethodId,
        unsigned int InBufferSize,
        unsigned int OutBufferSize,
        void *Buffer,
        unsigned int *BufferUsed)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, _QWORD, unsigned int, void *, unsigned int *))this->m_ExecuteMethod)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           MethodId,
           InBufferSize,
           OutBufferSize,
           Buffer,
           BufferUsed);
}
