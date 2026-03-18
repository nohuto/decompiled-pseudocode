/*
 * XREFs of KiFindStandbyThreadForSteal @ 0x1403309C0
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindStandbyThreadForSteal(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  __int64 v6; // rdx
  int v7; // ecx
  _WORD *v8; // r8
  __int64 v9; // rax

  v3 = 0LL;
  if ( !a1 || *(_BYTE *)(a2 + 35337) == *(_BYTE *)(a1 + 35337) )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6
      && v6 != *(_QWORD *)(a2 + 24)
      && v6 != *(_QWORD *)(a2 + 14392)
      && v6 != *(_QWORD *)(a2 + 36480)
      && (**(_BYTE **)(a2 + 56) & 0x7Fu) >= 0x10 )
    {
      if ( (v7 = (*(_DWORD *)(v6 + 120) >> 1) & 1, v7 == 1) && *(_QWORD *)(a1 + 36440) == *(_QWORD *)(a2 + 36440)
        || v7 <= a3 )
      {
        if ( *(_QWORD *)(v6 + 568) == KiCpuSetSequence || (*(_DWORD *)(v6 + 116) & 8) != 0 )
        {
          v8 = *(_WORD **)(v6 + 576);
          v9 = *(unsigned __int8 *)(a1 + 208);
          if ( (unsigned __int16)v9 < *v8 && ((*(_QWORD *)&v8[4 * v9 + 4] >> *(_BYTE *)(a1 + 209)) & 1) != 0 )
          {
            v3 = v6;
            *(_DWORD *)(v6 + 536) = *(_DWORD *)(a1 + 36);
          }
        }
      }
    }
  }
  return v3;
}
