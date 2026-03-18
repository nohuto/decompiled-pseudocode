/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140C1F1E8
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmPolicySettingsMaskMerge @ 0x1404A843C (PpmPolicySettingsMaskMerge.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PpmBeginProfileAccumulation @ 0x1406EFE9C (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x14075406C (PpmEnableProfile.c)
 */

LONG __fastcall PpmInitPolicyConfiguration(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  _QWORD **v7; // rax
  __int64 v8; // rax
  __int64 v9; // r11
  _QWORD **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r11
  _QWORD v15[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v16[10]; // [rsp+30h] [rbp-9h] BYREF

  v16[8] = &PpmPolicyClassSpecificQosSettingsMask;
  v16[0] = &PpmPolicyActionPerfResizeHistoryMask;
  v16[1] = &PpmPolicyActionProcessorPolicyMask;
  v16[2] = &PpmPolicyActionParkingMask;
  v16[3] = &PpmPolicyActionPerfMask;
  v16[4] = &PpmPolicyActionPerfReinitMask;
  v16[5] = &PpmPolicyActionIdleMask;
  v16[6] = PpmPolicyActionHeteroPpmMask;
  v16[7] = &PpmPolicyActionHeteroSchedulerMask;
  v15[0] = &PpmPolicyClassSpecificQosSettingsMask;
  v16[9] = &PpmPolicyClassAgnosticQosSettingsMask;
  v15[1] = &PpmPolicyClassAgnosticQosSettingsMask;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v3 = (unsigned __int8 *)&unk_140FC4F60;
  v4 = 70LL;
  do
  {
    if ( (v3[5] & 4) != 0 )
      *(_DWORD *)v3 >>= 1;
    v5 = v3[4];
    v3 += 40;
    v6 = v5;
    LOBYTE(v5) = v5 & 0x3F;
    v6 >>= 6;
    PpmDefaultProfile[v6 + 5] |= 1LL << v5;
    PpmDefaultProfile[v6 + 66] |= 1LL << v5;
    --v4;
  }
  while ( v4 );
  v7 = (_QWORD **)v16;
  do
  {
    PpmPolicySettingsMaskMerge((__int64)&PpmPolicySettingGlobalMask, (__int64)&PpmPolicySettingGlobalMask, *v7);
    v7 = (_QWORD **)(v8 + 8);
  }
  while ( v9 != 1 );
  v10 = (_QWORD **)v15;
  do
  {
    PpmPolicySettingsMaskMerge((__int64)&PpmPolicyQosSettingsMask, (__int64)&PpmPolicyQosSettingsMask, *v10);
    v10 = (_QWORD **)(v12 + 8);
  }
  while ( v13 != 1 );
  qword_140F06970 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_140F0656C = (__int128)CPER_EMPTY_GUID;
  dword_140F0657C = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, v11);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x46uLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
