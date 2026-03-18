/*
 * XREFs of MiTransientPageListWriter @ 0x1404D1B8C
 * Callers:
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  unsigned int v6; // edi

  v4 = ExAcquireSpinLockShared(&dword_140E2FE20);
  v5 = (_QWORD *)qword_140E2FE28;
  v6 = 0;
  while ( v5 )
  {
    if ( a1 <= v5[39] )
    {
      if ( a1 >= v5[39] )
        break;
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[1];
    }
  }
  if ( v5 && (!v5[36] || a2 < v5[37] || a2 > v5[38]) )
    v5 = 0LL;
  MiReleaseSpinLockShared(&dword_140E2FE20, v4);
  LOBYTE(v6) = v5 != 0LL;
  return v6;
}
