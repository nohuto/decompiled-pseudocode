/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C01CD0E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     RequestInputSinkInfoFromPoint @ 0x1C01E5FFC (RequestInputSinkInfoFromPoint.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(
        int a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // ebx
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  ULONG64 v21; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  _OWORD *v27; // rdi
  __int64 v28; // rax
  unsigned int v30; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+54h] [rbp-D4h]
  int v32; // [rsp+5Ch] [rbp-CCh]
  __int64 v33; // [rsp+64h] [rbp-C4h]
  __int64 v34; // [rsp+70h] [rbp-B8h]
  __int128 v35; // [rsp+78h] [rbp-B0h]
  __int128 v36; // [rsp+88h] [rbp-A0h]
  __int128 v37; // [rsp+98h] [rbp-90h]
  __int128 v38; // [rsp+A8h] [rbp-80h]
  _OWORD v39[4]; // [rsp+E0h] [rbp-48h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 0LL);
  memset_0(&v30, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v12 = 87;
LABEL_4:
    v13 = 0;
    UserSetLastError(v12);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v12 = 5;
    goto LABEL_4;
  }
  v21 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v21 > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v31 = *a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21, v19, v20);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v26 = v30 | 1;
  v30 |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v26 |= 2u;
    v30 = v26;
    *a4 = 0LL;
  }
  v27 = Address;
  if ( Address )
  {
    v28 = PsGetCurrentProcessWow64Process(v24, v23, v25);
    ProbeForWrite(Address, 0x40uLL, v28 != 0 ? 1 : 4);
    v30 = v26 | 4;
    memset_0(v39, 0, sizeof(v39));
    *Address = v39[0];
    Address[1] = v39[1];
    Address[2] = v39[2];
    Address[3] = v39[3];
  }
  v32 = a1;
  v13 = RequestInputSinkInfoFromPoint(&v30);
  if ( v13 )
  {
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = v33;
    v14 = v30;
    if ( (v30 & 2) != 0 )
    {
      v15 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = v34;
    }
    if ( (v14 & 4) != 0 )
    {
      v15 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v27 = (_OWORD *)MmUserProbeAddress;
      *v27 = v35;
      v27[1] = v36;
      v27[2] = v37;
      v27[3] = v38;
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v13;
}
