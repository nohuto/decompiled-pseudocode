/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1408B5CCC
 * Callers:
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     CcUnmapVacb @ 0x1408B5FF0 (CcUnmapVacb.c)
 * Callees:
 *     PfLockSharedRelease @ 0x1402054C4 (PfLockSharedRelease.c)
 *     PfpPartitionDereferenceParent @ 0x140301524 (PfpPartitionDereferenceParent.c)
 *     PfLockSharedTryAcquire @ 0x1403F5A50 (PfLockSharedTryAcquire.c)
 *     PfpPartitionReferenceParentSafeByProcess @ 0x14042C930 (PfpPartitionReferenceParentSafeByProcess.c)
 *     PfpRpLogDeprioEvent @ 0x14048193C (PfpRpLogDeprioEvent.c)
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
  if ( a3 && (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140E66C68) )
  {
    v9 = qword_140E66C48;
    if ( a3 == *(_QWORD *)(qword_140E66C48 + 8) )
    {
LABEL_4:
      v10 = *(_QWORD *)(v9 + 16);
      PfLockSharedRelease((volatile signed __int64 *)&qword_140E66C68);
      if ( qword_140E66C88 != v10 )
      {
        if ( !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140E66C90) )
          return v4;
        if ( (_DWORD)qword_140E66C7C )
        {
          v15 = (HIBYTE(v10)
               + 37
               * (BYTE6(v10)
                + 37
                * (BYTE5(v10)
                 + 37
                 * (BYTE4(v10)
                  + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))) & (unsigned int)(qword_140E66C7C - 1);
          for ( i = 0LL; ; v15 = (unsigned int)(qword_140E66C7C - 1) & (i + v15) )
          {
            v17 = *(_QWORD *)((v15 << dword_140E66C78) + qword_140E66C70);
            if ( !v17 )
              break;
            if ( v17 == v10 )
            {
              qword_140E66C88 = v10;
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
        qword_140E66CC8 = MEMORY[0xFFFFF78000000320];
LABEL_8:
        PfLockSharedRelease((volatile signed __int64 *)&qword_140E66C90);
      }
      v11 = PfpPartitionReferenceParentSafeByProcess(v18, a1);
      PfpRpLogDeprioEvent(*(__int64 *)v18, a3, a2, v4 != 0 ? a4 : 0);
      if ( v11 )
        PfpPartitionDereferenceParent(v11);
    }
    else
    {
      v13 = -1LL << (dword_140E66C3C & 0x1F);
      v14 = a3 & v13;
      if ( (unsigned int)dword_140E66C3C >> 5 )
      {
        v19 = a3 & v13;
        v9 = qword_140E66C40
           + 8LL
           * ((37
             * (BYTE6(v19)
              + 37
              * (BYTE5(v19)
               + 37
               * (BYTE4(v19)
                + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v14 + 11623883)))))))
             + HIBYTE(v19)) & (((unsigned int)dword_140E66C3C >> 5) - 1));
        while ( 1 )
        {
          v9 = *(_QWORD *)v9;
          if ( (v9 & 1) != 0 )
            break;
          if ( v14 == (v13 & *(_QWORD *)(v9 + 8)) )
          {
            if ( !v9 )
              break;
            qword_140E66C48 = v9;
            goto LABEL_4;
          }
        }
      }
      PfLockSharedRelease((volatile signed __int64 *)&qword_140E66C68);
    }
  }
  return v4;
}
