/*
 * XREFs of PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A71A44
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeAndGroupAffinityEx @ 0x14032DF70 (KeAndGroupAffinityEx.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     KeQueryGroupAffinity @ 0x14045F4C0 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorPerformanceDomainRundown(__int64 a1)
{
  _DWORD *Pool2; // r14
  unsigned __int16 v3; // ax
  USHORT i; // di
  _OWORD *v5; // rbx
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned __int16 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r10
  _OWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned __int16 j; // dx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG v25; // eax
  unsigned __int16 v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[68]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v29[32]; // [rsp+488h] [rbp+380h] BYREF

  Pool2 = 0LL;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN) )
  {
    v3 = 0;
    v26 = 0;
    for ( i = 0; i < 0x20u; ++i )
    {
      v5 = &v29[v3];
      *v5 = 0LL;
      *((_WORD *)v5 + 4) = i;
      *(_QWORD *)v5 = KeQueryGroupAffinity(i);
      v6 = (unsigned int)KeAndGroupAffinityEx((_WORD *)(a1 + 24), (__int64)v5, (char *)v5) == 0;
      v3 = v26;
      if ( !v6 )
        v3 = ++v26;
    }
    UserData[0].Ptr = (ULONGLONG)&v26;
    v7 = 1;
    *(_QWORD *)&UserData[0].Size = 2LL;
    if ( v3 )
    {
      v14 = v29;
      v15 = v3;
      do
      {
        v16 = v7;
        UserData[v16].Ptr = (ULONGLONG)v14 + 8;
        *(_QWORD *)&UserData[v16].Size = 2LL;
        v17 = v7 + 1;
        v7 += 2;
        UserData[v17].Ptr = (ULONGLONG)v14++;
        *(_QWORD *)&UserData[v17].Size = 8LL;
        --v15;
      }
      while ( v15 );
    }
    v8 = *(_DWORD *)(a1 + 296);
    v9 = 0;
    v10 = v7;
    v11 = 0LL;
    v12 = v7 + 1;
    v27 = 0;
    UserData[v10].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v10].Size = 4LL;
    if ( v8 )
    {
      v13 = *(_QWORD *)(a1 + 312);
      do
      {
        if ( *(_DWORD *)(1192LL * v9 + v13 + 16) == 1 )
        {
          v11 = (unsigned int)(v11 + 1);
          v27 = v11;
        }
        ++v9;
      }
      while ( v9 < v8 );
      if ( (_DWORD)v11 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 4 * v11, 0x654D5050u);
        if ( !Pool2 )
          return;
        v18 = 0;
        for ( j = 0; (unsigned int)j < *(_DWORD *)(a1 + 296); ++j )
        {
          v21 = *(_QWORD *)(a1 + 312);
          v22 = 1192LL * j;
          if ( *(_DWORD *)(v22 + v21 + 16) == 1 )
          {
            v23 = v18++;
            Pool2[v23] = *(_DWORD *)(v22 + v21 + 20);
          }
        }
        v24 = v12;
        v25 = 4 * v27;
        ++v12;
        UserData[v24].Ptr = (ULONGLONG)Pool2;
        UserData[v24].Size = v25;
        *(&UserData[0].Reserved + 1 * v24) = 0;
      }
    }
    v20 = v12;
    UserData[v20].Ptr = a1 + 440;
    *(_QWORD *)&UserData[v20].Size = 4LL;
    EtwWrite(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN, 0LL, v12 + 1, UserData);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x654D5050u);
  }
}
