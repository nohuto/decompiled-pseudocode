/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x140040CE0
 * Callers:
 *     NtFlipObjectSetContent @ 0x1400460D0 (NtFlipObjectSetContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140053360 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectAddContent @ 0x1400567D0 (NtFlipObjectAddContent.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009C18C (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     ??0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x14004E028 (--0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipPropertySet>(unsigned int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  signed int v5; // ebx
  unsigned int v6; // r15d
  char *v7; // r14
  char *Pool2; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int i; // r8d
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  char *v18; // rcx
  unsigned int j; // r15d
  void **v20; // rbx
  __int64 v21; // rdx
  CFlipPropertySet *v22; // rax
  CFlipPropertySet *v23; // rcx
  char *v25; // [rsp+50h] [rbp-48h]
  void *Src; // [rsp+A8h] [rbp+10h]
  unsigned int v27; // [rsp+B0h] [rbp+18h]
  _QWORD *v28; // [rsp+B8h] [rbp+20h]

  v28 = (_QWORD *)a4;
  Src = a2;
  v4 = a1;
  v5 = 0;
  if ( a1 )
  {
    v6 = 0;
    v7 = 0LL;
    Pool2 = 0LL;
    v9 = 0;
    if ( a2 )
    {
      v10 = 32LL * a1;
      v11 = -1;
      if ( (unsigned __int64)(32 * v4) <= 0xFFFFFFFF )
        v11 = v10;
      v27 = v11;
      v5 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v10 <= 0xFFFFFFFF )
      {
        Pool2 = (char *)ExAllocatePool2(257LL, v11, 1768964934LL, a4);
        a4 = 3221225495LL;
        if ( !Pool2 )
          v5 = -1073741801;
        a2 = Src;
        v11 = v27;
      }
      if ( v5 >= 0 )
        RtlCopyFromUser(Pool2, a2, v11);
    }
    else
    {
      v5 = -1073741811;
    }
    for ( i = 0; v5 >= 0 && i < (unsigned int)v4; ++i )
    {
      v13 = 32LL * i;
      v14 = *(_DWORD *)&Pool2[v13 + 16];
      if ( v14 && *(_QWORD *)&Pool2[v13 + 24] )
      {
        v15 = v6;
        v16 = v6 + v14;
        v17 = -1;
        if ( v16 >= v6 )
          v17 = v16;
        v6 = v17;
        v5 = v16 < v15 ? 0xC0000095 : 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    if ( v5 >= 0 )
    {
      v7 = (char *)ExAllocatePool2(257LL, v6, 1651524422LL, a4);
      if ( !v7 )
        v5 = -1073741801;
      if ( v5 >= 0 )
      {
        v18 = v7;
        v25 = v7;
        for ( j = 0; v5 >= 0 && j < (unsigned int)v4; ++j )
        {
          v20 = (void **)&Pool2[32 * j];
          RtlCopyFromUser(v18, v20[3], *((unsigned int *)v20 + 4));
          v20[3] = v25;
          v21 = *((unsigned int *)v20 + 4);
          v18 = &v25[v21];
          v25 += v21;
          if ( v9 + 16 < v9 )
          {
            v9 = -1;
            v5 = -1073741675;
          }
          else
          {
            v9 += 16;
            v5 = 0;
          }
          if ( v5 >= 0 )
          {
            if ( v9 + 4 < v9 )
            {
              v9 = -1;
              v5 = -1073741675;
            }
            else
            {
              v9 += 4;
              v5 = 0;
            }
            if ( v5 >= 0 )
            {
              if ( (unsigned int)v21 + v9 < v9 )
              {
                v9 = -1;
                v5 = -1073741675;
              }
              else
              {
                v9 += v21;
                v5 = 0;
              }
            }
          }
        }
      }
    }
    if ( v5 >= 0 )
    {
      v22 = (CFlipPropertySet *)ExAllocatePool2(257LL, 40LL, 1936737094LL, a4);
      if ( v22 )
        v23 = CFlipPropertySet::CFlipPropertySet(v22, v4, (struct FlipPropertyItem *)Pool2, v7, v9);
      else
        v23 = 0LL;
      *v28 = v23;
      if ( v23 )
      {
        v7 = 0LL;
        Pool2 = 0LL;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v5;
}
