/*
 * XREFs of KiIntSteerChooseInitialTargetProcessors @ 0x1402B3FD8
 * Callers:
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402B2334 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KeIntSteerGetSteeringMode @ 0x1402B40E4 (KeIntSteerGetSteeringMode.c)
 *     KiIntRedirectConnnect @ 0x1402B4C68 (KiIntRedirectConnnect.c)
 */

__int64 __fastcall KiIntSteerChooseInitialTargetProcessors(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  int v11; // esi
  int v12; // r9d
  int SteeringMode; // ebp
  __int64 v14; // rdx
  bool v15; // zf
  unsigned int v16; // ecx
  __int64 v18; // r8
  __int64 v19; // [rsp+20h] [rbp-28h]

  v7 = a3 + 24;
  v19 = a3 + 24;
  v8 = a3;
  v11 = 0;
  *(_OWORD *)a6 = 0LL;
  v12 = *(_DWORD *)(a3 + 16);
  LOBYTE(a3) = a5;
  SteeringMode = KeIntSteerGetSteeringMode(a1, a2, a3, v12, v19);
  if ( SteeringMode != 2 || (v11 = KiIntRedirectConnnect(a1, a2, v8), v11 >= 0) )
  {
    v14 = *(unsigned __int16 *)(v7 + 8);
    *(_WORD *)(a6 + 8) = v14;
    if ( SteeringMode )
    {
      v15 = (*(_QWORD *)v7 & qword_140F100E8[v14]) == 0LL;
      *(_QWORD *)a6 = *(_QWORD *)v7 & qword_140F100E8[v14];
      if ( !v15 )
        v7 = a6;
      v16 = *((_DWORD *)KiGlobalState + (unsigned int)KiIntPartGetLowestClassProcessorInMask(v7));
      *(_DWORD *)(a6 + 10) = 0;
      *(_WORD *)(a6 + 14) = 0;
      *(_WORD *)(a6 + 8) = v16 >> 6;
      *(_QWORD *)a6 = 1LL << (v16 & 0x3F);
    }
    else
    {
      v18 = *(_QWORD *)v7;
      *(_QWORD *)a6 = *(_QWORD *)v7;
      KeAddGroupAffinityEx(&KiIntSteerAffinitizedInterrupts.Count, v14, v18);
    }
    *a7 = SteeringMode;
  }
  return (unsigned int)v11;
}
