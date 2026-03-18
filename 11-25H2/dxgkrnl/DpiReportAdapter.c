/*
 * XREFs of DpiReportAdapter @ 0x1403B3B40
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403B3230 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040C830 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer @ 0x140060610 (McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer.c)
 *     __chkstk_0 @ 0x14009F820 (__chkstk_0.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  _QWORD *Pool2; // rbx
  unsigned int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdi
  __int128 *v16; // rax
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  __int128 v19; // xmm0
  __int64 (__fastcall *v20)(_QWORD, _QWORD, char *); // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  _DWORD v33[1028]; // [rsp+80h] [rbp-80h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v6 = 1;
    if ( *(_DWORD *)(v5 + 2840) )
      v6 = *(_DWORD *)(v5 + 2840);
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v6, 1953656900LL, a4);
    if ( Pool2 )
    {
      v8 = *(_DWORD *)(v5 + 2840);
      if ( v8 )
      {
        v9 = Pool2;
        v10 = *(_QWORD *)(v5 + 2832) - (_QWORD)Pool2;
        v11 = v8;
        do
        {
          *v9 = *(_QWORD *)(*(_QWORD *)((char *)v9 + v10) + 64LL);
          ++v9;
          --v11;
        }
        while ( v11 );
      }
      else
      {
        *Pool2 = v5;
      }
    }
    else
    {
      v6 = 0;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 3354;
    }
    if ( v6 )
    {
      v12 = Pool2;
      v13 = v6;
      do
      {
        memset(v33, 0, sizeof(v33));
        v15 = *v12;
        v33[1025] = *(_DWORD *)(*v12 + 500LL);
        v33[1026] = *(_DWORD *)(v15 + 504);
        LOBYTE(v33[1027]) = *(_BYTE *)(v15 + 508);
        v16 = (__int128 *)(v15 + 1112);
        v17 = *(_QWORD *)(v15 + 1112);
        if ( v17 )
        {
          v18 = v33;
          v14 = 2LL;
          do
          {
            v19 = *v16;
            v16 += 8;
            *v18 = v19;
            v18 += 8;
            *(v18 - 7) = *(v16 - 7);
            *(v18 - 6) = *(v16 - 6);
            *(v18 - 5) = *(v16 - 5);
            *(v18 - 4) = *(v16 - 4);
            *(v18 - 3) = *(v16 - 3);
            *(v18 - 2) = *(v16 - 2);
            *(v18 - 1) = *(v16 - 1);
            --v14;
          }
          while ( v14 );
          v33[1024] = 256;
        }
        v20 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(v15 + 616);
        if ( v20 )
        {
          v21 = v20(*(_QWORD *)(v15 + 568), 0LL, (char *)v33 + (v17 != 0 ? 0x100 : 0));
          v22 = (unsigned int)(v21 + v33[1024]);
        }
        else
        {
          v22 = 0LL;
        }
        v33[1024] = v22;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          LODWORD(v32) = *(_DWORD *)(v15 + 1140);
          LODWORD(v31) = *(_DWORD *)(v15 + 1136);
          LODWORD(v30) = *(_DWORD *)(v15 + 1132);
          LODWORD(v29) = *(_DWORD *)(v15 + 1128);
          LODWORD(v28) = *(_DWORD *)(v15 + 1124);
          LODWORD(v27) = *(_DWORD *)(v15 + 1120);
          LODWORD(v26) = LOBYTE(v33[1027]);
          LODWORD(v25) = v33[1026];
          LODWORD(v24) = v33[1025];
          LODWORD(v23) = v22;
          McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer(
            LOBYTE(v33[1027]),
            v22,
            v14,
            a2,
            v23,
            v33,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            *(_QWORD *)(a2 + 412));
        }
        ++v12;
        --v13;
      }
      while ( v13 );
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
