/*
 * XREFs of HalSetEnvironmentVariableEx @ 0x1404395E0
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 *     WheapProcessEfiBadMemoryPage @ 0x14065A0A8 (WheapProcessEfiBadMemoryPage.c)
 *     WheapPersistPageForMemoryError @ 0x14065A568 (WheapPersistPageForMemoryError.c)
 *     IopSetEnvironmentVariableHal @ 0x140717350 (IopSetEnvironmentVariableHal.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B5DA44 (PopSetMemoryOverwriteRequestAction.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140B622DC (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalEfiSetEnvironmentVariable @ 0x140439768 (HalEfiSetEnvironmentVariable.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 */

__int64 __fastcall HalSetEnvironmentVariableEx(const wchar_t *a1, int a2, __int64 a3, int a4, int a5)
{
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rax
  rsize_t v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  wchar_t Dst[8]; // [rsp+30h] [rbp+0h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp+10h] BYREF

  *(_OWORD *)Dst = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  v9 = 1;
  if ( (a5 & 1) == 0 )
    return 3221225485LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a1[v10] );
  v11 = (unsigned int)(v10 + 1);
  if ( (unsigned int)v11 >= 0x100 )
    v11 = 256LL;
  v12 = (unsigned int)v11;
  v13 = 2 * v11;
  v14 = v13 + 15;
  if ( v13 + 15 < v13 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = alloca(v15);
  v17 = alloca(v15);
  wcscpy_s(Dst, v12, a1);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v9 = 0;
  }
  else
  {
    v18 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
    Dst[6] = 0;
    Dst[7] = 0;
    *(_DWORD *)&Dst[4] = (unsigned __int16)(v18 >> 6);
    *(_QWORD *)Dst = 1LL << (v18 & 0x3F);
    KeSetSystemGroupAffinityThread((PGROUP_AFFINITY)Dst, &PreviousAffinity);
  }
  if ( (a5 & 0x40) != 0 )
    v19 = -1073741811;
  else
    v19 = HalEfiSetEnvironmentVariable((unsigned int)Dst, a2, 0, 0, 0LL);
  if ( a4 )
    v19 = HalEfiSetEnvironmentVariable((unsigned int)Dst, a2, a5 | 6u, a4, a3);
  if ( v9 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v19;
}
