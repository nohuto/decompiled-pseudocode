/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14000A528
 * Callers:
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140008B50 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14000A454 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14004E920 (NtFlipObjectConsumerPostMessage.c)
 * Callees:
 *     ??0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x14004E5F0 (--0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipConsumerMessage>(
        unsigned int a1,
        void *Src,
        char a3,
        CFlipConsumerMessage **a4)
{
  signed int v6; // ebx
  unsigned int v7; // r12d
  char *v8; // r14
  char *Pool2; // rsi
  unsigned int v10; // edi
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int i; // r8d
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  char *v20; // r12
  unsigned int j; // r15d
  char *v22; // rbx
  void *v23; // rdx
  size_t v24; // r8
  __int64 v25; // rcx
  CFlipConsumerMessage *v26; // rax
  CFlipConsumerMessage *v27; // rcx
  char v29; // [rsp+B0h] [rbp+18h]

  v29 = a3;
  v6 = 0;
  if ( !a1 )
    return (unsigned int)v6;
  v7 = 0;
  v8 = 0LL;
  Pool2 = 0LL;
  v10 = 0;
  v11 = 0xFFFFFFFFLL;
  if ( !Src )
  {
    v6 = -1073741811;
    goto LABEL_15;
  }
  v12 = 32LL * a1;
  v13 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v13 = v12;
  v6 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 <= 0xFFFFFFFF )
  {
    Pool2 = (char *)ExAllocatePool2(257LL, v13, 1768964934LL, 0xFFFFFFFFLL);
    if ( !Pool2 )
      v6 = -1073741801;
    v11 = 0xFFFFFFFFLL;
    a3 = v29;
  }
  if ( v6 >= 0 )
  {
    if ( a3 )
    {
      RtlCopyFromUser(Pool2, Src, v13);
      v7 = 0;
      v11 = 0xFFFFFFFFLL;
      goto LABEL_15;
    }
    memmove(Pool2, Src, v13);
    v11 = 0xFFFFFFFFLL;
  }
  v7 = 0;
LABEL_15:
  for ( i = 0; v6 >= 0 && i < a1; ++i )
  {
    v15 = 32LL * i;
    v16 = *(_DWORD *)&Pool2[v15 + 16];
    if ( v16 && *(_QWORD *)&Pool2[v15 + 24] )
    {
      v17 = v7;
      v18 = v7 + v16;
      v19 = -1;
      if ( v18 >= v7 )
        v19 = v18;
      v7 = v19;
      v6 = v18 < v17 ? 0xC0000095 : 0;
    }
    else
    {
      v6 = -1073741811;
    }
  }
  if ( v6 >= 0 )
  {
    v8 = (char *)ExAllocatePool2(257LL, v7, 1651524422LL, 0xFFFFFFFFLL);
    if ( !v8 )
      v6 = -1073741801;
    if ( v6 >= 0 )
    {
      v20 = v8;
      for ( j = 0; v6 >= 0 && j < a1; ++j )
      {
        v22 = &Pool2[32 * j];
        v23 = (void *)*((_QWORD *)v22 + 3);
        v24 = *((unsigned int *)v22 + 4);
        if ( v29 )
          RtlCopyFromUser(v20, v23, v24);
        else
          memmove(v20, v23, v24);
        *((_QWORD *)v22 + 3) = v20;
        v25 = *((unsigned int *)v22 + 4);
        v20 += v25;
        if ( v10 + 16 < v10 )
        {
          v10 = -1;
          v6 = -1073741675;
        }
        else
        {
          v10 += 16;
          v6 = 0;
        }
        if ( v6 >= 0 )
        {
          if ( v10 + 4 < v10 )
          {
            v10 = -1;
            v6 = -1073741675;
          }
          else
          {
            v10 += 4;
            v6 = 0;
          }
          if ( v6 >= 0 )
          {
            if ( (unsigned int)v25 + v10 < v10 )
            {
              v10 = -1;
              v6 = -1073741675;
            }
            else
            {
              v10 += v25;
              v6 = 0;
            }
          }
        }
      }
    }
  }
  if ( v6 >= 0 )
  {
    v26 = (CFlipConsumerMessage *)ExAllocatePool2(257LL, 64LL, 1835221830LL, v11);
    if ( v26 )
      v27 = CFlipConsumerMessage::CFlipConsumerMessage(v26, a1, (struct FlipPropertyItem *)Pool2, v8, v10);
    else
      v27 = 0LL;
    *a4 = v27;
    if ( v27 )
    {
      v8 = 0LL;
      Pool2 = 0LL;
    }
    else
    {
      v6 = -1073741801;
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v6;
}
