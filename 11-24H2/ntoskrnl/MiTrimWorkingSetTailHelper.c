/*
 * XREFs of MiTrimWorkingSetTailHelper @ 0x14020D060
 * Callers:
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 * Callees:
 *     MiTrimWorkingSetBuildup @ 0x1402EA6B0 (MiTrimWorkingSetBuildup.c)
 */

__int64 __fastcall MiTrimWorkingSetTailHelper(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)(a1 + 32);
  result = MiTrimWorkingSetBuildup(a1, v1);
  if ( (*(_DWORD *)v1 & 0x800) != 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v2 + 8), *(_QWORD *)(v1 + 16) - *(_QWORD *)(v1 + 24));
    result = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 24) = result;
  }
  return result;
}
