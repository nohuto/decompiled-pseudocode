/*
 * XREFs of MiTransientPageListWriter @ 0x1404CABCC
 * Callers:
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v4 = ExAcquireSpinLockShared(&dword_140E2FF60);
  v7 = (_QWORD *)qword_140E2FF68;
  v8 = 0;
  while ( v7 )
  {
    if ( a1 <= v7[39] )
    {
      if ( a1 >= v7[39] )
        break;
      v7 = (_QWORD *)*v7;
    }
    else
    {
      v7 = (_QWORD *)v7[1];
    }
  }
  if ( v7 && (!v7[36] || a2 < v7[37] || a2 > v7[38]) )
    v7 = 0LL;
  MiReleaseSpinLockShared(&dword_140E2FF60, v4, v5, v6);
  LOBYTE(v8) = v7 != 0LL;
  return v8;
}
