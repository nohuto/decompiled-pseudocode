/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1409DCA6C
 * Callers:
 *     MiDeprioritizeVad @ 0x1403DAB20 (MiDeprioritizeVad.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafeByProcess @ 0x140418850 (PfpPartitionReferenceParentSafeByProcess.c)
 *     PfLockSharedTryAcquire @ 0x140470440 (PfLockSharedTryAcquire.c)
 *     PfpRpLogDeprioEvent @ 0x14047D954 (PfpRpLogDeprioEvent.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(__int64 a1, int a2, __int64 a3, int a4)
{
  unsigned int v4; // esi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v13; // r11
  __int64 v14; // r10
  unsigned __int64 v15; // rdx
  __int64 i; // r8
  __int64 v17; // rcx
  int v18[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h]

  *(_QWORD *)v18 = 0LL;
  v4 = 0;
  if ( a3 && (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140E67078) )
  {
    v9 = qword_140E67058;
    if ( a3 == *(_QWORD *)(qword_140E67058 + 8) )
    {
LABEL_4:
      v10 = *(_QWORD *)(v9 + 16);
      PfLockSharedRelease((signed __int64 *)&qword_140E67078);
      if ( qword_140E67098 != v10 )
      {
        if ( !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140E670A0) )
          return v4;
        if ( (_DWORD)qword_140E6708C )
        {
          v15 = (HIBYTE(v10)
               + 37
               * (BYTE6(v10)
                + 37
                * (BYTE5(v10)
                 + 37
                 * (BYTE4(v10)
                  + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))) & (unsigned int)(qword_140E6708C - 1);
          for ( i = 0LL; ; v15 = (unsigned int)(qword_140E6708C - 1) & (i + v15) )
          {
            v17 = *(_QWORD *)((v15 << dword_140E67088) + qword_140E67080);
            if ( !v17 )
              break;
            if ( v17 == v10 )
            {
              qword_140E67098 = v10;
              goto LABEL_8;
            }
            if ( !i )
            {
              i = 2654435761LL * v10 + 1;
              if ( ((-79 * (_BYTE)v10) & 1) != 0 )
                i = 2654435761LL * v10;
            }
          }
        }
        v4 = 1;
        qword_140E670D8 = MEMORY[0xFFFFF78000000320];
LABEL_8:
        PfLockSharedRelease((signed __int64 *)&qword_140E670A0);
      }
      v11 = PfpPartitionReferenceParentSafeByProcess(v18, a1);
      PfpRpLogDeprioEvent(*(__int64 *)v18, a3, a2, v4 != 0 ? a4 : 0);
      if ( v11 )
        PfpPartitionDereferenceParent(v11);
    }
    else
    {
      v13 = -1LL << (dword_140E6704C & 0x1F);
      v14 = a3 & v13;
      if ( (unsigned int)dword_140E6704C >> 5 )
      {
        v19 = a3 & v13;
        v9 = qword_140E67050
           + 8LL
           * ((37
             * (BYTE6(v19)
              + 37
              * (BYTE5(v19)
               + 37
               * (BYTE4(v19)
                + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v14 + 11623883)))))))
             + HIBYTE(v19)) & (((unsigned int)dword_140E6704C >> 5) - 1));
        while ( 1 )
        {
          v9 = *(_QWORD *)v9;
          if ( (v9 & 1) != 0 )
            break;
          if ( v14 == (v13 & *(_QWORD *)(v9 + 8)) )
          {
            if ( !v9 )
              break;
            qword_140E67058 = v9;
            goto LABEL_4;
          }
        }
      }
      PfLockSharedRelease((signed __int64 *)&qword_140E67078);
    }
  }
  return v4;
}
