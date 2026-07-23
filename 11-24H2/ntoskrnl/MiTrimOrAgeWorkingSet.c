/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x1402F35B0
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14020F2A0 (MiAgeWorkingSet.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     PfLogForegroundProcess @ 0x1402629EC (PfLogForegroundProcess.c)
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C9030 (MiEmptyWorkingSetInitiate.c)
 *     MiDetachFromWorkingSet @ 0x1403E1C30 (MiDetachFromWorkingSet.c)
 *     MiAttachWorkingSet @ 0x1404329F4 (MiAttachWorkingSet.c)
 *     MiAgeAweRegions @ 0x14043DAC0 (MiAgeAweRegions.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14044B1B4 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainOldAccessBuffers @ 0x14045F56C (MiDrainOldAccessBuffers.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140462890 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiComputeTrimAmount @ 0x140486CF0 (MiComputeTrimAmount.c)
 *     Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline @ 0x14067998C (Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v4; // edi
  unsigned int v8; // ebp
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  _QWORD *v15; // rdx
  __int64 v16; // r8
  char v17; // r14
  unsigned int v18; // r12d
  int v19; // eax
  unsigned int v20; // r15d
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // r15
  unsigned __int64 v23; // r12
  int v24; // r8d
  unsigned __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // r12
  char v28; // cl
  __int64 v29; // r9
  unsigned int v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 v32; // [rsp+40h] [rbp-48h]

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
  v32 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
  v10 = *(_QWORD *)(v32 + 17600);
  v31 = v10;
  MiAttachWorkingSet(a1);
  if ( (v4 & 4) != 0 )
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
  v14 = MiLockWorkingSetShared(a1, v11, v12, v13);
  v17 = v14;
  if ( (v4 & 0x300) != 0 )
  {
    LOBYTE(v16) = v14;
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 144), v16, 0, 2);
  }
  if ( (v4 & 0x80u) != 0 )
  {
    LOBYTE(v16) = v17;
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 144), v16, 0, 4);
  }
  v18 = *(unsigned __int16 *)(v10 + 274);
  v30 = v18;
  v19 = 0;
  v20 = 0;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      v20 = MiAgeWorkingSet(a1, v17, 1u, v18);
      v19 = 1;
      if ( v20 || !*(_BYTE *)(v10 + 55) )
        goto LABEL_40;
      if ( v18 - 1 <= 8 )
      {
        v20 = MiAgeWorkingSet(a1, v17, 2u, 0xAu);
        v19 = 1;
        goto LABEL_40;
      }
LABEL_63:
      v19 = 1;
      goto LABEL_40;
    }
    if ( (v4 & 0x20) != 0 )
    {
      LODWORD(v16) = 1;
    }
    else
    {
      if ( (v4 & 0x40) == 0 )
        goto LABEL_40;
      LODWORD(v16) = 2;
    }
LABEL_62:
    v20 = MiAgeWorkingSet(a1, v17, v16, v18);
    goto LABEL_63;
  }
  *(_BYTE *)(a2 + 1) = *((_BYTE *)&MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
  v21 = MiComputeTrimAmount(a2, a1);
  if ( v21 && *(_BYTE *)(a2 + 1) != 8 )
  {
    v22 = 8;
    do
    {
      --v22;
      v23 = v21;
      if ( *(_QWORD *)(a1 + 8LL * v22 + 40) <= v21 )
        v23 = *(_QWORD *)(a1 + 8LL * v22 + 40);
      if ( (unsigned int)Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v23 )
        {
          LOBYTE(v24) = v17;
          v25 = MiTrimWorkingSet(a1, v23, v24, v22, 17);
          *(_QWORD *)(a2 + 96) += v25;
          if ( v21 <= v25 )
            break;
          v21 -= v25;
        }
      }
      else
      {
        if ( v23 )
        {
          LOBYTE(v24) = v17;
          v21 = MiTrimWorkingSet(a1, v23, v24, v22, 17);
        }
        *(_QWORD *)(a2 + 96) += v21;
      }
    }
    while ( v22 != *(_BYTE *)(a2 + 1) );
    v18 = v30;
    v20 = 0;
  }
  v16 = 0LL;
  if ( ((*(_BYTE *)a2 & 0x7F) == 0 && *(char *)a2 >= 0 || (*(_BYTE *)a2 & 0x7F) == 4) && *(_WORD *)(v31 + 274) )
    v16 = 1LL;
  if ( ((*(_BYTE *)(a2 + 4) - 1) & 0xFD) == 0 )
    goto LABEL_62;
  v19 = 0;
LABEL_40:
  v26 = *(_DWORD *)(a1 + 184);
  v27 = 0LL;
  if ( !v20 )
  {
    if ( v19 )
    {
      v28 = 3;
      v15 = (_QWORD *)(a2 + 8);
      v29 = 8LL;
      if ( BYTE2(v26) != 2 )
        v28 = 1;
      v16 = a1 - a2;
      do
      {
        *v15 += *(_QWORD *)((char *)v15 + v16 + 32) >> v28;
        ++v15;
        --v29;
      }
      while ( v29 );
    }
    if ( (v4 & 0x10) != 0 || (v4 & 8) != 0 )
    {
      LOBYTE(v15) = v17;
      MiCaptureAndResetWorkingSetAccessBits(a1, v15, v4);
    }
    v27 = MEMORY[0xFFFFF78000000320];
    MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320], v16);
  }
  MiUnlockWorkingSetShared(a1, v17);
  if ( (v26 & 0xF) == 0 )
    MiAgeAweRegions();
  MiDetachFromWorkingSet(a1);
  if ( !v20 )
  {
    LOBYTE(v8) = (v4 & 0x18) != 0;
    MiCheckAndProcessCcAccessLog(v32, v27, v8);
  }
  return v20;
}
