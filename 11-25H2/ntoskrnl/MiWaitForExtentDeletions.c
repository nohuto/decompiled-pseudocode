/*
 * XREFs of MiWaitForExtentDeletions @ 0x140670670
 * Callers:
 *     MiDeleteExtentPfns @ 0x14066EFA0 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForExtentDeletions(__int64 a1, unsigned __int8 a2)
{
  __int64 *v3; // rax
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  ULONG_PTR v6; // [rsp+20h] [rbp-20h] BYREF
  __int16 v7; // [rsp+28h] [rbp-18h] BYREF
  char v8; // [rsp+2Ah] [rbp-16h]
  char v9; // [rsp+2Bh] [rbp-15h]
  int v10; // [rsp+2Ch] [rbp-14h]
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF

  v9 = 0;
  v3 = KeAbPreAcquire((__int64)&qword_140E2D3A0, 0LL);
  v4 = (ULONG_PTR)v3;
  if ( v3 )
    KeAbPreWait(v3);
  v10 = 0;
  v11[1] = v11;
  v7 = 263;
  v11[0] = v11;
  v6 = qword_140E2D3A0;
  qword_140E2D3A0 = (ULONG_PTR)&v6;
  v8 = 6;
  MiReleaseSpinLockExclusive(dword_140E3A560, a2);
  result = KeWaitForGate((__int64)&v7, 18, 0);
  if ( v4 )
  {
    KeAbPreAcquire((__int64)&qword_140E2D3A0, v4);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140E2D3A0, v4);
  }
  return result;
}
