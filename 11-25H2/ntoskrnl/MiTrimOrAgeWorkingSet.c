/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x1403C2D90
 * Callers:
 *     MiProcessWorkingSets @ 0x1403C24F0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiAgeWorkingSet @ 0x140246F90 (MiAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     PfLogForegroundProcess @ 0x1403BE89C (PfLogForegroundProcess.c)
 *     MiAttachWorkingSet @ 0x1403C313C (MiAttachWorkingSet.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     MiAgeAweRegions @ 0x1403C3618 (MiAgeAweRegions.c)
 *     MiDrainOldAccessBuffers @ 0x1403C37E8 (MiDrainOldAccessBuffers.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403C38AC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C39B0 (MiCheckAndProcessCcAccessLog.c)
 *     MiComputeTrimAmount @ 0x1403C3F80 (MiComputeTrimAmount.c)
 *     MiTrimWorkingSet @ 0x1403C4734 (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403D9338 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v4; // edi
  unsigned int v8; // ebp
  __int64 v9; // r12
  char v10; // al
  _QWORD *v11; // rdx
  int v12; // r8d
  char v13; // r15
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // ebx
  __int64 v18; // r12
  char v19; // cl
  __int64 v20; // r9
  unsigned int v22; // r8d
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // r12
  unsigned __int64 v25; // r8
  __int64 v26; // [rsp+70h] [rbp+8h]
  __int64 v27; // [rsp+88h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 184);
  v4 = a3;
  if ( BYTE2(v3) == 2 && (v3 & 0xF) == 0 )
    PfLogForegroundProcess(a1);
  v8 = 0;
  if ( (v4 & 0x300) != 0 )
  {
    if ( (v3 & 0xF) != 0 )
    {
      v4 &= 0xFFFFFCFF;
    }
    else
    {
      v4 &= ~0x100u;
      if ( *(_QWORD *)(a1 - 384) )
        v4 = a3;
    }
    if ( !v4 )
      return 0LL;
  }
  v27 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174));
  v9 = *(_QWORD *)(v27 + 17600);
  v26 = v9;
  MiAttachWorkingSet(a1);
  if ( (v4 & 4) != 0 )
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
  v10 = MiLockWorkingSetShared(a1);
  v13 = v10;
  if ( (v4 & 0x300) != 0 )
  {
    LOBYTE(v12) = v10;
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 144), v12, 0, 2);
  }
  if ( (v4 & 0x80u) != 0 )
  {
    LOBYTE(v12) = v13;
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 144), v12, 0, 4);
  }
  v14 = *(unsigned __int16 *)(v9 + 274);
  v15 = 0;
  v16 = 0;
  if ( (v4 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 1) = *((_BYTE *)&MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
    v23 = MiComputeTrimAmount(a2, a1);
    if ( v23 )
    {
      v24 = 8;
      if ( *(_BYTE *)(a2 + 1) != 8 )
      {
        do
        {
          --v24;
          v11 = (_QWORD *)v23;
          v25 = *(_QWORD *)(a1 + 8LL * v24 + 40);
          if ( v25 <= v23 )
            v11 = *(_QWORD **)(a1 + 8LL * v24 + 40);
          if ( v11 )
          {
            LOBYTE(v25) = v13;
            v23 = MiTrimWorkingSet(a1, (_DWORD)v11, v25, v24, 17);
          }
          *(_QWORD *)(a2 + 96) += v23;
        }
        while ( v24 != *(_BYTE *)(a2 + 1) );
      }
      v9 = v26;
    }
    v22 = 0;
    if ( ((*(_BYTE *)a2 & 0x7F) == 0 && *(char *)a2 >= 0 || (*(_BYTE *)a2 & 0x7F) == 4) && *(_WORD *)(v9 + 274) )
      v22 = 1;
    if ( ((*(_BYTE *)(a2 + 4) - 1) & 0xFD) != 0 )
    {
      v15 = 0;
      goto LABEL_12;
    }
LABEL_37:
    v16 = MiAgeWorkingSet(a1, v13, v22, v14);
LABEL_38:
    v15 = 1;
    goto LABEL_12;
  }
  if ( (v4 & 2) == 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v22 = 1;
    }
    else
    {
      if ( (v4 & 0x40) == 0 )
        goto LABEL_12;
      v22 = 2;
    }
    goto LABEL_37;
  }
  v16 = MiAgeWorkingSet(a1, v13, 1u, v14);
  v15 = 1;
  if ( v16 || !*(_BYTE *)(v9 + 55) )
    goto LABEL_12;
  if ( v14 - 1 > 8 )
    goto LABEL_38;
  v16 = MiAgeWorkingSet(a1, v13, 2u, 0xAu);
  v15 = 1;
LABEL_12:
  v17 = *(_DWORD *)(a1 + 184);
  v18 = 0LL;
  if ( !v16 )
  {
    if ( v15 )
    {
      v19 = 3;
      v11 = (_QWORD *)(a2 + 8);
      v20 = 8LL;
      if ( BYTE2(v17) != 2 )
        v19 = 1;
      do
      {
        *v11 += *(_QWORD *)((char *)v11 + a1 - a2 + 32) >> v19;
        ++v11;
        --v20;
      }
      while ( v20 );
    }
    if ( (v4 & 0x10) != 0 || (v4 & 8) != 0 )
    {
      LOBYTE(v11) = v13;
      MiCaptureAndResetWorkingSetAccessBits(a1, v11, v4);
    }
    v18 = MEMORY[0xFFFFF78000000320];
    MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320]);
  }
  MiUnlockWorkingSetShared(a1, v13);
  if ( (v17 & 0xF) == 0 )
    MiAgeAweRegions();
  MiDetachFromWorkingSet(a1);
  if ( !v16 )
  {
    LOBYTE(v8) = (v4 & 0x18) != 0;
    MiCheckAndProcessCcAccessLog(v27, v18, v8);
  }
  return v16;
}
