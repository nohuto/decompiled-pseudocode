/*
 * XREFs of ?ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14027A4F0
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140236B90 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     ?StrugglingInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z @ 0x14027A780 (-StrugglingInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14027F2D4 (Feature_YieldInputQueue2__private_GetVariant.c)
 */

char __fastcall ShouldYieldInputQueue(struct tagTHREADINFO *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // bp
  __int64 *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  int Variant; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rcx
  int v14; // eax
  int v15; // edx

  v4 = *((_QWORD *)a1 + 59);
  v5 = 0;
  if ( (*(_DWORD *)(v4 + 436) & 0x1000) != 0 )
  {
    v6 = *(__int64 **)(v4 + 24);
    LOBYTE(a2) = 0;
    if ( v6 )
    {
      while ( (*((_DWORD *)v6 + 25) & 0x10000000) == 0 )
      {
        v7 = *((_DWORD *)v6 + 6);
        if ( v7 == 512 )
        {
          v8 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 544LL);
          v9 = (v8 & 1) == 0;
        }
        else
        {
          if ( v7 != 255 )
            goto LABEL_27;
          v8 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 544LL);
          v9 = (v8 & 2) == 0;
        }
        if ( v9 )
        {
LABEL_27:
          v5 = 0;
          *(_DWORD *)(*((_QWORD *)a1 + 59) + 436LL) &= ~0x1000u;
          return v5;
        }
        if ( !(_BYTE)a2 )
        {
          Variant = Feature_YieldInputQueue2__private_GetVariant(v8, a2, a3, 0LL);
          v11 = *((_QWORD *)a1 + 59);
          if ( Variant == 2 )
          {
            a2 = *(unsigned int *)(v11 + 436);
            a3 = 436LL;
            if ( (*(_DWORD *)(v11 + 436) & 0x2000) != 0 )
              v5 = 1;
            LODWORD(a2) = a2 | 0x2000;
            if ( (*(_DWORD *)(v11 + 436) & 0x2000) != 0 )
              a2 = *(_DWORD *)(v11 + 436) & 0xFFFFEFFF;
            *(_DWORD *)(v11 + 436) = a2;
          }
          else
          {
            if ( !*(_WORD *)(v11 + 548) )
              *(LARGE_INTEGER *)(*((_QWORD *)a1 + 59) + 552LL) = KeQueryPerformanceCounter(0LL);
            ++*(_WORD *)(*((_QWORD *)a1 + 59) + 548LL);
            InputTraceLogging::Mouse::StrugglingInputQueue(*((const struct tagQ **)a1 + 59));
          }
          LOBYTE(a2) = 1;
        }
        if ( !v5 )
        {
          *((_DWORD *)v6 + 25) |= 0x10000000u;
          if ( *((_DWORD *)v6 + 6) == 512 )
            *(_DWORD *)(*((_QWORD *)a1 + 59) + 544LL) |= 1u;
          if ( *((_DWORD *)v6 + 6) == 255 )
            *(_DWORD *)(*((_QWORD *)a1 + 59) + 544LL) |= 2u;
        }
        v6 = (__int64 *)*v6;
        if ( !v6 )
          return v5;
      }
      return 0;
    }
  }
  else
  {
    v12 = *((_QWORD *)a1 + 170);
    if ( (v12 & 0x2000) == 0 && (v12 & 0x2000000000LL) == 0 )
    {
      *(_DWORD *)(v4 + 544) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 59) + 436LL) &= ~0x2000u;
      *(_WORD *)(*((_QWORD *)a1 + 59) + 548LL) = 0;
      *(_WORD *)(*((_QWORD *)a1 + 59) + 550LL) = 0;
      *(_QWORD *)(*((_QWORD *)a1 + 59) + 552LL) = 0LL;
      v13 = *(__int64 **)(v4 + 24);
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = *((_DWORD *)v13 + 25);
          if ( (v14 & 0x10000000) != 0 )
            break;
          v15 = *((_DWORD *)v13 + 6);
          if ( v15 != 512 && v15 != 255 )
            break;
          *((_DWORD *)v13 + 25) = v14 | 0x10000000;
          if ( v15 == 512 )
            *(_DWORD *)(*((_QWORD *)a1 + 59) + 544LL) |= 1u;
          if ( *((_DWORD *)v13 + 6) == 255 )
            *(_DWORD *)(*((_QWORD *)a1 + 59) + 544LL) |= 2u;
          v13 = (__int64 *)*v13;
          if ( !v13 )
          {
            *(_DWORD *)(*((_QWORD *)a1 + 59) + 436LL) |= 0x1000u;
            return v5;
          }
        }
      }
    }
  }
  return v5;
}
