/*
 * XREFs of RtlResetStackOverflow @ 0x1801361CC
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     EtwpCheckForEnoughStackSpace @ 0x18008FE98 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

_OWORD *RtlResetStackOverflow()
{
  _OWORD *result; // rax
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp-49h] BYREF
  int v5; // [rsp+38h] [rbp-41h]
  unsigned __int64 v6; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v7[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v9; // [rsp+88h] [rbp+Fh]

  v5 = 0;
  memset(v7, 0, sizeof(v7));
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  result = (_OWORD *)ZwQueryVirtualMemory(-1LL, v7, 0LL, v7, 48LL, 0LL);
  if ( (int)result >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v9 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v9 - 1LL);
    v4 = v2;
    if ( v2 )
    {
      v2 += v9;
      v4 = v2;
    }
    v3 = 3 * v9;
    if ( v2 < v3 )
    {
      v4 = 3 * v9;
      v2 = (unsigned int)v3;
    }
    result = v7;
    v6 = ((unsigned __int64)v7 & v1) - v2;
    if ( v6 >= *((_QWORD *)&v7[0] + 1) + (unsigned __int64)(17 * v9) )
    {
      result = (_OWORD *)ZwAllocateVirtualMemory(-1LL, &v6, 0LL, &v4, 4096, 4);
      if ( (int)result >= 0 )
        return (_OWORD *)ZwProtectVirtualMemory(-1LL, &v6, &v4, 260LL);
    }
  }
  return result;
}
