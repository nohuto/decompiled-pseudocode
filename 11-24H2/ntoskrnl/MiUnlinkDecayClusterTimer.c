/*
 * XREFs of MiUnlinkDecayClusterTimer @ 0x140446934
 * Callers:
 *     MiRemoveDecayClusterTimer @ 0x14033BBF8 (MiRemoveDecayClusterTimer.c)
 *     MiEmptyDecayClusterTimers @ 0x140355310 (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUnlinkDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r10
  __int64 v3; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx

  v2 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  v3 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  result = *(_QWORD *)(a1 + 8);
  v5 = result >> 33;
  if ( (result & 0xFFFFFFFE) == 0xFFFFFFFE )
  {
    v1 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
    *(_QWORD *)(v3 + 8 * v1 + 16064) ^= (result ^ *(_QWORD *)(v3 + 8 * v1 + 16064)) & 0xFFFFFFFE00000000uLL;
  }
  else
  {
    v6 = result >> 1;
    LODWORD(v6) = (result >> 1) & 0x7FFFFFFF;
    *(_QWORD *)(48 * (qword_140E35C40 + v6) - 0x220000000000LL + 8) ^= (result ^ *(_QWORD *)(48 * (qword_140E35C40 + v6)
                                                                                           - 0x220000000000LL
                                                                                           + 8)) & 0xFFFFFFFE00000000uLL;
  }
  if ( v5 == 0x7FFFFFFF )
    *(_QWORD *)(v3 + 8 * v2 + 16064) = result ^ (*(_QWORD *)(v3 + 8 * v2 + 16064) ^ result) & 0xFFFFFFFF00000001uLL;
  else
    *(_QWORD *)(48 * (v5 + qword_140E35C40) - 0x220000000000LL + 8) = result ^ (*(_QWORD *)(48 * (v5 + qword_140E35C40)
                                                                                          - 0x220000000000LL
                                                                                          + 8) ^ result) & 0xFFFFFFFF00000001uLL;
  return result;
}
