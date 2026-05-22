/*
 * XREFs of ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@@Z @ 0x18003142C
 * Callers:
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x1800313C0 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputEventPayloadBuffer::InputEventPayloadBuffer(__int64 a1, int a2)
{
  void *v4; // rax
  const struct std::nothrow_t *v5; // rdx
  void *v6; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 40;
  v4 = operator new[](0x28uLL);
  v6 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v6 )
    operator delete(v6, v5);
  **(_DWORD **)(a1 + 8) = a2;
  return a1;
}
