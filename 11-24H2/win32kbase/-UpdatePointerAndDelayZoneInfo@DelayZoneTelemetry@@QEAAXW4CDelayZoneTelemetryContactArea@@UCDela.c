/*
 * XREFs of ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x14021F98C
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C2FA8 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     GetUserHandedness @ 0x140152738 (GetUserHandedness.c)
 *     ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x14021F600 (-AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z.c)
 *     ?HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z @ 0x14021F714 (-HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z.c)
 */

void __fastcall DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(
        DelayZoneTelemetry *a1,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT *a4,
        int a5)
{
  unsigned int v6; // r11d
  __int64 v9; // rdx
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rbx
  struct tagRECT v14; // [rsp+20h] [rbp-28h] BYREF

  v6 = *((_DWORD *)a1 + 2) + a5;
  v9 = v6 / 0xD5;
  v11 = v6 % 0xD5;
  v12 = (unsigned int)v11;
  v13 = 6 * v11;
  *((_DWORD *)a1 + 2 * v13 + 517) = a3->left;
  *((_DWORD *)a1 + 2 * v13 + 518) = a3->top;
  *((_DWORD *)a1 + 2 * v13 + 519) = (unsigned int)GetUserHandedness((__int64)a1, v9);
  *((_DWORD *)a1 + 2 * v13 + 520) = a4->x;
  *((_DWORD *)a1 + 2 * v13 + 521) = a4[1].y;
  *((_DWORD *)a1 + 2 * v13 + 525) = a4[6].x;
  *((_DWORD *)a1 + 2 * v13 + 526) = a4[6].y;
  *((_DWORD *)a1 + 2 * v13 + 527) = a4[8].x;
  if ( a4->x == 3 )
  {
    *((_DWORD *)a1 + 12 * v12 + 516) = ((unsigned __int8)DelayZoneTelemetry::HitTestInputPanelRegion(a1, a4[6]) ^ 1) + 2;
  }
  else
  {
    *((_DWORD *)a1 + 12 * v12 + 516) = a2;
    if ( !a2 )
    {
      v14 = a3[1];
      DelayZoneTelemetry::AddInputPanelRectToList(a1, &v14);
    }
  }
}
