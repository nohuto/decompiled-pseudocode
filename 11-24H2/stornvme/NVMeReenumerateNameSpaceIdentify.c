/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x14002A33C
 * Callers:
 *     NVMeReenumerateNameSpaceStart @ 0x14002AEE0 (NVMeReenumerateNameSpaceStart.c)
 * Callees:
 *     NVMeQueueWorkItem @ 0x14002393C (NVMeQueueWorkItem.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  __int64 result; // rax
  bool v3; // zf

  result = StorPortExtendedFunction(0LL, a1, 6144LL, 1701672526LL);
  v3 = (*(_BYTE *)(a1 + 21) & 2) == 0;
  ++*(_DWORD *)(a1 + 4212);
  if ( !v3 )
    result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
  return result;
}
