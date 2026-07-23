/*
 * XREFs of KxEnableOptionalXStateFeatures @ 0x1405B6354
 * Callers:
 *     KiEnableOptionalXStateFeatures @ 0x1403F5AF8 (KiEnableOptionalXStateFeatures.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405B5D80 (KeEnableOptionalXStateFeaturesApc.c)
 * Callees:
 *     KeCopyXfdMaskToTeb @ 0x140496918 (KeCopyXfdMaskToTeb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KxEnableOptionalXStateFeatures(__int64 a1, __int64 a2, void *a3, char *a4)
{
  unsigned __int8 CurrentIrql; // di
  int v10; // eax
  size_t v11; // r8
  char v12; // al
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 784LL) )
    return 3221225659LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( (a2 & *(_QWORD *)(a1 + 1064)) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 116);
    if ( (v10 & 0x800000) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v11 = (unsigned int)KeDecoupledStateSaveAreaLength;
      *(_DWORD *)(a1 + 116) = v10 | 0x800000;
      *(_QWORD *)(a1 + 96) = a3;
      memset_0(a3, 0, v11);
      v12 = 1;
    }
    *a4 = v12;
    *(_QWORD *)(a1 + 592) |= a2;
    v13 = ~a2;
    *(_QWORD *)(a1 + 1064) &= v13;
    v14 = v13 & __readmsr(0x1C4u);
    v15 = HIDWORD(v14);
    __writemsr(0x1C4u, v14);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeCopyXfdMaskToTeb((_QWORD *)a1, v15, (__int64)a3, (__int64)a4);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    *a4 = 0;
  }
  return 0LL;
}
