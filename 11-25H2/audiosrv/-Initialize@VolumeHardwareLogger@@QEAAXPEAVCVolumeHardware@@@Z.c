/*
 * XREFs of ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x1800808CC
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180054718 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180080B18 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::Initialize(char *pv, struct CVolumeHardware *a2)
{
  __int64 v4; // rax
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)pv);
  *((_QWORD *)pv + 8) = a2;
  QueryPerformanceFrequency((LARGE_INTEGER *)pv + 5);
  *((_QWORD *)pv + 6) = CreateThreadpoolTimer(VolumeHardwareLogger::TimerCallback, pv, 0LL);
  if ( a2 )
    (*(void (__fastcall **)(struct CVolumeHardware *, __int64, char *, char *, char *))(*(_QWORD *)a2 + 160LL))(
      a2,
      0xFFFFFFFFLL,
      pv + 72,
      pv + 76,
      pv + 80);
  v4 = VolumeHardwareLogger::CurrentVolumeLevel(pv, v5);
  *((_QWORD *)pv + 11) = *(_QWORD *)v4;
  LODWORD(v4) = *(_DWORD *)(v4 + 8);
  *((_DWORD *)pv + 24) = v4;
  *((_DWORD *)pv + 21) = v4;
  LeaveCriticalSection((LPCRITICAL_SECTION)pv);
}
