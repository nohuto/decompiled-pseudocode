/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01D1730
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C0240070 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(__int64 a1, volatile void *a2, int *a3)
{
  unsigned __int16 v5; // r15
  int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  SIZE_T v15; // rsi
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v17; // rax
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1;
  EnterSharedCrit(a1, a2, a3);
  v6 = 0;
  v20 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v7 = 87;
LABEL_3:
    UserSetLastError(v7);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v15 = *a3;
  v19 = *a3;
  if ( a2 && (int)v15 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12, v14);
    ProbeForWrite(a2, v15, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v17 = InteractiveControlManager::Instance(v13);
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v17, v5, (struct _WAVEFORM_INFO **)&Src, &v20) >= 0 )
  {
    if ( (unsigned __int64)v20 >= 0xFFFFFFF )
    {
      v7 = 534;
      goto LABEL_3;
    }
    v10 = (unsigned int)(8 * v20);
    if ( (int)v15 > 0 && (int)v15 < (int)v10 )
    {
      v7 = 122;
      goto LABEL_3;
    }
    v9 = MmUserProbeAddress;
    v8 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
    if ( a2 && (v8 = Src) != 0LL && v19 >= (int)v10 )
    {
      *a3 = v10;
      memmove((void *)a2, v8, (int)v10);
    }
    else
    {
      *a3 = v10;
    }
    v6 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
