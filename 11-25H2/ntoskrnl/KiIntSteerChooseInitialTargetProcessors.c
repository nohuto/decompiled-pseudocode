/*
 * XREFs of KiIntSteerChooseInitialTargetProcessors @ 0x140201794
 * Callers:
 *     KiIntSteerConnect @ 0x14020213C (KiIntSteerConnect.c)
 * Callees:
 *     KiIntRedirectConnnect @ 0x140200C18 (KiIntRedirectConnnect.c)
 *     KeIntSteerGetSteeringMode @ 0x140201708 (KeIntSteerGetSteeringMode.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1403AE2A4 (KiIntPartGetLowestClassProcessorInMask.c)
 */

__int64 __fastcall KiIntSteerChooseInitialTargetProcessors(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // rdi
  unsigned int v9; // r15d
  int v11; // esi
  int SteeringMode; // ebp
  __int64 v13; // rdx
  bool v14; // zf
  unsigned int v15; // ecx

  v7 = a3 + 24;
  v9 = a2;
  v11 = 0;
  *(_OWORD *)a6 = 0LL;
  SteeringMode = KeIntSteerGetSteeringMode((bool)a1, a2, a5, *(_DWORD *)(a3 + 16), a3 + 24);
  if ( SteeringMode != 2 || (v11 = KiIntRedirectConnnect(a1, v9, a3), v11 >= 0) )
  {
    v13 = *(unsigned __int16 *)(v7 + 8);
    *(_WORD *)(a6 + 8) = v13;
    if ( SteeringMode )
    {
      v14 = (*(_QWORD *)v7 & qword_140F0F568[v13]) == 0LL;
      *(_QWORD *)a6 = *(_QWORD *)v7 & qword_140F0F568[v13];
      if ( !v14 )
        v7 = a6;
      v15 = *((_DWORD *)KiGlobalState + (unsigned int)KiIntPartGetLowestClassProcessorInMask(v7));
      *(_DWORD *)(a6 + 10) = 0;
      *(_WORD *)(a6 + 14) = 0;
      *(_WORD *)(a6 + 8) = v15 >> 6;
      *(_QWORD *)a6 = 1LL << (v15 & 0x3F);
    }
    else
    {
      *(_QWORD *)a6 = *(_QWORD *)v7;
      KeAddGroupAffinityEx(&KiIntSteerAffinitizedInterrupts);
    }
    *a7 = SteeringMode;
  }
  return (unsigned int)v11;
}
