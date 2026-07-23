/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x1407EC118
 * Callers:
 *     EtwpSetMark @ 0x1407AA0B4 (EtwpSetMark.c)
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfnWrapper @ 0x140311220 (MiIdentifyPfnWrapper.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     EtwTraceSiloDcEvent @ 0x14047AF60 (EtwTraceSiloDcEvent.c)
 *     MiReferencePagePartition @ 0x1406745D4 (MiReferencePagePartition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, __int16 a3, int a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rbx
  char v7; // r14
  unsigned int v8; // r13d
  unsigned int *v9; // rdx
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  int v12; // r15d
  unsigned __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  unsigned int v17; // r15d
  __int64 v20; // [rsp+38h] [rbp-51h] BYREF
  int v21; // [rsp+40h] [rbp-49h]
  unsigned int v22; // [rsp+44h] [rbp-45h]
  __int128 v23; // [rsp+48h] [rbp-41h] BYREF
  char *v24; // [rsp+58h] [rbp-31h]
  int v25; // [rsp+60h] [rbp-29h] BYREF
  int v26; // [rsp+64h] [rbp-25h]
  int v27; // [rsp+68h] [rbp-21h]
  __int64 v28; // [rsp+70h] [rbp-19h]
  __int128 v29; // [rsp+78h] [rbp-11h] BYREF
  __int64 v30; // [rsp+88h] [rbp-1h]
  unsigned int *v31; // [rsp+90h] [rbp+7h]
  __int128 v32; // [rsp+98h] [rbp+Fh] BYREF

  v22 = a2;
  v25 = 0;
  v4 = a2;
  v28 = a1;
  v5 = a1;
  v24 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v27 = a4;
  v20 = 0LL;
  v23 = 0LL;
  v7 = a4;
  v32 = 0LL;
  v29 = 0LL;
  v8 = 0;
  v31 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  v9 = v31;
  v21 = 0;
  if ( *v31 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)&v9[4 * v8 + 6];
      v11 = 48LL * *(_QWORD *)&v9[4 * v8 + 4] - 0x220000000000LL;
      if ( !v10 )
        goto LABEL_33;
      v12 = v7 & 1;
      v26 = v12;
      do
      {
        v13 = 1LL;
        if ( v12 )
        {
          if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 && (*(_BYTE *)(v11 + 34) & 7) != 6 )
            goto LABEL_30;
          v6 = v20;
        }
        v23 = 0LL;
        v24 = 0LL;
        v13 = MiIdentifyPfnWrapper(v11, &v23);
        if ( v13 > v10 )
          v13 = v10;
        if ( (v7 & 2) == 0 )
          goto LABEL_18;
        if ( !v6 )
          goto LABEL_14;
        v6 = v20;
        if ( *(_WORD *)v20 != ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FF) )
        {
          PsDereferencePartition(*(_QWORD *)(v20 + 184));
LABEL_14:
          MiReferencePagePartition(v11, 0, &v20);
          v6 = v20;
        }
        if ( !v6 || MiPfnsWorthTrying((__int16 *)v6, v11, 1LL, 0, &v25) )
        {
          v14 = v23;
          *(_QWORD *)&v23 = v23 | 0x1000000000000000LL;
          goto LABEL_19;
        }
LABEL_18:
        v14 = v23;
LABEL_19:
        if ( (!v12 || (v14 & 0x70) == 0x60) && v13 )
        {
          v15 = v28;
          v16 = v13;
          v17 = v22;
          do
          {
            *(_QWORD *)&v32 = &v23;
            *((_QWORD *)&v32 + 1) = 24LL;
            EtwTraceSiloDcEvent((__int64)&v32, 1u, v15, v17, a3, 0x501804u);
            ++*((_QWORD *)&v23 + 1);
            if ( (v23 & 0xF) == 2 )
            {
              v24 += 8;
            }
            else if ( v24 && v24 != MmBadPointer )
            {
              v24 += 4096;
            }
            --v16;
          }
          while ( v16 );
          v12 = v26;
          v7 = v27;
LABEL_30:
          v6 = v20;
        }
        v11 += 48 * v13;
        v10 -= v13;
      }
      while ( v10 );
      v8 = v21;
      v9 = v31;
LABEL_33:
      v21 = ++v8;
      if ( v8 >= *v9 )
      {
        v5 = v28;
        v4 = v22;
        break;
      }
    }
  }
  MiDereferencePageRuns((__int64)v9);
  if ( (v7 & 1) == 0 )
  {
    LODWORD(v29) = v29 & 0xFFFFFFE0;
    *((_QWORD *)&v29 + 1) = MmPfnDatabase;
    v30 = MxPfnAllocation;
    *(_QWORD *)&v32 = &v29;
    *((_QWORD *)&v32 + 1) = 24LL;
    EtwTraceSiloDcEvent((__int64)&v32, 1u, v5, v4, 635, 0x501804u);
  }
  if ( v6 )
    PsDereferencePartition(*(_QWORD *)(v6 + 184));
  return 0LL;
}
