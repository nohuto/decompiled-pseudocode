/*
 * XREFs of PfCheckDeprioritizeImage @ 0x1409DC928
 * Callers:
 *     PfProcessCreateNotification @ 0x140948348 (PfProcessCreateNotification.c)
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 */

__int64 __fastcall PfCheckDeprioritizeImage(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rax
  bool v4; // zf
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    PfLockSharedAcquire((volatile signed __int64 *)&qword_140E670C0);
    if ( (_DWORD)qword_140E670B4 )
    {
      v6 = 0LL;
      v7 = (HIBYTE(v2)
          + 37
          * (BYTE6(v2)
           + 37
           * (BYTE5(v2)
            + 37
            * (BYTE4(v2) + 37
                         * (BYTE3(v2) + 37 * (BYTE2(v2) + 37 * (BYTE1(v2) + 37 * ((unsigned __int8)v2 + 11623883)))))))) & (unsigned int)(qword_140E670B4 - 1);
      v8 = *(_QWORD *)((v7 << dword_140E670B0) + qword_140E670A8);
      v4 = v8 == 0;
      if ( !v8 )
        goto LABEL_5;
      v9 = *(_QWORD *)((v7 << dword_140E670B0) + qword_140E670A8);
      do
      {
        v3 = v9;
        if ( v9 == (unsigned int)v2 )
          break;
        if ( !v6 )
        {
          v6 = 2654435761LL * (unsigned int)v2 + 1;
          if ( ((-79 * (_BYTE)v2) & 1) != 0 )
            v6 = 2654435761LL * (unsigned int)v2;
        }
        v7 = (unsigned int)(qword_140E670B4 - 1) & (v6 + v7);
        v3 = *(_QWORD *)((v7 << dword_140E670B0) + qword_140E670A8);
        v9 = v3;
      }
      while ( v3 );
    }
    else
    {
      v3 = 0LL;
    }
    v4 = v3 == 0;
LABEL_5:
    LOBYTE(v1) = !v4;
    PfLockSharedRelease((signed __int64 *)&qword_140E670C0);
    return v1;
  }
  return 0LL;
}
