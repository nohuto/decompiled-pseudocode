/*
 * XREFs of VmpAccessFaultBatchResolve @ 0x1409F0524
 * Callers:
 *     VmpAccessFaultBatch @ 0x140399920 (VmpAccessFaultBatch.c)
 * Callees:
 *     MmGetNodeFastLargePageCounts @ 0x1404CAABC (MmGetNodeFastLargePageCounts.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmVirtualAccessFault @ 0x1409F07A0 (MmVirtualAccessFault.c)
 *     VmpFillValidFaultInfo @ 0x1409F089C (VmpFillValidFaultInfo.c)
 *     MmBuildLargePages @ 0x1409F091C (MmBuildLargePages.c)
 *     VmpLogFaultResolveFailure @ 0x140AAE3B4 (VmpLogFaultResolveFailure.c)
 */

__int64 __fastcall VmpAccessFaultBatchResolve(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int a7)
{
  char *v8; // r14
  unsigned int v9; // r15d
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned __int64 v14; // r13
  unsigned int v15; // edi
  __int64 v16; // rdx
  unsigned __int64 i; // rcx
  __int64 v18; // r8
  int v19; // esi
  int v20; // r8d
  const signed __int64 *v21; // r10
  __int64 v22; // r10
  unsigned __int64 v23; // r11
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+30h] [rbp-F8h]
  __int64 v28; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-E8h]
  __int64 v30; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v31; // [rsp+50h] [rbp-D8h]
  char v32; // [rsp+60h] [rbp-C8h] BYREF

  v29 = 0LL;
  v30 = a1;
  if ( a4 )
  {
    v8 = *(char **)(a4 + 16);
    v9 = *(_DWORD *)a4;
  }
  else
  {
    v8 = &v32;
    v9 = 16;
  }
  v10 = a5 & 1 | 2;
  if ( (a5 & 2) == 0 )
    v10 = a5 & 1;
  if ( (a5 & 4) != 0 )
    v10 |= 1u;
  v11 = v10 | 8;
  if ( (a5 & 8) == 0 )
    v11 = v10;
  v12 = v11 | 0x10;
  if ( (a5 & 0x10) == 0 )
    v12 = v11;
  v13 = v12 | 0x20;
  if ( (a5 & 0x20) == 0 )
    v13 = v12;
  v27 = v13;
  v14 = a2 + 48LL * a3;
  v31 = v14;
  while ( 2 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( a2 >= v14 )
        return 0;
      v16 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFLL;
      v28 = *(_QWORD *)(a2 + 24) << 12;
      if ( !v15 )
      {
        v15 = 1;
        for ( i = a2 + 48; i < v14; i += 48LL )
        {
          if ( v15 >= v9 )
            break;
          v18 = *(_QWORD *)(i + 24) & 0xFFFFFFFFFFFFFLL;
          if ( v18 != v16 + 1 )
            break;
          v16 = v18;
          ++v15;
        }
        if ( (a5 & 0x40) != 0 && v15 == 512 && !MmGetNodeFastLargePageCounts(i, a7 - 1) )
          MmBuildLargePages(v26, (unsigned int)(a7 - 1));
      }
      v29 = v15 << 12;
      memset_0(v8, 0, 8LL * v15);
      v19 = MmVirtualAccessFault(&v28, v8, v27);
      if ( v19 < 0 )
        break;
      v21 = (const signed __int64 *)v8;
      if ( v8 < &v8[8 * v15] )
      {
        do
        {
          if ( !_bittest64(v21, 0x34u) )
            break;
          VmpFillValidFaultInfo(a2, (_DWORD)v21, v20, a5, a6);
          v21 = (const signed __int64 *)(v22 + 8);
          a2 += 48LL;
          --v15;
        }
        while ( (unsigned __int64)v21 < v23 );
        v14 = v31;
      }
    }
    if ( *(_QWORD *)&VmpTraceLoggingProvider )
    {
      if ( **(_DWORD **)&VmpTraceLoggingProvider )
      {
        if ( (*(_BYTE *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 0x40) != 0 )
        {
          v25 = *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL);
          if ( (v25 & 0x40) == v25 )
            VmpLogFaultResolveFailure(v25, (unsigned int)&v28, a5, v27, *(_QWORD *)(v30 + 104), v19);
        }
      }
    }
    if ( (a5 & 0x20) != 0 )
    {
      v9 = 1;
      *(_QWORD *)(a2 + 32) |= 0x200000000000000uLL;
      a2 += 48LL;
      continue;
    }
    break;
  }
  return (unsigned int)v19;
}
