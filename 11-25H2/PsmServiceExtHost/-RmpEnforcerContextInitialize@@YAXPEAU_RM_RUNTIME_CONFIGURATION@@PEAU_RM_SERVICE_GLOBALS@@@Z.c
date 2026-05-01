/*
 * XREFs of ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180088E74
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800856B0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempLockInitialize @ 0x180040C1C (CempLockInitialize.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

void __fastcall RmpEnforcerContextInitialize(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  int v4; // eax
  int v5; // eax

  *((_OWORD *)a2 + 3) = 0LL;
  *((_OWORD *)a2 + 4) = 0LL;
  *((_OWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 12) = 0LL;
  *((_QWORD *)a2 + 7) = -500000LL;
  *((_DWORD *)a2 + 22) = 50;
  *((_BYTE *)a2 + 96) = 5;
  memset_0((char *)a2 + 104, 0, 0x48uLL);
  CempLockInitialize((__int64)a2 + 136);
  *((_QWORD *)a2 + 23) = 0LL;
  *((_QWORD *)a2 + 24) = 0LL;
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  v4 = *((_DWORD *)a1 + 40);
  *((_QWORD *)a2 + 23) = (char *)a2 + 176;
  *((_QWORD *)a2 + 22) = (char *)a2 + 176;
  *((_DWORD *)a2 + 50) = v4;
  *((_DWORD *)a2 + 51) = *((_DWORD *)a1 + 41);
  *((_BYTE *)a2 + 208) = *((_BYTE *)a1 + 168);
  memset_0((char *)a2 + 216, 0, 0x60uLL);
  *((_QWORD *)a2 + 29) = (char *)a2 + 224;
  *((_QWORD *)a2 + 28) = (char *)a2 + 224;
  v5 = *((_DWORD *)a1 + 38);
  *((_QWORD *)a2 + 34) = 0LL;
  *((_QWORD *)a2 + 35) = -1LL;
  *((_QWORD *)a2 + 36) = 0LL;
  *((_QWORD *)a2 + 37) = 0LL;
  *((_DWORD *)a2 + 76) = 0;
  *((_DWORD *)a2 + 77) = 0;
  *((_DWORD *)a2 + 64) = v5;
  *((_DWORD *)a2 + 65) = *((_DWORD *)a1 + 36);
  *((_DWORD *)a2 + 66) = *((_DWORD *)a1 + 37);
}
