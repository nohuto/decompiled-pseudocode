/*
 * XREFs of _lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator() @ 0x1800C1858
 * Callers:
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C2048 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800BA6B8 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 */

void __fastcall lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator()(_QWORD **a1, unsigned int a2)
{
  MPCManager::SendHomeGesture(
    MPCManager::s_instance,
    *(_DWORD *)(*a1)[6],
    *(_DWORD *)((*a1)[6] + 4LL),
    *(_QWORD *)(*a1[1] + 16LL),
    *(_DWORD *)(*a1[1] + 1060LL),
    a2);
}
