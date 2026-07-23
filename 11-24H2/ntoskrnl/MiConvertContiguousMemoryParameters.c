/*
 * XREFs of MiConvertContiguousMemoryParameters @ 0x140395988
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x1403958D0 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403966A0 (MmAllocateContiguousMemoryEx.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MiConvertContiguousMemoryParameters(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        _OWORD *a7)
{
  unsigned int ProtectionMask; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  __int16 v11; // cx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8

  *a7 = 0LL;
  a7[1] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *(_QWORD *)a7 = a2 >> 12;
  if ( (a2 & 0xFFF) != 0 )
    *(_QWORD *)a7 = (a2 >> 12) + 1;
  if ( (a4 & 0xFFF) != 0 )
    return 3221225485LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  *(_DWORD *)(v10 + 24) = ProtectionMask;
  if ( (v11 & 0x100) != 0
    || ProtectionMask == 24
    || ProtectionMask == -1
    || (ProtectionMask & 5) != 4
    || (ProtectionMask & 2) != 0 && (ProtectionMask >> 3 == 1 || ProtectionMask >> 3 == 3 && (ProtectionMask & 7) != 0) )
  {
    return 3221225485LL;
  }
  v12 = qword_140E2DD20;
  v13 = v8 >> 12;
  *(_QWORD *)(v10 + 16) = v9 >> 12;
  *(_QWORD *)(v10 + 8) = v13;
  if ( v13 > v12 )
  {
    *(_QWORD *)(v10 + 8) = v12;
    v13 = v12;
  }
  if ( *(_QWORD *)v10 <= v13 )
  {
    if ( a6 == 0x80000000 || a6 < (unsigned __int16)KeNumberNodes )
      return 0LL;
    return 3221225485LL;
  }
  return 3221225626LL;
}
