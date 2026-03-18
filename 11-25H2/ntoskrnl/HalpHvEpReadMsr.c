/*
 * XREFs of HalpHvEpReadMsr @ 0x14047C040
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvLpReadMcaStatusMsr @ 0x14047C0C8 (HalpHvLpReadMcaStatusMsr.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HalpHvEpReadMsr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  if ( (a1 & 0x100000000LL) == 0 )
  {
    v3 = 0LL;
    v5 = a1 & 0x7FFFFFFF;
    v6 = 0LL;
    if ( !a3 || !(unsigned __int8)HalpHvLpReadMcaStatusMsr(v5, a2, a3, &v6) )
    {
      if ( !qword_140FC0778 )
        return v3;
      guard_dispatch_icall_no_overrides(v5, 1LL);
    }
    return v6;
  }
  return __readmsr(a2);
}
