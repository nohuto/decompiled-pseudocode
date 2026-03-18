/*
 * XREFs of MiTransientPageListWriter @ 0x1403E2D30
 * Callers:
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  unsigned int v6; // edi

  v4 = ExAcquireSpinLockShared(&dword_140E2FBE0);
  v5 = (_QWORD *)qword_140E2FBE8;
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
  MiReleaseSpinLockShared(&dword_140E2FBE0, v4);
  LOBYTE(v6) = v5 != 0LL;
  return v6;
}
