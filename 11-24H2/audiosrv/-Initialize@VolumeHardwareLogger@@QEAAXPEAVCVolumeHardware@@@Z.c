/*
 * XREFs of ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18006E164
 * Callers:
 *     _lambda_ebe2282181f4e2159926b1d117e17408_::operator() @ 0x180112DA8 (_lambda_ebe2282181f4e2159926b1d117e17408_--operator().c)
 *     ?Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180113FEC (-Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18006E3B0 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    (*(void (__fastcall **)(struct CVolumeHardware *, __int64, char *, char *, char *))(*(_QWORD *)a2 + 176LL))(
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
