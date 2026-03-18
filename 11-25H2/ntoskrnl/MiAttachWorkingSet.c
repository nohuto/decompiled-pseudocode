/*
 * XREFs of MiAttachWorkingSet @ 0x1403C313C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1403C2D90 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall MiAttachWorkingSet(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v2; // rcx
  struct _KTHREAD *v3; // r8
  _OWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF

  LODWORD(CurrentThread) = *(_DWORD *)(a1 + 184);
  if ( ((unsigned __int8)CurrentThread & 0xF) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (_KPROCESS *)(a1 - 1024);
    if ( CurrentThread->Process != v2 )
    {
      memset(v5, 0, sizeof(v5));
      v3 = KeGetCurrentThread();
      if ( v3->ApcStateIndex )
        KeBugCheckEx(5u, (ULONG_PTR)v2, (ULONG_PTR)v3->ApcState.Process, v3->ApcStateIndex, 0LL);
      LOBYTE(CurrentThread) = KiStackAttachProcess(v2, 1, (__int64)v5);
    }
  }
  return (char)CurrentThread;
}
