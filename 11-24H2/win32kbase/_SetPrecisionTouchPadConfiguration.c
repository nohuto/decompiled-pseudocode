/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1401B1850
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     UnpackTouchpadSettings @ 0x140213E98 (UnpackTouchpadSettings.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ResetAccelerationCurves @ 0x1401289C0 (ResetAccelerationCurves.c)
 *     UpdateTPCurrentActiveState @ 0x14012BEC0 (UpdateTPCurrentActiveState.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x14013B680 (BroadcastSettingsUpdateToAllContainers.c)
 *     IsValidMouseSensitivity @ 0x14013CF10 (IsValidMouseSensitivity.c)
 *     CBaseInput::ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___ @ 0x1401B1360 (CBaseInput--ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___.c)
 *     WriteSettingValues @ 0x1401B6F50 (WriteSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(__m128i *a1, int a2)
{
  _DWORD *v3; // rdi
  __int64 v4; // rcx
  _DWORD *UserSessionState; // rbx
  unsigned __int32 v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  unsigned int v10; // r13d
  unsigned int v11; // esi
  __m128i v12; // xmm3
  __m128i v13; // xmm2
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // eax
  struct W32_PUSH_LOCK *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp+8h]
  int v26; // [rsp+B8h] [rbp+20h]

  v3 = (_DWORD *)(W32GetUserSessionState(a1) + 17696);
  UserSessionState = (_DWORD *)W32GetUserSessionState(v4);
  if ( a1 && a1->m128i_i32[0] <= 2u )
  {
    if ( a1->m128i_i32[0] )
    {
      v12 = a1[1];
      v10 = a1[2].m128i_u32[2];
      v13 = a1[2];
      v6 = a1[1].m128i_u32[2];
      v11 = _mm_cvtsi128_si32(v12);
      v7 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
      v24 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
      HIDWORD(v23) = v12.m128i_i32[1];
      v9 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
      v8 = _mm_cvtsi128_si32(v13);
    }
    else
    {
      v6 = a1[1].m128i_u32[0];
      v7 = a1[1].m128i_i8[5];
      v8 = a1[1].m128i_i8[6];
      v9 = UserSessionState[4201];
      v10 = UserSessionState[4202];
      v24 = a1->m128i_i32[2];
      v11 = a1->m128i_i32[3] & 0x180 | a1[1].m128i_i32[1] & 0x41 | (2
                                                                  * (a1[1].m128i_i32[1] & 4 | (8
                                                                                             * (a1[1].m128i_i32[1] & 2 | (4 * (a1->m128i_i32[3] & 8)))))) | ((a1->m128i_i32[3] & 0x400 | ((a1->m128i_i32[3] & 0x200 | (a1[1].m128i_i32[1] >> 16) & 0x100u) >> 1)) >> 6);
      v23 = __PAIR64__(v24, v11);
    }
    v3[3] = UserSessionState[4197];
    if ( HIDWORD(v23) > 4 )
      v24 = UserSessionState[4197];
    else
      v3[3] = HIDWORD(v23);
    v3[7] = UserSessionState[4198];
    if ( IsValidMouseSensitivity(v6) )
      v3[7] = v6;
    else
      v6 = UserSessionState[4198];
    v3[11] = UserSessionState[4199];
    if ( v7 > 0x64 )
      v7 = UserSessionState[4199];
    else
      v3[11] = v7;
    v3[15] = UserSessionState[4200];
    if ( v8 > 0x64 )
      v8 = UserSessionState[4200];
    else
      v3[15] = v8;
    v3[59] = UserSessionState[4201];
    if ( v9 > 0x64 )
      v9 = UserSessionState[4201];
    else
      v3[59] = v9;
    v3[63] = UserSessionState[4202];
    if ( v10 > 0x64 )
      v10 = UserSessionState[4202];
    else
      v3[63] = v10;
    v3[19] = -(v11 & 1);
    v26 = -__CFSHR__(v11, 2);
    v3[23] = v26;
    v3[27] = -__CFSHR__(v11, 3);
    v3[31] = -__CFSHR__(v11, 4);
    v3[35] = -__CFSHR__(v11, 5);
    v3[39] = -__CFSHR__(v11, 6);
    v3[43] = -__CFSHR__(v11, 7);
    v3[47] = -__CFSHR__(v11, 8);
    v3[51] = -__CFSHR__(v11, 9);
    v3[55] = -__CFSHR__(v11, 10);
    if ( a2 )
    {
      v15 = WriteSettingValues(0LL, v3, 16LL);
      if ( !v15 )
        return v15;
    }
    else
    {
      v15 = 1;
    }
    v16 = UserSessionState[4196] & 0xFFFFFC02;
    UserSessionState[4197] = v24;
    UserSessionState[4201] = v9;
    UserSessionState[4196] = v16 | v11 & 0x3FD;
    UserSessionState[4202] = v10;
    if ( UserSessionState[4198] != v6 )
    {
      UserSessionState[4198] = v6;
      ResetAccelerationCurves(1LL);
    }
    if ( UserSessionState[4199] != v7 || UserSessionState[4200] != v8 || -__CFSHR__(UserSessionState[4196], 2) != v26 )
    {
      v17 = UserSessionState[4196] & 0xFFFFFFFD;
      UserSessionState[4199] = v7;
      UserSessionState[4200] = v8;
      UserSessionState[4196] = v11 & 2 | v17;
      v18 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v14) + 16840) + 1232LL);
      W32AcquirePushLockSharedEx(v18, 0);
      v20 = W32GetUserSessionState(v19);
      CBaseInput::ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___(*(_QWORD *)(v20 + 16840));
      ExReleasePushLockSharedEx(v18, 0LL);
      KeLeaveCriticalRegion();
    }
    UpdateTPCurrentActiveState(v14);
    BroadcastSettingsUpdateToAllContainers(v21);
    return v15;
  }
  return 0LL;
}
