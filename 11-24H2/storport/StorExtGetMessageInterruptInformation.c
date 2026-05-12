/*
 * XREFs of StorExtGetMessageInterruptInformation @ 0x140073580
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 */

char __fastcall StorExtGetMessageInterruptInformation(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  unsigned __int8 *v3; // rdx
  int *v5; // [rsp+20h] [rbp-18h] BYREF
  int *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  RaidpPortGetAdapter(a1, &v6, &v5);
  if ( !v6 )
    return 0;
  if ( !*((_BYTE *)v6 + 4369) )
    return 0;
  v3 = (unsigned __int8 *)*((_QWORD *)v6 + 544);
  if ( (unsigned int)v2 >= *((_DWORD *)v3 + 1) )
    return 0;
  *(_DWORD *)v1 = v2;
  *(_DWORD *)(v1 + 4) = *(_DWORD *)&v3[48 * v2 + 32];
  *(_QWORD *)(v1 + 8) = *(_QWORD *)&v3[48 * v2 + 8];
  *(_DWORD *)(v1 + 16) = *(_DWORD *)&v3[48 * v2 + 36];
  *(_DWORD *)(v1 + 20) = *v3;
  *(_DWORD *)(v1 + 24) = *(_DWORD *)&v3[48 * v2 + 44];
  return 1;
}
