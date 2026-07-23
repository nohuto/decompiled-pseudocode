/*
 * XREFs of MiWaitForExtentDeletions @ 0x14067D010
 * Callers:
 *     MiDeleteExtentPfns @ 0x14067B940 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiWaitForExtentDeletions(__int64 a1, unsigned __int8 a2)
{
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  ULONG_PTR v9; // [rsp+20h] [rbp-20h] BYREF
  __int16 v10; // [rsp+28h] [rbp-18h] BYREF
  char v11; // [rsp+2Ah] [rbp-16h]
  char v12; // [rsp+2Bh] [rbp-15h]
  int v13; // [rsp+2Ch] [rbp-14h]
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF

  v12 = 0;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140E2D720, 0LL);
  v7 = (ULONG_PTR)v3;
  if ( v3 )
    KeAbPreWait(v3, v4, v5, v6);
  v13 = 0;
  v14[1] = v14;
  v10 = 263;
  v14[0] = v14;
  v9 = qword_140E2D720;
  qword_140E2D720 = (ULONG_PTR)&v9;
  v11 = 6;
  MiReleaseSpinLockExclusive(dword_140E3A8E0, a2);
  result = KeWaitForGate((__int64)&v10, 18LL);
  if ( v7 )
  {
    KeAbPreAcquire((__int64)&qword_140E2D720, v7);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140E2D720, v7);
  }
  return result;
}
