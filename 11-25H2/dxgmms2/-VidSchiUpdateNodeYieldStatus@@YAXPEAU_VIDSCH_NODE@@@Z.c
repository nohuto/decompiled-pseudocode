/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14003B55C
 * Callers:
 *     VidSchiSelectContext @ 0x140020E50 (VidSchiSelectContext.c)
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x14003B668 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiStartNodeYield @ 0x14003B730 (VidSchiStartNodeYield.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x14003B8AC (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14003B9B8 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rbp
  int v3; // ecx
  int v4; // esi
  int v5; // edx
  LARGE_INTEGER v6; // rdi
  int v7; // r8d
  __int64 v8; // rax
  unsigned int refreshed; // eax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  union _LARGE_INTEGER v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_DWORD *)(v1 + 216);
  v12.QuadPart = 0LL;
  v4 = ~((1 << (v3 + 1)) - 1);
  v6 = KeQueryPerformanceCounter(&v12);
  v8 = *((_QWORD *)a1 + 265);
  if ( (v4 & *((_DWORD *)a1 + 473)) != 0 )
  {
    if ( v8 )
    {
      v10 = v6.QuadPart - v8;
      v11 = *((_QWORD *)a1 + 266);
      if ( v10 >= v11 )
      {
        VidSchiStopNodeYield(a1);
      }
      else
      {
        *((_QWORD *)a1 + 265) = 0LL;
        *((_QWORD *)a1 + 266) = v11 - v10;
      }
    }
    if ( *((_BYTE *)a1 + 2144) && (byte_140081241 & 1) != 0 )
      McTemplateK0pqxxxx_EtwWriteTransfer(
        *((_DWORD *)a1 + 473) & v4,
        v5,
        v7,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        *((_BYTE *)a1 + 1892) & v4,
        0,
        0);
  }
  else if ( !v8 )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode(a1);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v6.QuadPart,
      (union _LARGE_INTEGER)v12.QuadPart,
      refreshed);
  }
}
