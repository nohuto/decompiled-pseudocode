/*
 * XREFs of KeSelectInitialIdealProcessorForThread @ 0x1403A2604
 * Callers:
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x1403A10AC (KeSelectIdealProcessor.c)
 */

__int64 __fastcall KeSelectInitialIdealProcessorForThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(unsigned __int16 *)(a2 + 8);
  if ( (unsigned __int16)v3 >= *(_WORD *)(v2 + 208) )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v2 + 8 * v3 + 216);
  v6 = v4;
  return KeSelectIdealProcessor(a2, (_WORD *)(v2 + 16 + 2 * v3), (__int64)&v6, 1u);
}
