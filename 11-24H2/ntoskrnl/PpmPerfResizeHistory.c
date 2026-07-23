/*
 * XREFs of PpmPerfResizeHistory @ 0x140A940A8
 * Callers:
 *     PpmPerfResizeHistoryAll @ 0x14074DF2C (PpmPerfResizeHistoryAll.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x1403A2FAC (PpmGetPerfPolicyClass.c)
 *     PpmPerfResetHistory @ 0x140401EA0 (PpmPerfResetHistory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 PerfPolicyClass; // al
  _DWORD *v4; // rcx
  int v5; // ebp
  _DWORD *Pool2; // rax

  v2 = 0;
  PerfPolicyClass = PpmGetPerfPolicyClass((_BYTE *)a1);
  v4 = *(_DWORD **)(a1 + 32);
  v5 = *((unsigned __int8 *)&PpmCurrentProfile[0][61 * dword_140F0B38C + 10] + PerfPolicyClass);
  if ( v4 )
  {
    if ( *v4 == v5 )
      return v2;
    ExFreePoolWithTag(v4, 0x704D5050u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( (unsigned __int8)v5 > 1u )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, (unsigned int)(12 * v5 + 44), 0x704D5050u);
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
