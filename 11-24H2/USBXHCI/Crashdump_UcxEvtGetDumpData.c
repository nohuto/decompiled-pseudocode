/*
 * XREFs of Crashdump_UcxEvtGetDumpData @ 0x140050F90
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x14004FE44 (Crashdump_CommonBufferAcquire.c)
 *     Crashdump_FreeDeviceContext @ 0x140050090 (Crashdump_FreeDeviceContext.c)
 *     Crashdump_InitializeDeviceContext @ 0x140050414 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1400521C0 (Crashdump_EventRing_InitializeForDump.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 */

__int64 __fastcall Crashdump_UcxEvtGetDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 Pool2; // rax
  _QWORD *v13; // rbx
  int v14; // edi
  _QWORD **v15; // r14
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  unsigned int i; // ebp
  unsigned int v25; // eax
  __int64 v26; // r8
  int v27; // edx
  int v28; // edx
  __int64 v31; // [rsp+38h] [rbp-80h]
  __int128 v32; // [rsp+40h] [rbp-78h] BYREF
  __int128 v33; // [rsp+50h] [rbp-68h]
  int v34; // [rsp+60h] [rbp-58h]

  v34 = 0;
  v32 = 0LL;
  v33 = 0LL;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: Begin\n");
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006B128);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v9 = 0;
  v10 = *(_QWORD *)(v8 + 88);
  v11 = *(_QWORD *)(v8 + 120);
  v31 = *(_QWORD *)(v8 + 136);
  *(_QWORD *)(a4 + 16) = Crashdump_Initialize;
  *(_QWORD *)(a4 + 56) = Crashdump_Cleanup;
  *(_QWORD *)(a4 + 24) = Crashdump_SendUrb;
  *(_QWORD *)(a4 + 48) = Crashdump_ResetDevice;
  *(_QWORD *)(a4 + 32) = Crashdump_SendUrbAsync;
  *(_QWORD *)(a4 + 40) = Crashdump_PollForCompletion;
  *(_BYTE *)(a4 + 84) = 0;
  Pool2 = ExAllocatePool2(64LL, 632LL, 1128482904LL);
  v13 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v14 = -1073741670;
    goto LABEL_36;
  }
  v15 = (_QWORD **)(Pool2 + 496);
  *(_QWORD *)(Pool2 + 504) = Pool2 + 496;
  *(_QWORD *)(Pool2 + 496) = Pool2 + 496;
  *(_QWORD *)(Pool2 + 488) = v11;
  v16 = *(_QWORD *)(v8 + 136);
  *(_QWORD *)Pool2 = v10;
  *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v8 + 736);
  *(_DWORD *)(Pool2 + 24) = (unsigned __int8)*(_DWORD *)(v10 + 84);
  v17 = *(_DWORD *)(v10 + 96);
  *(_DWORD *)(Pool2 + 28) = v17;
  if ( v17 )
  {
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 24LL);
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 16LL);
    *(_DWORD *)(Pool2 + 48) = 8 * v17;
    *(_QWORD *)(Pool2 + 40) = v18;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(v16 + 56);
  }
  v14 = Crashdump_EventRing_InitializeForDump(Pool2 + 72, Pool2);
  if ( v14 >= 0 )
  {
    v13[25] = v13;
    v13[26] = v13;
    v13[27] = *(_QWORD *)(*v13 + 40LL) + 32LL;
    v13[41] = v13;
    v13[42] = v13;
    v13[43] = *(_QWORD *)(*v13 + 32LL) + 24LL;
    v14 = Crashdump_CommonBufferAcquire((__int64)v13, 32, (__int64)(v13 + 44));
    if ( v14 >= 0 )
    {
      v19 = *(_DWORD *)(a4 + 80);
      if ( !v19 )
        goto LABEL_10;
      v14 = Crashdump_CommonBufferAcquire((__int64)v13, v19, (__int64)(v13 + 74));
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a4 + 64) = v13[75];
        *(_QWORD *)(a4 + 72) = v13[74];
LABEL_10:
        *((_DWORD *)v13 + 131) = *(_DWORD *)(v7 + 20);
        *(_OWORD *)((char *)v13 + 532) = *(_OWORD *)(v7 + 32);
        *(_OWORD *)((char *)v13 + 548) = *(_OWORD *)(v7 + 48);
        *((_DWORD *)v13 + 141) = *(_DWORD *)(v7 + 64);
        v20 = 20;
        if ( *(_BYTE *)(120LL * (unsigned int)(*((_DWORD *)v13 + 136) - 1)
                      + *(_QWORD *)(*(_QWORD *)(v8 + 152) + 48LL)
                      + 13) != 2 )
          v20 = 30;
        *((_DWORD *)v13 + 132) = v20;
        v21 = ExAllocatePool2(64LL, 376LL * *((unsigned int *)v13 + 134), 1128482904LL);
        v13[71] = v21;
        if ( v21 )
        {
          for ( i = 1; ; ++i )
          {
            v25 = *((_DWORD *)v13 + 134);
            if ( i - 1 >= v25 )
              break;
            v32 = 0LL;
            DWORD1(v32) = i;
            v34 = 0;
            v33 = 0LL;
            memmove((char *)&v32 + 12, v13 + 68, 4LL * i);
            v26 = a3;
            if ( i != *((_DWORD *)v13 + 134) )
              v26 = 0LL;
            v14 = Crashdump_InitializeDeviceContext(v31, (int)v13, v26, (__int64)&v32, v13[71] + 376LL * (i - 1));
            if ( v14 < 0 )
              goto LABEL_14;
          }
          v13[72] = v13[71] + 376LL * (v25 - 1);
          v14 = Crashdump_CommonBufferAcquire((__int64)v13, 64, (__int64)(v13 + 55));
          if ( v14 >= 0 )
          {
            v27 = 2112;
            if ( (*(_DWORD *)(*v13 + 104LL) & 4) == 0 )
              v27 = 1056;
            v14 = Crashdump_CommonBufferAcquire((__int64)v13, v27, (__int64)(v13 + 58));
            if ( v14 >= 0 )
            {
              v28 = *((_DWORD *)v13 + 134);
              *((_DWORD *)v13 + 102) = v28;
              v14 = Crashdump_CommonBufferAcquire((__int64)v13, 8 * v28 + 8, (__int64)(v13 + 52));
              if ( v14 >= 0 )
              {
                DbgPrintEx(
                  0x93u,
                  3u,
                  "XHCIDUMP: CommonBuffer: Allocated %u pages, %u bytes. Used %u bytes\n",
                  *((_DWORD *)v13 + 128),
                  *((_DWORD *)v13 + 128) << 12,
                  *((_DWORD *)v13 + 129));
                *((_DWORD *)v13 + 146) = 0;
                v14 = 0;
                *(_QWORD *)(a4 + 8) = v13;
                v13[77] = v8;
                *(_QWORD *)(v8 + 824) = v13;
                goto LABEL_36;
              }
            }
          }
        }
        else
        {
          v14 = -1073741670;
        }
      }
    }
  }
LABEL_14:
  if ( v13[71] )
  {
    if ( *((_DWORD *)v13 + 134) )
    {
      do
        Crashdump_FreeDeviceContext(v13[71] + 376LL * v9++);
      while ( v9 < *((_DWORD *)v13 + 134) );
    }
    ExFreePoolWithTag((PVOID)v13[71], 0x43434858u);
  }
  while ( 1 )
  {
    v22 = *v15;
    if ( *v15 == v15 )
      break;
    if ( (_QWORD **)v22[1] != v15 || (v23 = (_QWORD *)*v22, *(_QWORD **)(*v22 + 8LL) != v22) )
      __fastfail(3u);
    *v15 = v23;
    v23[1] = v15;
    CommonBuffer_ReleaseBuffer(v13[61], (__int64)v22);
  }
  ExFreePoolWithTag(v13, 0x43434858u);
LABEL_36:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: End 0x%X\n", v14);
  return (unsigned int)v14;
}
