/*
 * XREFs of HalGetEnvironmentVariableEx @ 0x140439830
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x14058F140 (IoSaveInitialBugCheckProgress.c)
 *     WheapProcessEfiBadMemoryPage @ 0x14065A0A8 (WheapProcessEfiBadMemoryPage.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE730 (NtQueryDriverEntryOrder.c)
 *     IopGetEnvironmentVariableHal @ 0x140A58580 (IopGetEnvironmentVariableHal.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B5DA44 (PopSetMemoryOverwriteRequestAction.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x140439E44 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140439E9C (HalpConvertEfiToNtStatus.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 */

__int64 __fastcall HalGetEnvironmentVariableEx(const wchar_t *a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  rsize_t v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  char v17; // di
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // ebx
  wchar_t Dst[4]; // [rsp+30h] [rbp+0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp+8h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp+18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a1[v9] );
  v10 = (unsigned int)(v9 + 1);
  if ( (unsigned int)v10 >= 0x100 )
    v10 = 256LL;
  v11 = (unsigned int)v10;
  v12 = 2 * v10;
  v13 = v12 + 15;
  if ( v12 + 15 < v12 )
    v13 = 0xFFFFFFFFFFFFFF0LL;
  v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = alloca(v14);
  v16 = alloca(v14);
  wcscpy_s(Dst, v11, a1);
  *(_QWORD *)Dst = (unsigned int)*a4;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v17 = 0;
  }
  else
  {
    v17 = 1;
    v18 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v18 >> 6);
    Affinity.Mask = 1LL << (v18 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[3] )
  {
    _InterlockedIncrement(&HalpEfiCalls);
    _InterlockedIncrement(&HalpEfiVariableCalls);
    HalpEfiStartRuntimeCode(8LL);
    v19 = ((__int64 (__fastcall *)(wchar_t *, __int64, __int64, wchar_t *, __int64))HalEfiRuntimeServicesTable[3])(
            Dst,
            a2,
            a5,
            Dst,
            a3);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
    _InterlockedDecrement(&HalpEfiCalls);
    _InterlockedDecrement(&HalpEfiVariableCalls);
    v20 = HalpConvertEfiToNtStatus(v19);
  }
  else
  {
    v20 = -1073741822;
  }
  if ( v17 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  *a4 = *(_DWORD *)Dst;
  return v20;
}
