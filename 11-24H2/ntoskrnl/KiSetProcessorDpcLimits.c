/*
 * XREFs of KiSetProcessorDpcLimits @ 0x1405B4800
 * Callers:
 *     KiApplyProcessorDpcLimits @ 0x140B57C1C (KiApplyProcessorDpcLimits.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiSetProcessorDpcLimits(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int8 CurrentIrql; // si
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // ecx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  *(_DWORD *)(a1 + 34396) = 0;
  *(_DWORD *)(a1 + 33708) = 0;
  v9 = *a2;
  *a4 = 0LL;
  *(_DWORD *)(a1 + 34400) = v9;
  *(_DWORD *)(a1 + 33704) = a2[1];
  *(_DWORD *)(a1 + 14540) = a2[2];
  *(_DWORD *)(a1 + 14552) = a2[3];
  *(_DWORD *)(a1 + 34624) = a2[4];
  *(_DWORD *)(a1 + 33716) = a2[5];
  v10 = *(_QWORD *)(a1 + 36520);
  if ( a3 != v10 )
  {
    *(_DWORD *)(a1 + 33568) = 0;
    *a4 = v10;
    *(_QWORD *)(a1 + 36520) = a3;
    if ( a3 )
    {
      v11 = a2[6] - 768;
      *(_DWORD *)(a1 + 33572) = 768;
      *(_DWORD *)(a1 + 14556) = v11;
      *(_QWORD *)(a1 + 33560) = a3 + v11;
    }
    else
    {
      *(_QWORD *)(a1 + 33560) = 0LL;
      *(_DWORD *)(a1 + 33572) = 0;
      *(_DWORD *)(a1 + 14556) = 0;
    }
    v10 = a3;
  }
  *(_QWORD *)(a1 + 36528) = v10;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
