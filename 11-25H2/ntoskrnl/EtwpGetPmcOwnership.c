/*
 * XREFs of EtwpGetPmcOwnership @ 0x1406408E0
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetPmcOwnership(_DWORD *a1, unsigned int *a2)
{
  _DWORD *Pool2; // rax
  _DWORD *v6; // rsi
  int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  __int64 v10; // r9
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx

  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, 1) )
    return 3221225569LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  if ( *a2 < 8 )
    return 3221225507LL;
  if ( *a1 > (unsigned int)KeNumberProcessors_0 )
    return 3221225485LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *a1;
    v7 = guard_dispatch_icall_no_overrides(53LL);
    if ( v7 < 0 )
    {
LABEL_29:
      ExFreePoolWithTag(v6, 0);
      return (unsigned int)v7;
    }
    v8 = v6[1];
    if ( v8 <= EtwpMaxPmcCounter )
    {
      v7 = 0;
      a1[1] = v8;
    }
    else
    {
      a1[1] = EtwpMaxPmcCounter;
      v7 = -2147483643;
      v8 = EtwpMaxPmcCounter;
    }
    v9 = 12 * v8 + 8;
    if ( *a2 < v9 )
    {
      v7 = -1073741789;
      goto LABEL_29;
    }
    v10 = 0LL;
    if ( !v8 )
    {
LABEL_28:
      *a2 = v9;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v11 = v6[4 * (unsigned int)v10 + 2];
      if ( !v11 )
      {
        a1[3 * v10 + 2] = 0;
        goto LABEL_27;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
LABEL_25:
        a1[3 * v10 + 2] = 3;
        a1[3 * v10 + 4] = v6[4 * (unsigned int)v10 + 5];
        a1[3 * v10 + 3] = v6[4 * (unsigned int)v10 + 4];
        goto LABEL_27;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          a1[3 * v10 + 2] = 2;
          a1[3 * v10 + 4] = v6[4 * (unsigned int)v10 + 4];
          goto LABEL_27;
        }
        if ( v14 == 1 )
          goto LABEL_25;
      }
      a1[3 * v10 + 2] = 1;
LABEL_27:
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= a1[1] )
        goto LABEL_28;
    }
  }
  return (unsigned int)-1073741801;
}
