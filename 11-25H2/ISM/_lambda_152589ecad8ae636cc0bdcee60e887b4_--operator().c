/*
 * XREFs of _lambda_152589ecad8ae636cc0bdcee60e887b4_::operator() @ 0x1800C1800
 * Callers:
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C2048 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800BA780 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 */

void __fastcall lambda_152589ecad8ae636cc0bdcee60e887b4_::operator()(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  LOBYTE(v1) = *(_BYTE *)(*a1 + 9712);
  MPCManager::SendHomeGestureReadyChanged(
    MPCManager::s_instance,
    v1,
    **(_DWORD **)(*a1 + 48),
    *(_DWORD *)(*(_QWORD *)(*a1 + 48) + 4LL),
    *(_QWORD *)(*(_QWORD *)a1[1] + 16LL),
    *(_DWORD *)(*(_QWORD *)a1[1] + 1060LL),
    *(_DWORD *)(*(_QWORD *)a1[1] + 1088LL));
}
