/*
 * XREFs of PopSleepPowerSettingCallback @ 0x14099E850
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSleepPowerSettingCallback(__int64 *a1, _DWORD *a2, int a3)
{
  int v6; // esi
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _OWORD v30[3]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+50h] [rbp-C8h]
  __int128 v32; // [rsp+60h] [rbp-B8h]
  __int128 v33; // [rsp+70h] [rbp-A8h]
  __int128 v34; // [rsp+80h] [rbp-98h]
  __int128 v35; // [rsp+90h] [rbp-88h]
  _OWORD v36[6]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v37; // [rsp+100h] [rbp-18h]

  v6 = -1073741811;
  PopAcquirePolicyLock(a1, a2);
  v8 = *((_OWORD *)PopPolicy + 1);
  v30[0] = *(_OWORD *)PopPolicy;
  v9 = *((_OWORD *)PopPolicy + 2);
  v30[1] = v8;
  v10 = *((_OWORD *)PopPolicy + 3);
  v30[2] = v9;
  v11 = *((_OWORD *)PopPolicy + 4);
  v31 = v10;
  v12 = *((_OWORD *)PopPolicy + 5);
  v32 = v11;
  v13 = *((_OWORD *)PopPolicy + 6);
  v33 = v12;
  v34 = v13;
  v14 = v36;
  v35 = *((_OWORD *)PopPolicy + 7);
  v15 = *((_OWORD *)PopPolicy + 9);
  v36[0] = *((_OWORD *)PopPolicy + 8);
  v16 = *((_OWORD *)PopPolicy + 10);
  v36[1] = v15;
  v17 = *((_OWORD *)PopPolicy + 11);
  v36[2] = v16;
  v18 = *((_OWORD *)PopPolicy + 12);
  v36[3] = v17;
  v19 = *((_OWORD *)PopPolicy + 13);
  v20 = *((_QWORD *)PopPolicy + 28);
  v36[4] = v18;
  v36[5] = v19;
  v37 = v20;
  v21 = *a1;
  v22 = *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 == *a1 )
    v22 = *(_QWORD *)GUID_STANDBY_TIMEOUT.Data4 - a1[1];
  if ( !v22 && a3 == 4 && a2 )
  {
    v23 = (unsigned int)*a2;
    HIDWORD(v31) = *a2;
    if ( byte_140F0B663 || __PAIR16__(word_140F0B664, 0) != HIBYTE(word_140F0B664) )
      LODWORD(v31) = 2;
    v6 = 0;
  }
  else
  {
    v23 = HIDWORD(v31);
  }
  v24 = *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 - v21;
  if ( *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 == v21 )
    v24 = *(_QWORD *)GUID_HIBERNATE_TIMEOUT.Data4 - a1[1];
  if ( !v24 && a3 == 4 && a2 )
  {
    v25 = *a2;
    DWORD2(v33) = *a2;
    if ( !(_DWORD)v23 && v25 && byte_140F0B666 && byte_140F0B667 )
      LODWORD(v31) = 3;
  }
  else if ( v6 < 0 )
  {
    goto LABEL_23;
  }
  LOBYTE(v24) = 1;
  v6 = ((__int64 (__fastcall *)(__int64, _QWORD, _OWORD *, __int64))PopApplyPolicy)(v24, 0LL, v30, 232LL);
LABEL_23:
  v26 = *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_HIBERNATE_FASTS4_POLICY.Data1 == *a1 )
    v26 = *(_QWORD *)GUID_HIBERNATE_FASTS4_POLICY.Data4 - a1[1];
  if ( !v26 && a3 == 4 && a2 )
  {
    byte_140F0B39C = *a2 == 0;
    v6 = 0;
  }
  v27 = *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_STANDBY_STATES.Data1 == *a1 )
    v27 = *(_QWORD *)GUID_ALLOW_STANDBY_STATES.Data4 - a1[1];
  if ( !v27 && a3 == 4 && a2 )
  {
    byte_140F0B39D = *a2 == 0;
    PopUpdateSystemIdleContext(3LL);
    v6 = 0;
  }
  v28 = *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_UNATTEND_SLEEP_TIMEOUT.Data1 == *a1 )
    v28 = *(_QWORD *)GUID_UNATTEND_SLEEP_TIMEOUT.Data4 - a1[1];
  if ( !v28 && a3 == 4 && a2 )
  {
    dword_140F0B3A0 = *a2;
    PopUpdateSystemIdleContext(3LL);
    v6 = 0;
  }
  PopReleasePolicyLock(v28, v23, v7, v14, *(_QWORD *)&v30[0]);
  return (unsigned int)v6;
}
