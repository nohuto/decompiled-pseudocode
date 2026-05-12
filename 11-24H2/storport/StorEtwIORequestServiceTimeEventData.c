/*
 * XREFs of StorEtwIORequestServiceTimeEventData @ 0x14003F900
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer @ 0x1400A767C (McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall StorEtwIORequestServiceTimeEventData(_QWORD *a1, char a2, unsigned __int64 a3)
{
  char v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbp
  char v7; // si
  char v9; // r15
  LARGE_INTEGER v11; // rax
  unsigned int LowPart; // ecx
  LARGE_INTEGER v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 result; // rax
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // r8
  unsigned __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  char *v27; // r8
  char v28; // r15
  unsigned int v29; // r12d
  unsigned int v30; // r11d
  unsigned int *v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // r8
  int v35; // r10d
  char v36; // dl
  char v37; // r9
  union _LARGE_INTEGER v39; // [rsp+D8h] [rbp+20h] BYREF

  v39.QuadPart = 0LL;
  v3 = 0;
  v4 = a1[21];
  LOBYTE(v5) = 0;
  LOBYTE(v6) = 0;
  v7 = 0;
  v9 = a2;
  if ( UseQPCTime )
    v11 = KeQueryPerformanceCounter(&v39);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  LowPart = v39.LowPart;
  v13 = v11;
  if ( !v9 )
  {
    if ( v11.QuadPart <= 0 || (v14 = a1[87], v13.QuadPart >= v14) )
      v15 = v13.QuadPart - a1[87];
    else
      v15 = v13.QuadPart - v14 - 1;
    if ( UseQPCTime )
    {
      a3 = 0LL;
      if ( v39.QuadPart && v15 )
        a3 = 10000 * (1000 * (v15 % v39.QuadPart) % v39.QuadPart) / v39.QuadPart
           + 10000 * (1000 * (v15 / v39.QuadPart) + 1000 * (v15 % v39.QuadPart) / v39.QuadPart);
    }
    else
    {
      a3 = v15;
    }
  }
  result = StorRequestThresholdTime;
  if ( StorRequestThresholdTime && a3 < StorRequestThresholdTime )
    return result;
  v17 = a1[88];
  v18 = a1[87];
  if ( v17 >= v18 )
  {
    v19 = v17 - v18;
    if ( UseQPCTime )
    {
      if ( v39.QuadPart && v19 )
      {
        v20 = v19 / v39.QuadPart;
        v21 = 1000 * (v19 % v39.QuadPart);
        result = 10000 * (v21 % v39.QuadPart) / v39.QuadPart;
        v5 = result + 10000 * (1000 * v20 + v21 / v39.QuadPart);
      }
    }
    else
    {
      LOBYTE(v5) = v17 - v18;
    }
  }
  if ( v17 )
  {
    v22 = a1[89];
    if ( v22 >= v17 )
    {
      v23 = v22 - v17;
      goto LABEL_27;
    }
  }
  v24 = a1[89];
  if ( v24 >= v18 )
  {
    v23 = v24 - v18;
LABEL_27:
    if ( UseQPCTime )
    {
      if ( v39.QuadPart && v23 )
      {
        v25 = v23 / v39.QuadPart;
        v26 = 1000 * (v23 % v39.QuadPart);
        result = 10000 * (v26 % v39.QuadPart) / v39.QuadPart;
        v6 = result + 10000 * (1000 * v25 + v26 / v39.QuadPart);
      }
    }
    else
    {
      LOBYTE(v6) = v23;
    }
  }
  if ( *(_BYTE *)(v4 + 2) != 40 )
  {
    v3 = *(_BYTE *)(v4 + 72);
    v7 = *(_BYTE *)(v4 + 4);
    LOBYTE(LowPart) = *(_BYTE *)(v4 + 5);
    v36 = *(_BYTE *)(v4 + 6);
    v37 = *(_BYTE *)(v4 + 7);
    v35 = *(_DWORD *)(v4 + 16);
    goto LABEL_61;
  }
  v27 = 0LL;
  v28 = 0;
  if ( *(_DWORD *)(v4 + 20) )
    goto LABEL_59;
  v29 = *(_DWORD *)(v4 + 56);
  v30 = 0;
  if ( !v29 )
    goto LABEL_56;
  v31 = (unsigned int *)(v4 + 120);
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v4 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_50:
    ++v30;
    ++v31;
    if ( v30 >= v29 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v32 + v4) != 64 )
  {
    LowPart = *(_DWORD *)(v32 + v4) - 65;
    if ( *(_DWORD *)(v32 + v4) == 65 )
    {
      LowPart = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v28 = 1;
        if ( *(_BYTE *)(v32 + v4 + 10) )
          v27 = (char *)(v32 + v4 + 24);
        v7 = *(_BYTE *)(v32 + v4 + 8);
      }
    }
    else if ( *(_DWORD *)(v32 + v4) == 66 )
    {
      LowPart = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( !*(_DWORD *)(v32 + v4 + 12) )
          goto LABEL_55;
        v34 = v4 + 32;
        goto LABEL_54;
      }
    }
    goto LABEL_49;
  }
  LowPart = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_49:
    if ( v28 )
      goto LABEL_56;
    goto LABEL_50;
  }
  if ( !*(_BYTE *)(v32 + v4 + 10) )
    goto LABEL_55;
  v34 = v4 + 24;
LABEL_54:
  v27 = (char *)(v32 + v34);
LABEL_55:
  v7 = *(_BYTE *)(v32 + v4 + 8);
LABEL_56:
  if ( v27 )
    v3 = *v27;
  else
    v3 = 0;
LABEL_59:
  result = *(unsigned int *)(v4 + 52);
  v35 = *(_DWORD *)(v4 + 60);
  v9 = a2;
  LOBYTE(LowPart) = *(_BYTE *)(result + v4 + 8);
  v36 = *(_BYTE *)(result + v4 + 9);
  v37 = *(_BYTE *)(result + v4 + 10);
LABEL_61:
  if ( v9 )
  {
    if ( (byte_140171461 & 1) != 0 )
      return McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer(
               LowPart,
               (unsigned int)&EventIOPerformanceMeasurementTarget,
               (int)a1 + 728,
               a3,
               a1[20],
               v3,
               *(_BYTE *)(v4 + 3),
               a1[96],
               *(_BYTE *)(a1[27] + 56LL),
               LowPart,
               v36,
               v37,
               v7,
               v35,
               v5,
               v6);
  }
  else if ( (byte_140171461 & 1) != 0 )
  {
    return McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer(
             LowPart,
             (unsigned int)&EventIOPerformanceMeasurement,
             (int)a1 + 728,
             a3,
             a1[20],
             v3,
             *(_BYTE *)(v4 + 3),
             a1[96],
             *(_BYTE *)(a1[27] + 56LL),
             LowPart,
             v36,
             v37,
             v7,
             v35,
             v5,
             v6);
  }
  return result;
}
