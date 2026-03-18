/*
 * XREFs of EditionInitInputHangInfo @ 0x1401A7520
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 */

void EditionInitInputHangInfo()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v2);
  _InterlockedExchange(
    (volatile __int32 *)(*((_QWORD *)PtiCurrent(v1, v0) + 61) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  xxxUpdateInputHangInfo(0LL, 1LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v2);
}
