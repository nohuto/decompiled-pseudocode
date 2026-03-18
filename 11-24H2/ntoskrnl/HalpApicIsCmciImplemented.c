/*
 * XREFs of HalpApicIsCmciImplemented @ 0x140568CF4
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140568AD0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpApicGetCpuInfo @ 0x140568864 (HalpApicGetCpuInfo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall HalpApicIsCmciImplemented(int *a1, int *a2)
{
  char CpuInfo; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  int v9; // esi
  bool v10; // di
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  char v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0;
  CpuInfo = HalpApicGetCpuInfo(0LL, 0LL, 0LL, (__int64)&v17);
  if ( CpuInfo )
    CpuInfo = v17;
  else
    v17 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( CpuInfo == 2 )
  {
    v11 = __readmsr(0x179u);
    LODWORD(v11) = v11 & 0x400;
    v10 = (_DWORD)v11 != 0;
    v8 = (unsigned int)v11 != 0LL ? 0x2F0 : 0;
  }
  else if ( CpuInfo == 1 && (int)guard_dispatch_icall_no_overrides(48LL, v5, v6, v7) < 0 )
  {
    v15 = guard_dispatch_icall_no_overrides(1024LL, v12, v13, v14) & 0xFF0000;
    v8 = (unsigned int)v15 > 0x10000 ? 0x510 : 0;
    v10 = (unsigned int)v15 > 0x10000;
    if ( (unsigned int)v15 > 0x20000 )
      v9 = 1312;
  }
  if ( a1 && v10 )
    *a1 = v8;
  if ( a2 )
    *a2 = v9;
  return v10;
}
