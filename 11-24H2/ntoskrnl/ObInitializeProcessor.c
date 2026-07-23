/*
 * XREFs of ObInitializeProcessor @ 0x1407410E8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1404A33F0 (MmIsThisAnNtAsSystem.c)
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObInitializeProcessor(_QWORD *a1)
{
  BOOLEAN IsThisAnNtAsSystem; // bp
  __int64 Pool2; // rax
  void *v4; // rbx
  __int64 v5; // rax
  void *v6; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  a1[265] = &ObpCreateInfoLookasideList;
  Pool2 = ExAllocatePool2(0x40uLL, 0x80uLL, 0x4943624Fu);
  v4 = (void *)Pool2;
  if ( Pool2 )
    ExInitializeSystemLookasideList(
      Pool2,
      512,
      64,
      1229152847,
      IsThisAnNtAsSystem != 0 ? 64 : 32,
      (__int64)&ExSystemLookasideListHead);
  else
    v4 = &ObpCreateInfoLookasideList;
  a1[264] = v4;
  a1[267] = &ObpNameBufferLookasideList;
  v5 = ExAllocatePool2(0x40uLL, 0x80uLL, 0x4D4E624Fu);
  v6 = (void *)v5;
  if ( v5 )
    ExInitializeSystemLookasideList(
      v5,
      1,
      248,
      1296982607,
      IsThisAnNtAsSystem != 0 ? 32 : 16,
      (__int64)&ExSystemLookasideListHead);
  else
    v6 = &ObpNameBufferLookasideList;
  result = 0LL;
  a1[266] = v6;
  return result;
}
