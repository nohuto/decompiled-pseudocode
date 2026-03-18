/*
 * XREFs of MiWaitForExtentDeletions @ 0x14067BE30
 * Callers:
 *     MiDeleteExtentPfns @ 0x14067A760 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForExtentDeletions(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  ULONG_PTR v6; // rbx
  __int64 result; // rax
  ULONG_PTR v8; // [rsp+20h] [rbp-20h] BYREF
  __int16 v9; // [rsp+28h] [rbp-18h] BYREF
  char v10; // [rsp+2Ah] [rbp-16h]
  char v11; // [rsp+2Bh] [rbp-15h]
  int v12; // [rsp+2Ch] [rbp-14h]
  _QWORD v13[2]; // [rsp+30h] [rbp-10h] BYREF

  v11 = 0;
  v3 = KeAbPreAcquire((__int64)&qword_140E2D5E0, 0LL);
  v6 = (ULONG_PTR)v3;
  if ( v3 )
    KeAbPreWait((__int64)v3, v4, v5);
  v12 = 0;
  v13[1] = v13;
  v9 = 263;
  v13[0] = v13;
  v8 = qword_140E2D5E0;
  qword_140E2D5E0 = (ULONG_PTR)&v8;
  v10 = 6;
  MiReleaseSpinLockExclusive(dword_140E3A7A0, a2);
  result = KeWaitForGate((__int64)&v9, 18LL, 0);
  if ( v6 )
  {
    KeAbPreAcquire((__int64)&qword_140E2D5E0, v6);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140E2D5E0, v6);
  }
  return result;
}
