/*
 * XREFs of ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180080B18
 * Callers:
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x1800808CC (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x180080988 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x18010CC0C (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
float *__fastcall VolumeHardwareLogger::CurrentVolumeLevel(__int64 a1, float *a2)
{
  __int64 v4; // rcx

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 && *(float *)(a1 + 80) != 0.0 )
  {
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v4 + 112LL))(v4, a2);
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 64) + 120LL))(*(_QWORD *)(a1 + 64), (_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 2) = (int)(float)((float)((float)(*a2 - *(float *)(a1 + 72)) / *(float *)(a1 + 80)) + 0.5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  return a2;
}
