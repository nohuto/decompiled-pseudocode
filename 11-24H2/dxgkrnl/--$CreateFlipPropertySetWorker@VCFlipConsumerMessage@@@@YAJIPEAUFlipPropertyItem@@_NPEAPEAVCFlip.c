/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x140019A5C
 * Callers:
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140018050 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x140019988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14004E220 (NtFlipObjectConsumerPostMessage.c)
 * Callees:
 *     ??0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x14004DEF0 (--0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
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
  unsigned __int64 v11; // rax
  unsigned int v12; // r12d
  unsigned int i; // r8d
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // eax
  char *v19; // r12
  unsigned int j; // r15d
  char *v21; // rbx
  void *v22; // rdx
  size_t v23; // r8
  __int64 v24; // rcx
  CFlipConsumerMessage *v25; // rax
  CFlipConsumerMessage *v26; // rcx
  char v28; // [rsp+B0h] [rbp+18h]

  v28 = a3;
  v6 = 0;
  if ( !a1 )
    return (unsigned int)v6;
  v7 = 0;
  v8 = 0LL;
  Pool2 = 0LL;
  v10 = 0;
  if ( !Src )
  {
    v6 = -1073741811;
    goto LABEL_15;
  }
  v11 = 32LL * a1;
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = v11;
  v6 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 <= 0xFFFFFFFF )
  {
    Pool2 = (char *)ExAllocatePool2(257LL, v12, 1768964934LL);
    if ( !Pool2 )
      v6 = -1073741801;
    a3 = v28;
  }
  if ( v6 >= 0 )
  {
    if ( a3 )
    {
      RtlCopyFromUser(Pool2, Src, v12);
      v7 = 0;
      goto LABEL_15;
    }
    memmove(Pool2, Src, v12);
  }
  v7 = 0;
LABEL_15:
  for ( i = 0; v6 >= 0 && i < a1; ++i )
  {
    v14 = 32LL * i;
    v15 = *(_DWORD *)&Pool2[v14 + 16];
    if ( v15 && *(_QWORD *)&Pool2[v14 + 24] )
    {
      v16 = v7;
      v17 = v7 + v15;
      v18 = -1;
      if ( v17 >= v7 )
        v18 = v17;
      v7 = v18;
      v6 = v17 < v16 ? 0xC0000095 : 0;
    }
    else
    {
      v6 = -1073741811;
    }
  }
  if ( v6 >= 0 )
  {
    v8 = (char *)ExAllocatePool2(257LL, v7, 1651524422LL);
    if ( !v8 )
      v6 = -1073741801;
    if ( v6 >= 0 )
    {
      v19 = v8;
      for ( j = 0; v6 >= 0 && j < a1; ++j )
      {
        v21 = &Pool2[32 * j];
        v22 = (void *)*((_QWORD *)v21 + 3);
        v23 = *((unsigned int *)v21 + 4);
        if ( v28 )
          RtlCopyFromUser(v19, v22, v23);
        else
          memmove(v19, v22, v23);
        *((_QWORD *)v21 + 3) = v19;
        v24 = *((unsigned int *)v21 + 4);
        v19 += v24;
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
            if ( (unsigned int)v24 + v10 < v10 )
            {
              v10 = -1;
              v6 = -1073741675;
            }
            else
            {
              v10 += v24;
              v6 = 0;
            }
          }
        }
      }
    }
  }
  if ( v6 >= 0 )
  {
    v25 = (CFlipConsumerMessage *)ExAllocatePool2(257LL, 64LL, 1835221830LL);
    if ( v25 )
      v26 = CFlipConsumerMessage::CFlipConsumerMessage(v25, a1, (struct FlipPropertyItem *)Pool2, v8, v10);
    else
      v26 = 0LL;
    *a4 = v26;
    if ( v26 )
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
