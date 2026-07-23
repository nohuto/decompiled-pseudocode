/*
 * XREFs of MiDoStackCopy @ 0x14047B710
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int16 v8; // dx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+38h] BYREF
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = 6LL * *(_QWORD *)a2;
  v7 = *(_QWORD *)(a2 + 48);
  BugCheckParameter3[0] = a2;
  BugCheckParameter3[1] = a3;
  BugCheckParameter3[2] = a4;
  v8 = (v7 != 0) + 1;
  if ( v4 > qword_140E2DD20
    || ((*(_QWORD *)(8 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
    || ((*(_QWORD *)(8 * v6 - 0x220000000000LL + 40) >> 60) & 7) != 2
    || ((v9 = *(_QWORD *)(8 * v6 - 0x220000000000LL), (v9 & 0xFFFFFFFFFFELL) != 0)
      ? (v10 = 8 * (v9 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL))
      : (v10 = 0LL),
        v10 == -32LL
     || (*(_BYTE *)(8 * v6 - 0x220000000000LL + 34) & 7) != 6
     || (unsigned __int16)*(_DWORD *)(8 * v6 - 0x220000000000LL + 32) != v8) )
  {
    *(_DWORD *)(a2 + 32) = -1073740748;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  v17 = 0LL;
  v18 = 0LL;
  if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v17, (__int64)&v18) && (v17 != 0xFFFF800000000000uLL || v18 != -1) )
  {
    v13 = (_QWORD *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = (((unsigned __int64)KeGetCurrentStackPointer(v12, v11) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( (unsigned __int64)v13 <= v14 )
    {
      if ( ((*v13 >> 12) & 0xFFFFFFFFFFLL) == v4 )
        goto LABEL_20;
      ++v13;
    }
    return MiJumpStackTarget(BugCheckParameter3);
  }
LABEL_20:
  result = KeExpandKernelStackAndCalloutInternal(
             (EXPAND_STACK_CALLOUT *)MiJumpStackTarget,
             (ULONG_PTR)BugCheckParameter3,
             KeKernelStackSize,
             1,
             0LL);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 32) = result;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  return result;
}
