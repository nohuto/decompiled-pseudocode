/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00DE29C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C021FDA0 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C022D48C (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C00DE37C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     xxxClientCopyImage @ 0x1C00DE700 (xxxClientCopyImage.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 *a1, __int64 a2)
{
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+40h] [rbp-18h] BYREF

  DpiForSystem = GetDpiForSystem(a1, a2);
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
  v7 = GetDpiForSystem(v6, v5);
  v8 = GetDpiDependentMetric(20LL, v7);
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 80LL) )
    v9 = **(_QWORD **)(*(_QWORD *)*a1 + 80LL);
  else
    LODWORD(v9) = 0;
  v10 = xxxClientCopyImage(
          v9,
          (unsigned int)(*(_WORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 80LL) + 74LL) != 3) + 1,
          v8,
          DpiDependentMetric,
          0x4000);
  v12 = *(_OWORD *)LockPointer(v13, *(_QWORD *)*a1 + 112LL, v10);
  HMAssignmentLock(&v12, 0LL);
  result = *a1;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 112LL) )
  {
    result = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
