/*
 * XREFs of PopPepTriggerActivity @ 0x1402C1E00
 * Callers:
 *     PopPepComponentSetLatency @ 0x1402BF568 (PopPepComponentSetLatency.c)
 *     PopPepUpdateIdleState @ 0x1402BF8D0 (PopPepUpdateIdleState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402BFAA0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1402C2640 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1402C27E0 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepSurprisePowerOn @ 0x1403A60EC (PopPepSurprisePowerOn.c)
 *     PopPepTriggerComponentIdleStateChangeActivity @ 0x14044FEB0 (PopPepTriggerComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopPepTriggerComponentActivatingActivity @ 0x1402C27E0 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepTriggerComponentActiveActivity @ 0x1402C28B0 (PopPepTriggerComponentActiveActivity.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopPepTriggerComponentIdleStateChangeActivity @ 0x14044FEB0 (PopPepTriggerComponentIdleStateChangeActivity.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepTriggerActivity(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  ULONG_PTR v7; // r11
  int v8; // r10d
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  BOOL v13; // ecx
  ULONG_PTR v14; // r10
  __int64 v15; // rax
  _DWORD *v16; // r8
  _DWORD *v17; // rax
  __int64 (__fastcall *v18)(_QWORD, _QWORD, _QWORD); // rax
  int v20; // r8d
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // r8d
  int v30; // r8d
  int v31; // edx
  int v32; // edx
  int v33; // edx

  v4 = a3;
  v7 = a3;
  v8 = HIDWORD(ActivityAttributes[17 * a3]);
  switch ( v8 )
  {
    case 0:
      break;
    case 1:
      v9 = ActivityAttributes[17 * a3 + 5];
      if ( v9 )
      {
        v20 = **(_DWORD **)(a1 + 72);
        if ( (v20 & v9) != 0 )
        {
          if ( (v20 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 72) &= 0xFFFFFFFC;
        }
      }
      v10 = ActivityAttributes[17 * v7 + 7];
      if ( v10 )
      {
        v21 = **(_DWORD **)(a1 + 104);
        if ( (v21 & v10) != 0 )
        {
          if ( (v21 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 104) &= 0xFFFFFFFC;
        }
      }
      v11 = HIDWORD(ActivityAttributes[17 * v7 + 7]);
      if ( v11 )
      {
        v22 = **(_DWORD **)(a1 + 112);
        if ( (v11 & v22) != 0 )
        {
LABEL_31:
          if ( (v22 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 112) &= 0xFFFFFFFC;
        }
      }
      break;
    case 2:
      if ( *(_BYTE *)(a1 + 125) )
      {
        v23 = ActivityAttributes[17 * a3 + 5];
        if ( v23 )
        {
          v33 = **(_DWORD **)(a1 + 72);
          if ( (v23 & v33) != 0 )
          {
            if ( (v33 & 2) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
            **(_DWORD **)(a1 + 72) &= 0xFFFFFFFC;
          }
        }
      }
      v24 = HIDWORD(ActivityAttributes[17 * a3 + 5]);
      if ( v24 )
      {
        v29 = **(_DWORD **)(a2 + 64);
        if ( (v29 & v24) != 0 )
        {
          if ( (v29 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          **(_DWORD **)(a2 + 64) &= 0xFFFFFFFC;
        }
      }
      v25 = ActivityAttributes[17 * v7 + 6];
      if ( v25 )
      {
        v30 = **(_DWORD **)(a2 + 72);
        if ( (v30 & v25) != 0 )
        {
          if ( (v30 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          **(_DWORD **)(a2 + 72) &= 0xFFFFFFFC;
        }
      }
      v26 = HIDWORD(ActivityAttributes[17 * v7 + 6]);
      if ( v26 )
      {
        v31 = **(_DWORD **)(a2 + 80);
        if ( (v31 & v26) != 0 )
        {
          if ( (v31 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          **(_DWORD **)(a2 + 80) &= 0xFFFFFFFC;
        }
      }
      if ( *(_BYTE *)(a1 + 125) )
      {
        v27 = ActivityAttributes[17 * v7 + 7];
        if ( v27 )
        {
          v32 = **(_DWORD **)(a1 + 104);
          if ( (v27 & v32) != 0 )
          {
            if ( (v32 & 2) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
            **(_DWORD **)(a1 + 104) &= 0xFFFFFFFC;
          }
        }
        v28 = HIDWORD(ActivityAttributes[17 * v7 + 7]);
        if ( v28 )
        {
          v22 = **(_DWORD **)(a1 + 112);
          if ( (v28 & v22) != 0 )
            goto LABEL_31;
        }
      }
      break;
  }
  v12 = 0;
  v13 = (unsigned int)v4 <= 5 && LOBYTE(ActivityAttributes[17 * v7]) == 1;
  v14 = a1 + 72;
  if ( !v13 )
    v14 = a2 + 56;
  v15 = 0LL;
  while ( v12 < 6 )
  {
    v16 = *(_DWORD **)(v14 + 8 * v15);
    if ( v16 )
    {
      if ( (*((_DWORD *)&ActivityAttributes[17 * v7 + 2] + v15) & *v16) != 0 )
        PopFxBugCheck(0x666uLL, v14, v7, v12);
    }
    ++v12;
    ++v15;
  }
  if ( a2 )
    v17 = *(_DWORD **)(a2 + 8 * v4 + 56);
  else
    v17 = *(_DWORD **)(a1 + 8 * v4 + 72);
  *v17 |= 1u;
  v17[1] = a4;
  v18 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ActivityAttributes[17 * v7 + 14];
  if ( v18 == PopPepTriggerComponentActivatingActivity )
    return PopPepTriggerComponentActivatingActivity(a1, a2, a4);
  if ( v18 == PopPepTriggerComponentActiveActivity )
    return PopPepTriggerComponentActiveActivity(a1, a2, a4);
  if ( v18 == PopPepTriggerComponentIdleStateChangeActivity )
    return PopPepTriggerComponentIdleStateChangeActivity(a1, a2, a4);
  return guard_dispatch_icall_no_overrides(a1, a2);
}
