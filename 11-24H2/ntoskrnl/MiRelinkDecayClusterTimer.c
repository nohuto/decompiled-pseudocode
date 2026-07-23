/*
 * XREFs of MiRelinkDecayClusterTimer @ 0x1404402F0
 * Callers:
 *     MiInsertDecayClusterTimer @ 0x140301274 (MiInsertDecayClusterTimer.c)
 *     MiEmptyDecayClusterTimers @ 0x140355310 (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRelinkDecayClusterTimer(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  int v10; // [rsp+18h] [rbp+10h]

  v10 = *(_DWORD *)(a1 + 32);
  v2 = a2;
  BYTE2(v10) = ((_BYTE)a2 << 6) | BYTE2(v10) & 0x3F;
  *(_DWORD *)(a1 + 32) = v10;
  v3 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v4 = *(_QWORD *)(v3 + 8LL * a2 + 16064);
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) - qword_140E35C40;
  v6 = v4 >> 1;
  *(_QWORD *)(a1 + 8) = (unsigned int)v4 & 0xFFFFFFFE | 0xFFFFFFFE00000000uLL;
  v7 = v5 << 33;
  if ( (v4 & 0xFFFFFFFE) == 0xFFFFFFFE )
  {
    v4 = v7 | v4 & 0x1FFFFFFFFLL;
  }
  else
  {
    LODWORD(v6) = (v4 >> 1) & 0x7FFFFFFF;
    *(_QWORD *)(48 * (v6 + qword_140E35C40) - 0x220000000000LL + 8) = v7 | *(_QWORD *)(48 * (v6 + qword_140E35C40)
                                                                                     - 0x220000000000LL
                                                                                     + 8) & 0x1FFFFFFFFLL;
  }
  v8 = v4 ^ (2 * v5);
  result = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(v3 + 8 * v2 + 16064) = (2 * v5) ^ v8 & 0xFFFFFFFF00000001uLL;
  return result;
}
