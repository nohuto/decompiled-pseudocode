/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1402965B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1402DE7DC (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, int *a3)
{
  int v4; // ebx
  int v5; // ecx
  ULONG64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v11; // rax
  int v12; // r8d
  _DWORD *v13; // rdx
  int v15; // [rsp+20h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+98h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v17, 1LL);
  v4 = 0;
  v20 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v5 = 87;
LABEL_3:
    UserSetLastError(v5);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v9 = (unsigned int)*a3;
  v15 = *a3;
  if ( a2 && v15 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v7, v8);
    ProbeForWrite(a2, v15, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v11 = InteractiveControlManager::Instance(v9, v7);
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v11, a1, (struct _WAVEFORM_INFO **)&Src, &v20) >= 0 )
  {
    if ( (unsigned __int64)v20 >= 0xFFFFFFF )
    {
      v5 = 534;
      goto LABEL_3;
    }
    v12 = 8 * v20;
    if ( v15 > 0 && v15 < v12 )
    {
      v5 = 122;
      goto LABEL_3;
    }
    v13 = a3;
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    if ( a2 && Src && v15 >= v12 )
    {
      *a3 = v12;
      memmove((void *)a2, Src, v12);
    }
    else
    {
      *a3 = v12;
    }
    v4 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
