/*
 * XREFs of ??1?$unique_ptr@UInputBufferListEntry@ConsumerControlNexusDevice@@U?$default_delete@UInputBufferListEntry@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E6C10
 * Callers:
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E7B9C (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801BE46C (--1MPCGamepadProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>::~unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x58);
}
