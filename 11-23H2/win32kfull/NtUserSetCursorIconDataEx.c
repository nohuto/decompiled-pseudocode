/*
 * XREFs of NtUserSetCursorIconDataEx @ 0x1C0049940
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C01DAC30 (NtUserSetCursorIconData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C004A78C (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetCursorIconDataEx(__int64 a1, ULONG64 a2, ULONG64 a3, ULONG64 a4, unsigned int a5)
{
  AtomicExecutionCheck *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  struct tagCURSOR *v19; // rsi
  unsigned int v20; // ebx
  int v21; // edx
  WCHAR *v22; // r9
  int v23; // ecx
  WCHAR *v24; // r8
  ULONG64 v25; // r10
  ULONG64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v34; // [rsp+30h] [rbp-D8h]
  int v35; // [rsp+34h] [rbp-D4h]
  struct _UNICODE_STRING v36; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v37; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+70h] [rbp-98h] BYREF
  __int128 v39; // [rsp+80h] [rbp-88h]
  __int128 v40; // [rsp+90h] [rbp-78h]
  __int128 v41; // [rsp+A0h] [rbp-68h]
  __int128 v42; // [rsp+B0h] [rbp-58h]
  __int128 v43; // [rsp+C0h] [rbp-48h]
  __int128 v44; // [rsp+D0h] [rbp-38h]
  __int128 v45; // [rsp+E0h] [rbp-28h]
  __int64 v46; // [rsp+F0h] [rbp-18h]

  v37 = 0LL;
  v36 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::EnforceConsistency(v9);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  LOBYTE(v14) = 3;
  v15 = HMValidateHandle(a1, v14);
  v19 = (struct tagCURSOR *)v15;
  v20 = 0;
  if ( !v15 )
    goto LABEL_39;
  if ( (*(_DWORD *)(v15 + 80) & 0x800) == 0 )
  {
    UserSetLastError(0LL);
    goto LABEL_39;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v21 = *(_DWORD *)a2;
  v35 = *(_DWORD *)a2;
  *(_DWORD *)&v37.Length = *(_DWORD *)a2;
  v22 = *(WCHAR **)(a2 + 8);
  v37.Buffer = v22;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v23 = *(_DWORD *)a3;
  v34 = *(_DWORD *)a3;
  *(_DWORD *)&v36.Length = *(_DWORD *)a3;
  v24 = *(WCHAR **)(a3 + 8);
  v36.Buffer = v24;
  if ( ((unsigned __int8)v22 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (ULONG64)v22 + (unsigned __int16)v21 + 2;
  if ( v25 <= (unsigned __int64)v22 || v25 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v21 > HIWORD(v35) )
  {
    if ( (v21 & 1) == 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( (v21 & 1) != 0 )
  {
LABEL_36:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7951LL);
LABEL_37:
    ExRaiseAccessViolation();
  }
  if ( ((unsigned __int64)v24 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v24 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = (ULONG64)v24 + (unsigned __int16)v23 + 2;
    if ( v26 <= (unsigned __int64)v24 || v26 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v23 > HIWORD(v34) || (v23 & 1) != 0 )
    {
      if ( (v23 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7952LL);
      ExRaiseAccessViolation();
    }
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v38 = *(_OWORD *)a4;
  v39 = *(_OWORD *)(a4 + 16);
  v40 = *(_OWORD *)(a4 + 32);
  v41 = *(_OWORD *)(a4 + 48);
  v42 = *(_OWORD *)(a4 + 64);
  v43 = *(_OWORD *)(a4 + 80);
  v44 = *(_OWORD *)(a4 + 96);
  v45 = *(_OWORD *)(a4 + 112);
  v46 = *(_QWORD *)(a4 + 128);
  if ( (DWORD2(v39) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004LL);
    goto LABEL_39;
  }
  if ( (BYTE8(v39) & 8) == 0 )
    goto LABEL_17;
  v16 = SDWORD1(v44);
  v18 = (int)v44;
  v17 = (unsigned __int64)SDWORD1(v44) >> 16;
  LOWORD(v17) = WORD1(v44) | WORD3(v44);
  if ( !(WORD1(v44) | WORD3(v44)) )
  {
    v17 = *((_QWORD *)&v45 + 1);
    if ( v45 == __PAIR128__(8LL * (int)v44, *((_QWORD *)&v45 + 1) + 4LL * SDWORD1(v44)) )
    {
      v20 = 8 * (DWORD1(v44) + v44);
LABEL_17:
      ProbeForRead(*((volatile void **)&v44 + 1), v20, 4u);
      LODWORD(Size) = v20;
      v20 = _SetCursorIconDataEx(v19, &v37, &v36, (struct tagCURSORDATA *)&v38, Size, a5);
    }
  }
LABEL_39:
  v27 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
  --*(_DWORD *)(v27 + 48);
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return (int)v20;
}
