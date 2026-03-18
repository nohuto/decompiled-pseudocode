/*
 * XREFs of xxxCreateClassSmIcon @ 0x14007ADE4
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x14021E780 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x14021F460 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x14007ACF4 (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 a1)
{
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // r11d
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 result; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  DpiForSystem = GetDpiForSystem(a1);
  DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
  v5 = GetDpiForSystem(v4);
  v6 = GetDpiDependentMetric(20, v5);
  if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    v7 = **(_QWORD **)(**(_QWORD **)a1 + 80LL);
  else
    v7 = 0LL;
  v8 = (_QWORD *)xxxClientCopyImage(
                   v7,
                   (unsigned int)(*(_WORD *)(*(_QWORD *)(**(_QWORD **)a1 + 80LL) + 74LL) != 3) + 1,
                   v6,
                   DpiDependentMetric,
                   0x4000);
  v9 = **(_QWORD **)a1 + 112LL;
  v10 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
  if ( v8 )
    *(_QWORD *)(v10 + 56) = *v8;
  else
    *(_QWORD *)(v10 + 56) = 0LL;
  v12[0] = v9;
  v12[1] = v8;
  HMAssignmentLock(v12, 0LL);
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)(**(_QWORD **)a1 + 112LL) )
  {
    result = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
