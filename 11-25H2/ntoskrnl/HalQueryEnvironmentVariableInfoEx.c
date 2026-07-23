/*
 * XREFs of HalQueryEnvironmentVariableInfoEx @ 0x140442460
 * Callers:
 *     IopQueryEnvironmentVariableInfoHal @ 0x14070D4F0 (IopQueryEnvironmentVariableInfoHal.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x140442E24 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140442E7C (HalpConvertEfiToNtStatus.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HalQueryEnvironmentVariableInfoEx(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  char v8; // di
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v12; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  v7 = a1 | 6;
  if ( KeGetCurrentIrql() < 2u )
  {
    v8 = 1;
    v12 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v12 >> 6);
    Affinity.Mask = 1LL << (v12 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  else
  {
    v8 = 0;
  }
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[8] )
  {
    _InterlockedIncrement(&HalpEfiCalls);
    HalpEfiStartRuntimeCode(256LL);
    v9 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))HalEfiRuntimeServicesTable[8])(v7, a2, a3, a4);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFEFF);
    _InterlockedDecrement(&HalpEfiCalls);
    v10 = HalpConvertEfiToNtStatus(v9);
  }
  else
  {
    v10 = -1073741822;
  }
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
