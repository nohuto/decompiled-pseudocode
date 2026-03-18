/*
 * XREFs of PpmPerfResizeHistory @ 0x140A93600
 * Callers:
 *     PpmPerfResizeHistoryAll @ 0x140743B38 (PpmPerfResizeHistoryAll.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x140265AC4 (PpmGetPerfPolicyClass.c)
 *     PpmPerfResetHistory @ 0x1403B1700 (PpmPerfResetHistory.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 PerfPolicyClass; // al
  _DWORD *v4; // rcx
  unsigned __int8 v5; // bp
  _DWORD *Pool2; // rax

  v2 = 0;
  PerfPolicyClass = PpmGetPerfPolicyClass((_BYTE *)a1);
  v4 = *(_DWORD **)(a1 + 32);
  v5 = *((_BYTE *)&PpmCurrentProfile[0][61 * dword_140F0B70C + 10] + PerfPolicyClass);
  if ( v4 )
  {
    if ( *v4 == v5 )
      return v2;
    ExFreePoolWithTag(v4, 0x704D5050u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( v5 > 1u )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *Pool2 = v5;
      *(_QWORD *)(a1 + 32) = Pool2;
      PpmPerfResetHistory(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
