/*
 * XREFs of StorEtwLogoRequestServiceTimeEventData @ 0x14003F518
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer @ 0x1400A753C (McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall StorEtwLogoRequestServiceTimeEventData(_QWORD *a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  int v6; // esi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // r11
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned int v24; // r15d
  char v25; // r11
  unsigned int v26; // r10d
  unsigned int *v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  char v30; // dl
  char v31; // r10
  void *v32; // rdx
  __int64 v33; // r9
  char v34; // [rsp+28h] [rbp-A0h]
  char v35; // [rsp+30h] [rbp-98h]
  char v36; // [rsp+38h] [rbp-90h]
  int v37; // [rsp+40h] [rbp-88h]
  __int64 v38; // [rsp+48h] [rbp-80h]
  char v39; // [rsp+50h] [rbp-78h]
  __int64 v40; // [rsp+58h] [rbp-70h]
  __int64 v41; // [rsp+60h] [rbp-68h]
  char v42; // [rsp+68h] [rbp-60h]
  char v43; // [rsp+70h] [rbp-58h]
  __int64 v44; // [rsp+78h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  int v46; // [rsp+D0h] [rbp+8h]
  union _LARGE_INTEGER v49; // [rsp+E8h] [rbp+20h] BYREF

  result = (__int64)&retaddr;
  v4 = a1[21];
  LOBYTE(v5) = 0;
  v49.QuadPart = 0LL;
  v6 = 0;
  LOBYTE(v7) = 0;
  v46 = 0;
  LOBYTE(v8) = 0;
  v9 = 0LL;
  v10 = a1;
  if ( !a2 )
  {
    if ( UseQPCTime )
      result = KeQueryPerformanceCounter(&v49).QuadPart;
    else
      result = KeQueryUnbiasedInterruptTime();
    v11 = v10[87];
    if ( result <= 0 || result >= v11 )
      v12 = result - v11;
    else
      v12 = result - v11 - 1;
    LODWORD(a1) = v49.LowPart;
    if ( UseQPCTime )
    {
      if ( v49.QuadPart && v12 )
      {
        v13 = v12 / v49.QuadPart;
        v14 = 1000 * (v12 % v49.QuadPart);
        result = 10000 * (v14 % v49.QuadPart) / v49.QuadPart;
        v7 = result + 10000 * (1000 * v13 + v14 / v49.QuadPart);
      }
    }
    else
    {
      LOBYTE(v7) = v12;
    }
    v15 = v10[88];
    if ( v15 >= v11 )
    {
      v16 = v15 - v11;
      if ( UseQPCTime )
      {
        if ( v49.QuadPart && v16 )
        {
          v17 = v16 / v49.QuadPart;
          v18 = 1000 * (v16 % v49.QuadPart);
          result = 10000 * (v18 % v49.QuadPart) / v49.QuadPart;
          v8 = result + 10000 * (1000 * v17 + v18 / v49.QuadPart);
        }
      }
      else
      {
        LOBYTE(v8) = v15 - v11;
      }
    }
    if ( v15 && (v19 = v10[89], v19 >= v15) )
    {
      v20 = v19 - v15;
    }
    else
    {
      v21 = v10[89];
      if ( v21 < v11 )
        goto LABEL_30;
      v20 = v21 - v11;
    }
    if ( UseQPCTime )
    {
      if ( v49.QuadPart && v20 )
      {
        v22 = v20 / v49.QuadPart;
        v23 = 1000 * (v20 % v49.QuadPart);
        result = 10000 * (v23 % v49.QuadPart) / v49.QuadPart;
        v5 = result + 10000 * (1000 * v22 + v23 / v49.QuadPart);
      }
    }
    else
    {
      LOBYTE(v5) = v20;
    }
  }
LABEL_30:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v4 + 20) )
    {
      v24 = *(_DWORD *)(v4 + 56);
      v25 = 0;
      v26 = 0;
      if ( v24 )
      {
        v27 = (unsigned int *)(v4 + 120);
        do
        {
          v28 = *v27;
          if ( (unsigned int)v28 >= 0x80 )
          {
            v29 = *(unsigned int *)(v4 + 16);
            if ( (unsigned int)v28 < (unsigned int)v29 )
            {
              if ( *(_DWORD *)(v28 + v4) == 64 )
              {
                LODWORD(a1) = v28 + 40;
                if ( v28 + 40 <= v29 )
                {
                  LOBYTE(v46) = *(_BYTE *)(v28 + v4 + 10);
                  if ( (_BYTE)v46 )
                    v9 = (unsigned int)v28 + v4 + 24;
LABEL_51:
                  v6 = v46;
                  break;
                }
              }
              else
              {
                LODWORD(a1) = *(_DWORD *)(v28 + v4) - 65;
                if ( *(_DWORD *)(v28 + v4) == 65 )
                {
                  LODWORD(a1) = v28 + 56;
                  if ( v28 + 56 <= v29 )
                  {
                    v25 = 1;
                    LOBYTE(v46) = *(_BYTE *)(v28 + v4 + 10);
                    if ( !(_BYTE)v46 )
                      goto LABEL_51;
                    v6 = v46;
                    v9 = (unsigned int)v28 + v4 + 24;
                  }
                }
                else if ( *(_DWORD *)(v28 + v4) == 66 )
                {
                  LODWORD(a1) = v28 + 40;
                  if ( v28 + 40 <= v29 )
                  {
                    v6 = *(_DWORD *)(v28 + v4 + 12);
                    if ( v6 )
                      v9 = v28 + v4 + 32;
                    break;
                  }
                }
              }
              if ( v25 )
                break;
            }
          }
          ++v26;
          ++v27;
        }
        while ( v26 < v24 );
      }
    }
    result = *(unsigned int *)(v4 + 52);
    LOBYTE(a1) = *(_BYTE *)(result + v4 + 8);
    v30 = *(_BYTE *)(result + v4 + 9);
    v31 = *(_BYTE *)(result + v4 + 10);
  }
  else
  {
    LOBYTE(a1) = *(_BYTE *)(v4 + 5);
    v9 = v4 + 72;
    v30 = *(_BYTE *)(v4 + 6);
    v6 = 16;
    v31 = *(_BYTE *)(v4 + 7);
  }
  if ( a2 )
  {
    if ( (byte_140171463 & 2) == 0 )
      return result;
    LOBYTE(v44) = 0;
    v43 = 0;
    v42 = 0;
    v41 = v10[96];
    v40 = v10[20];
    v39 = *(_BYTE *)(v4 + 3);
    v38 = v9;
    v37 = v6;
    v36 = a3;
    v35 = v31;
    v34 = v30;
    v32 = &EventLogoPerformanceMeasurementTarget;
  }
  else
  {
    if ( (byte_140171463 & 2) == 0 )
      return result;
    v44 = v10[90];
    v43 = v5;
    v42 = v8;
    v41 = v10[96];
    v40 = v10[20];
    v39 = *(_BYTE *)(v4 + 3);
    v38 = v9;
    v37 = v6;
    v36 = v7;
    v35 = v31;
    v34 = v30;
    v32 = &EventLogoPerformanceMeasurement;
  }
  v33 = v10[27];
  LOBYTE(v33) = *(_BYTE *)(v33 + 56);
  return McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer(
           (_DWORD)a1,
           (_DWORD)v32,
           (int)v10 + 728,
           v33,
           (char)a1,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44);
}
