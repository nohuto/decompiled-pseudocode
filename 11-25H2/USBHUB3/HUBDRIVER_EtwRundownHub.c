/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x140079248
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x140079008 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x140001AD8 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x140002058 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pqun_EtwWriteTransfer @ 0x1400020D4 (McTemplateK0pqun_EtwWriteTransfer.c)
 *     McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer @ 0x140002164 (McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1400023C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

__int64 __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rdi
  char v9; // r13
  int v10; // eax
  char v11; // bp
  char v12; // cl
  int v13; // eax
  int v14; // eax
  const char *v15; // r15
  const char *v16; // r12
  char v17; // r14
  const char *v18; // r13
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  int v22; // r10d
  __int16 v23; // r11
  int v24; // r9d
  const char *v25; // r8
  const char *v26; // rax
  const char *v27; // rdx
  int v28; // r15d
  int v29; // r14d
  int v30; // r10d
  int v31; // r11d
  __int16 v32; // r12
  __int64 v33; // rdx
  void *Pool2; // rax
  void *v35; // rbp
  __int64 v36; // [rsp+20h] [rbp-118h]
  __int64 v37; // [rsp+28h] [rbp-110h]
  int v38; // [rsp+C0h] [rbp-78h]
  int v39; // [rsp+C0h] [rbp-78h]
  char v40; // [rsp+C4h] [rbp-74h]
  char v41; // [rsp+C8h] [rbp-70h]
  char v42; // [rsp+CCh] [rbp-6Ch]
  char v43; // [rsp+D0h] [rbp-68h]
  char v44; // [rsp+D4h] [rbp-64h]
  char v45; // [rsp+D8h] [rbp-60h]
  char v46; // [rsp+DCh] [rbp-5Ch]
  char v47; // [rsp+E0h] [rbp-58h]
  void *Src[2]; // [rsp+E8h] [rbp-50h] BYREF
  char v49; // [rsp+148h] [rbp+10h]
  char v50; // [rsp+148h] [rbp+10h]
  char v51; // [rsp+150h] [rbp+18h]
  char v52; // [rsp+150h] [rbp+18h]
  char v53; // [rsp+158h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 2224) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(
          (__int64)a1,
          &USBHUB3_ETW_EVENT_RUNDOWN_ROOT_HUB_INFORMATION,
          a1,
          *(_QWORD *)(a2 + 248),
          *(_DWORD *)(a2 + 2608));
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      McTemplateK0pnq_EtwWriteTransfer(
        a2 + 1188,
        &USBHUB3_ETW_EVENT_RUNDOWN_USB30_HUB_INFORMATION,
        a1,
        *(_QWORD *)(a2 + 248),
        12,
        a2 + 1188,
        *(_DWORD *)(a2 + 2608));
    }
  }
  else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    McTemplateK0pnq_EtwWriteTransfer(
      a2 + 1188,
      &USBHUB3_ETW_EVENT_RUNDOWN_USB20_HUB_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 248),
      71,
      a2 + 1188,
      *(_DWORD *)(a2 + 2608));
  }
  v6 = a2 + 2368;
  result = *(_QWORD *)(a2 + 2368);
  v8 = result - 248;
  if ( a2 + 2368 != result )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v8 + 204);
      if ( (v10 & 2) != 0 )
      {
        v11 = 1;
        if ( (v10 & 0x1000) != 0 && (*(_DWORD *)(a2 + 44) & 0x200) != 0 )
        {
          v12 = 1;
          goto LABEL_18;
        }
      }
      else
      {
        v11 = 0;
      }
      v12 = 0;
