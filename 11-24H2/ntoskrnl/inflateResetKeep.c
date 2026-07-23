/*
 * XREFs of inflateResetKeep @ 0x1405F2758
 * Callers:
 *     inflateReset @ 0x1405F268C (inflateReset.c)
 * Callees:
 *     inflateStateCheck @ 0x1405F27E8 (inflateStateCheck.c)
 */

__int64 __fastcall inflateResetKeep(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  if ( (unsigned int)inflateStateCheck(a1, a1) )
    return 4294967294LL;
  v4 = *(_QWORD *)(v2 + 40);
  *(_DWORD *)(v4 + 36) = 0;
  *(_DWORD *)(v1 + 28) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_QWORD *)(v1 + 32) = 0LL;
  if ( *(_DWORD *)(v4 + 16) )
    *(_DWORD *)(v1 + 76) = *(_DWORD *)(v4 + 16) & 1;
  *(_QWORD *)(v4 + 8) = 16180LL;
  *(_QWORD *)(v4 + 136) = v4 + 1360;
  *(_QWORD *)(v4 + 104) = v4 + 1360;
  *(_QWORD *)(v4 + 96) = v4 + 1360;
  result = 0LL;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = -1;
  *(_DWORD *)(v4 + 28) = 0x8000;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_DWORD *)(v4 + 9056) = 1;
  *(_DWORD *)(v4 + 9060) = -1;
  return result;
}
