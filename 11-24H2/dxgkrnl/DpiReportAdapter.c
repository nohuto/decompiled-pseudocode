/*
 * XREFs of DpiReportAdapter @ 0x1403A45AC
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403A3D80 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer @ 0x140060EC8 (McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer.c)
 *     __chkstk_0 @ 0x1400A1B80 (__chkstk_0.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  _QWORD *Pool2; // rbx
  unsigned int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // rdi
  __int128 *v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int128 v17; // xmm0
  __int64 (__fastcall *v18)(_QWORD, _QWORD, char *); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _DWORD v31[1028]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = 1;
    if ( *(_DWORD *)(v3 + 2840) )
      v4 = *(_DWORD *)(v3 + 2840);
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v4, 1953656900LL);
    if ( Pool2 )
    {
      v6 = *(_DWORD *)(v3 + 2840);
      if ( v6 )
      {
        v7 = Pool2;
        v8 = *(_QWORD *)(v3 + 2832) - (_QWORD)Pool2;
        v9 = v6;
        do
        {
          *v7 = *(_QWORD *)(*(_QWORD *)((char *)v7 + v8) + 64LL);
          ++v7;
          --v9;
        }
        while ( v9 );
      }
      else
      {
        *Pool2 = v3;
      }
    }
    else
    {
      v4 = 0;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 3479;
    }
    if ( v4 )
    {
      v10 = Pool2;
      v11 = v4;
      do
      {
        memset(v31, 0, sizeof(v31));
        v13 = *v10;
        v31[1025] = *(_DWORD *)(*v10 + 500LL);
        v31[1026] = *(_DWORD *)(v13 + 504);
        LOBYTE(v31[1027]) = *(_BYTE *)(v13 + 508);
        v14 = (__int128 *)(v13 + 1112);
        v15 = *(_QWORD *)(v13 + 1112);
        if ( v15 )
        {
          v16 = v31;
          v12 = 2LL;
          do
          {
            v17 = *v14;
            v14 += 8;
            *v16 = v17;
            v16 += 8;
            *(v16 - 7) = *(v14 - 7);
            *(v16 - 6) = *(v14 - 6);
            *(v16 - 5) = *(v14 - 5);
            *(v16 - 4) = *(v14 - 4);
            *(v16 - 3) = *(v14 - 3);
            *(v16 - 2) = *(v14 - 2);
            *(v16 - 1) = *(v14 - 1);
            --v12;
          }
          while ( v12 );
          v31[1024] = 256;
        }
        v18 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(v13 + 616);
        if ( v18 )
        {
          v19 = v18(*(_QWORD *)(v13 + 568), 0LL, (char *)v31 + (v15 != 0 ? 0x100 : 0));
          v20 = (unsigned int)(v19 + v31[1024]);
        }
        else
        {
          v20 = 0LL;
        }
        v31[1024] = v20;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          LODWORD(v30) = *(_DWORD *)(v13 + 1140);
          LODWORD(v29) = *(_DWORD *)(v13 + 1136);
          LODWORD(v28) = *(_DWORD *)(v13 + 1132);
          LODWORD(v27) = *(_DWORD *)(v13 + 1128);
          LODWORD(v26) = *(_DWORD *)(v13 + 1124);
          LODWORD(v25) = *(_DWORD *)(v13 + 1120);
          LODWORD(v24) = LOBYTE(v31[1027]);
          LODWORD(v23) = v31[1026];
          LODWORD(v22) = v31[1025];
          LODWORD(v21) = v20;
          McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer(
            LOBYTE(v31[1027]),
            v20,
            v12,
            a2,
            v21,
            v31,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            *(_QWORD *)(a2 + 412));
        }
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