LABEL_18:
      v13 = *(_DWORD *)(v8 + 1256);
      v53 = v12;
      if ( v13 != 3000 )
      {
        if ( v13 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
          goto LABEL_47;
        v14 = *(_DWORD *)(a2 + 168);
        v15 = (const char *)(a2 + 186);
        v16 = (const char *)(a2 + 181);
        v17 = 0;
        if ( v14 != 2 )
        {
          v15 = 0LL;
          v16 = 0LL;
        }
        v18 = (const char *)(a2 + 176);
        if ( v14 != 2 )
          v18 = 0LL;
        if ( v14 == 1 )
        {
          v19 = *(_DWORD *)(a2 + 192);
          v20 = *(_DWORD *)(a2 + 196);
          v21 = *(_DWORD *)(a2 + 176);
          v22 = *(_DWORD *)(a2 + 180);
          v23 = *(_WORD *)(a2 + 184);
          v38 = *(_DWORD *)(a2 + 188);
          v17 = 0;
        }
        else
        {
          LOBYTE(v21) = -1;
          LOBYTE(v38) = 0;
          LOBYTE(v22) = -1;
          LOBYTE(v19) = 0;
          LOBYTE(v20) = 0;
          LOBYTE(v23) = 0;
        }
        if ( v12 )
        {
          v49 = *(_BYTE *)(v8 + 1344) & 3;
          v40 = (*(_DWORD *)(v8 + 1344) & 8) != 0;
          v51 = 1;
          v41 = (*(_DWORD *)(v8 + 1344) & 0x20) != 0;
          v42 = (*(_DWORD *)(v8 + 1344) & 4) != 0;
          v43 = (*(_DWORD *)(v8 + 1344) & 0x10) != 0;
          v17 = 0;
        }
        else
        {
          v49 = 0;
          v40 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v51 = 0;
        }
        if ( v11 )
          v17 = *(_BYTE *)(v8 + 1341);
        McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
          *(unsigned __int16 *)(v8 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_30_PORT_V2,
          a1,
          *(_QWORD *)(a2 + 248),
          *(_WORD *)(v8 + 200),
          v11,
          v17,
          v51,
          v43,
          v42,
          v41,
          v40,
          v49,
          *(_QWORD *)(v8 + 1416),
          v14,
          v38,
          v19,
          v20,
          v21,
          v22,
          v23,
          v18,
          v16,
          v15);
        goto LABEL_46;
      }
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
        goto LABEL_47;
      v24 = *(_DWORD *)(a2 + 168);
      if ( v24 == 2 )
      {
        v25 = (const char *)(a2 + 176);
        v26 = (const char *)(a2 + 181);
        v27 = (const char *)(a2 + 186);
      }
      else
      {
        v27 = 0LL;
        v26 = 0LL;
        v25 = 0LL;
        if ( v24 == 1 )
        {
          v30 = *(_DWORD *)(a2 + 192);
          v31 = *(_DWORD *)(a2 + 196);
          v29 = *(_DWORD *)(a2 + 176);
          v28 = *(_DWORD *)(a2 + 180);
          v32 = *(_WORD *)(a2 + 184);
          v39 = *(_DWORD *)(a2 + 188);
          v9 = 0;
          v25 = 0LL;
          goto LABEL_38;
        }
      }
      LOBYTE(v28) = -1;
      LOBYTE(v39) = 0;
      LOBYTE(v29) = -1;
      LOBYTE(v30) = 0;
      LOBYTE(v31) = 0;
      LOBYTE(v32) = 0;
LABEL_38:
      if ( v12 )
      {
        v50 = *(_BYTE *)(v8 + 1344) & 3;
        v44 = (*(_DWORD *)(v8 + 1344) & 8) != 0;
        v52 = 1;
        v45 = (*(_DWORD *)(v8 + 1344) & 0x20) != 0;
        v46 = (*(_DWORD *)(v8 + 1344) & 4) != 0;
        v47 = (*(_DWORD *)(v8 + 1344) & 0x10) != 0;
        v9 = 0;
      }
      else
      {
        v50 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v52 = 0;
      }
      if ( v11 )
        v9 = *(_BYTE *)(v8 + 1341);
      McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
        *(unsigned __int16 *)(v8 + 200),
        &USBHUB3_ETW_EVENT_RUNDOWN_20_PORT_V2,
        a1,
        *(_QWORD *)(a2 + 248),
        *(_WORD *)(v8 + 200),
        v11,
        v9,
        v52,
        v47,
        v46,
        v45,
        v44,
        v50,
        *(_QWORD *)(v8 + 1416),
        v24,
        v39,
        v30,
        v31,
        v29,
        v28,
        v32,
        v25,
        v26,
        v27);
LABEL_46:
      v9 = 0;
      v6 = a2 + 2368;
LABEL_47:
      if ( v11 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LOBYTE(v37) = v53;
        LODWORD(v36) = *(unsigned __int16 *)(v8 + 200);
        McTemplateK0pqun_EtwWriteTransfer(
          *(unsigned __int16 *)(v8 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC_V1,
          a1,
          *(_QWORD *)(a2 + 248),
          v36,
          v37);
      }
      if ( (*(_DWORD *)(v8 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LODWORD(v36) = *(unsigned __int16 *)(v8 + 200);
        McTemplateK0pqn_EtwWriteTransfer(
          *(unsigned __int16 *)(v8 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
          a1,
          *(_QWORD *)(a2 + 248),
          v36);
      }
      if ( (*(_DWORD *)(v8 + 204) & 0x800) != 0 )
      {
        v33 = *(_QWORD *)(v8 + 1464);
        *(_OWORD *)Src = 0LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
          WdfDriverGlobals,
          v33,
          Src);
        Pool2 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
        v35 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Src[1], LOWORD(Src[0]));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
          {
            LODWORD(v36) = *(unsigned __int16 *)(v8 + 200);
            McTemplateK0pqz_EtwWriteTransfer(
              *(unsigned __int16 *)(v8 + 200),
              &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_DSD_USB4,
              a1,
              *(_QWORD *)(a2 + 248),
              v36,
              v35);
          }
          ExFreePoolWithTag(v35, 0x64334855u);
        }
      }
      result = *(_QWORD *)(v8 + 248);
      v8 = result - 248;
    }
    while ( v6 != result );
  }
  return result;
}
