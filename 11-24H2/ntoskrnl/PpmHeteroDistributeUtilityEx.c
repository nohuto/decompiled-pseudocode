/*
 * XREFs of PpmHeteroDistributeUtilityEx @ 0x1405DDDF4
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x1404E3F40 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeXorAffinityEx2 @ 0x1402B2C68 (KeXorAffinityEx2.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405D7014 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E0904 (PpmParkDistributeUtilityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char PpmHeteroDistributeUtilityEx()
{
  bool v0; // zf
  bool v1; // r12
  __int64 v2; // r9
  unsigned int v3; // r13d
  __int64 v4; // rsi
  unsigned int v5; // r8d
  __int64 v6; // r15
  _WORD *v7; // rdx
  unsigned int v8; // ecx
  struct _KAFFINITY_EX *v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rdi
  int v13; // r9d
  unsigned int v14; // r12d
  __int64 v15; // rdi
  int v16; // r9d
  unsigned int v17; // r15d
  __int64 v18; // rdi
  int v19; // r9d
  unsigned int v20; // ebx
  char v21; // di
  char v22; // r12
  __int64 *v23; // r13
  __int64 v24; // r15
  struct _KAFFINITY_EX *v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rcx
  char v29; // bl
  __int64 *v30; // r13
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  bool v35; // [rsp+38h] [rbp-D0h]
  unsigned int i; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v37; // [rsp+40h] [rbp-C8h]
  __int128 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  __int64 *v40; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  struct _KAFFINITY_EX v44; // [rsp+88h] [rbp-80h] BYREF
  __int64 v45; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v46[264]; // [rsp+1A0h] [rbp+98h] BYREF

  memset_0(v46, 0, 0x100uLL);
  v39 = 0LL;
  v38 = 0LL;
  memset_0(&v44.8, 0, sizeof(v44.8));
  v40 = PpmCurrentProfile[0];
  v41 = 488LL * dword_140F0B38C;
  v0 = BYTE3(PpmCurrentProfile[0][v41 / 8 + 22]) == 0;
  v45 = 2097153LL;
  v1 = !v0;
  v35 = !v0;
  memset_0(v46, 0, 0x100uLL);
  *(_QWORD *)&v44.Count = 2097153LL;
  memset_0(&v44.8, 0, sizeof(v44.8));
  v3 = 0;
  v37 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v4 = PpmParkNodes + 1296LL * v3;
      v42 = v4;
      if ( PpmHeteroPolicy == 4 )
        break;
      LOBYTE(v2) = v1;
      PpmParkDistributeUtilityEx(v4 + 48, v4 + 312, *(unsigned __int16 *)(v4 + 1180), v2, 0, 0LL);
LABEL_53:
      v37 = ++v3;
      if ( v3 >= PpmParkNumNodes )
        return 1;
    }
    v5 = 0;
    LODWORD(v6) = *(unsigned __int8 *)(v4 + 12);
    if ( (_BYTE)v6 )
    {
      v2 = *(unsigned __int8 *)(v4 + 12);
      v7 = (_WORD *)(*(_QWORD *)(v4 + 1288) + 10LL);
      do
      {
        v0 = *v7 == 0;
        v8 = v5 + 1;
        v7 += 320;
        if ( v0 )
          v8 = v5;
        v5 = v8;
        --v2;
      }
      while ( v2 );
      if ( v8 > 1 )
      {
        if ( !PpmHeteroParkBias )
        {
          v17 = 0;
          v9 = (struct _KAFFINITY_EX *)(v4 + 312);
          do
          {
            v18 = *(_QWORD *)(v4 + 1288) + 640LL * v17;
            KeAndAffinityEx2((struct _KAFFINITY_EX *)(v4 + 312), (struct _KAFFINITY_EX *)(v18 + 40), (__int64)&v45);
            LOBYTE(v19) = v1;
            PpmParkDistributeUtilityEx(v18 + 40, (unsigned int)&v45, *(unsigned __int16 *)(v18 + 632), v19, 0, 0LL);
            ++v17;
          }
          while ( v17 < *(unsigned __int8 *)(v4 + 12) );
          goto LABEL_23;
        }
        if ( PpmHeteroParkBias != 1 )
        {
          if ( PpmHeteroParkBias != 2 )
          {
            if ( PpmHeteroParkBias == 3 )
            {
              v9 = (struct _KAFFINITY_EX *)(v4 + 312);
              v10 = 0;
              i = 0;
              v11 = 0;
              while ( 1 )
              {
                v12 = *(_QWORD *)(v4 + 1288) + 640LL * v11;
                KeAndAffinityEx2((struct _KAFFINITY_EX *)(v4 + 312), (struct _KAFFINITY_EX *)(v12 + 40), (__int64)&v45);
                LOBYTE(v13) = v35;
                PpmParkDistributeUtilityEx(
                  v12 + 40,
                  (unsigned int)&v45,
                  *(unsigned __int16 *)(v12 + 632),
                  v13,
                  v10,
                  (__int64)&i);
                if ( ++v11 >= *(unsigned __int8 *)(v4 + 12) )
                  break;
                v10 = i;
              }
              v3 = v37;
              goto LABEL_25;
            }
            goto LABEL_24;
          }
          v9 = (struct _KAFFINITY_EX *)(v4 + 312);
          v14 = 0;
          for ( i = 0; ; v14 = i )
          {
            v6 = (unsigned int)(v6 - 1);
            v15 = *(_QWORD *)(v4 + 1288) + 640 * v6;
            KeAndAffinityEx2((struct _KAFFINITY_EX *)(v4 + 312), (struct _KAFFINITY_EX *)(v15 + 40), (__int64)&v45);
            LOBYTE(v16) = v35;
            PpmParkDistributeUtilityEx(
              v15 + 40,
              (unsigned int)&v45,
              *(unsigned __int16 *)(v15 + 632),
              v16,
              v14,
              (__int64)&i);
            if ( !(_DWORD)v6 )
              break;
          }
LABEL_23:
          v3 = v37;
LABEL_25:
          v20 = 1;
          v21 = 0;
          v22 = 0;
          if ( *(_BYTE *)(v4 + 12) > 1u )
          {
            v23 = v40;
            do
            {
              v24 = 640LL * v20;
              v25 = (struct _KAFFINITY_EX *)(v24 + *(_QWORD *)(v4 + 1288) + 40LL);
              v43 = v24;
              if ( (unsigned int)KiSubtractAffinityEx(v25, v9, &v44, v44.Size) )
              {
                v21 = 0;
                v22 = 1;
                KeAndAffinityEx2(&v44, (struct _KAFFINITY_EX *)(v4 + 576), (__int64)&v44);
                i = 0;
                LOWORD(v39) = 0;
                *((_QWORD *)&v38 + 1) = v44.Bitmap[0];
                *(_QWORD *)&v38 = &v44;
                if ( !(unsigned int)KeEnumerateNextProcessor(&i, (unsigned __int16 **)&v38) )
                {
                  v26 = v41;
                  do
                  {
                    v27 = *(_QWORD *)(KeGetPrcb(i) + 35264);
                    if ( v27 )
                    {
                      v21 = *((_BYTE *)v23 + v26 + 476);
                      *(_BYTE *)(v27 + 239) = v21;
                    }
                  }
                  while ( !(unsigned int)KeEnumerateNextProcessor(&i, (unsigned __int16 **)&v38) );
                  v4 = v42;
                  v24 = v43;
                }
                KeXorAffinityEx2(&v44, (struct _KAFFINITY_EX *)(v24 + 40 + *(_QWORD *)(v4 + 1288)), &v44);
                *((_QWORD *)&v38 + 1) = v44.Bitmap[0];
                *(_QWORD *)&v38 = &v44;
                LOWORD(v39) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(&i, (unsigned __int16 **)&v38) )
                {
                  v28 = *(_QWORD *)(KeGetPrcb(i) + 35264);
                  if ( v28 )
                    *(_BYTE *)(v28 + 239) = 0;
                }
              }
              ++v20;
            }
            while ( v20 < *(unsigned __int8 *)(v4 + 12) );
            v3 = v37;
            if ( v22 )
            {
              v29 = 0;
              if ( !PpmPerfQosEnabled )
              {
                KiSubtractAffinityEx((struct _KAFFINITY_EX *)(*(_QWORD *)(v4 + 1288) + 40LL), v9, &v44, v44.Size);
                *((_QWORD *)&v38 + 1) = v44.Bitmap[0];
                i = 0;
                *(_QWORD *)&v38 = &v44;
                LOWORD(v39) = 0;
                if ( !(unsigned int)KeEnumerateNextProcessor(&i, (unsigned __int16 **)&v38) )
                {
                  v30 = v40;
                  v31 = v41;
                  do
                  {
                    v32 = *(_QWORD *)(KeGetPrcb(i) + 35264);
                    if ( v32 )
                    {
                      v29 = *((_BYTE *)v30 + v31 + 475);
                      *(_BYTE *)(v32 + 238) = v29;
                    }
                  }
                  while ( !(unsigned int)KeEnumerateNextProcessor(&i, (unsigned __int16 **)&v38) );
                  v4 = v42;
                  v3 = v37;
                }
                KeXorAffinityEx2(&v44, (struct _KAFFINITY_EX *)(*(_QWORD *)(v4 + 1288) + 40LL), &v44);
                *((_QWORD *)&v38 + 1) = v44.Bitmap[0];
                *(_QWORD *)&v38 = &v44;
                LOWORD(v39) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(&i, (unsigned __int16 **)&v38) )
                {
                  v33 = *(_QWORD *)(KeGetPrcb(i) + 35264);
                  if ( v33 )
                    *(_BYTE *)(v33 + 238) = 0;
                }
              }
              PpmEventTraceHeteroDistributeUtility(v4, v29, v21);
            }
          }
          v1 = v35;
          goto LABEL_53;
        }
      }
    }
LABEL_24:
    v9 = (struct _KAFFINITY_EX *)(v4 + 312);
    LOBYTE(v2) = v1;
    PpmParkDistributeUtilityEx(v4 + 48, v4 + 312, *(unsigned __int16 *)(v4 + 1180), v2, 0, 0LL);
    goto LABEL_25;
  }
  return 1;
}
