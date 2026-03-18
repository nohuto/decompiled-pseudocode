/*
 * XREFs of Interrupter_WdfEvtInterruptIsr @ 0x140039780
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140006BE0 (McTemplateK0q_EtwWriteTransfer.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     Register_WriteSecureMmio @ 0x14000E158 (Register_WriteSecureMmio.c)
 *     Controller_GetFrameNumber @ 0x140015B50 (Controller_GetFrameNumber.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1400234D0 (Interrupter_DeferToDpcOrWorkItem.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14003081C (McTemplateK0pq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptIsr(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v4; // r13
  unsigned __int8 v5; // si
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbp
  int FrameNumber; // r12d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned int *v20; // rdx
  unsigned int Ulong; // ecx
  unsigned int *v22; // rdx
  __int64 v23; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+18h] BYREF
  int v29; // [rsp+88h] [rbp+20h] BYREF

  v27 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v4 = 0;
  v5 = 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  if ( KeGetCurrentIrql() < 2u )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v3 + 8));
  v9 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)(v9 + 1004) )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      LODWORD(v26) = *(_DWORD *)(v3 + 32);
      McTemplateK0pq_EtwWriteTransfer((unsigned int)v26, &USBXHCI_ETW_EVENT_INTERRUPT_V2, v8, v10, v26);
    }
  }
  else if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&USBXHCI_ETW_EVENT_INTERRUPT_V1, v8, *(_DWORD *)(v3 + 32));
  }
  v11 = *(_QWORD *)(v3 + 8);
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v11 + 1072) )
  {
    v12 = MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)(*(_QWORD *)(v11 + 1160) + 15000000LL) )
    {
      FrameNumber = Controller_GetFrameNumber(v11, 0, &v28, &v29);
      if ( !v28 )
      {
        if ( v29 )
        {
          ++*(_DWORD *)(v11 + 1220);
        }
        else
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v15 = FrameNumber - *(_DWORD *)(v11 + 1184);
          v16 = v12 - *(_QWORD *)(v11 + 1168);
          if ( FrameNumber == *(_DWORD *)(v11 + 1184) || !v16 || v15 > 0x1DCD6500 || v16 > 0x1DCD6500 )
            goto LABEL_20;
          v17 = 10000 * v15;
          v18 = (unsigned int)v17;
          v19 = v17 - v16;
          if ( v18 <= v16 )
            v19 = v16 - v18;
          if ( v19 > 0x5F5E100 )
          {
LABEL_20:
            ++*(_DWORD *)(v11 + 1216);
          }
          else
          {
            *(_QWORD *)(v11 + 1200) = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 1136);
            *(_QWORD *)(v11 + 1208) = (unsigned int)(8 * (FrameNumber - *(_DWORD *)(v11 + 1144))
                                                   - *(_DWORD *)(v11 + 1152));
          }
          *(LARGE_INTEGER *)(v11 + 1176) = PerformanceCounter;
          *(_QWORD *)(v11 + 1168) = v12;
          *(_DWORD *)(v11 + 1184) = FrameNumber;
        }
        *(_QWORD *)(v11 + 1160) = v12;
      }
    }
  }
  if ( v27 || (*(_DWORD *)(v3 + 112) & 1) != 0 )
  {
    ++*(_DWORD *)(v3 + 40);
    Interrupter_DeferToDpcOrWorkItem(a1);
  }
  else
  {
    v20 = *(unsigned int **)(v3 + 24);
    if ( *(_BYTE *)(v6 + 137) )
      Ulong = *v20;
    else
      Ulong = XilRegister_ReadUlong(v6, v20);
    if ( (Ulong & 1) != 0 )
    {
      v22 = *(unsigned int **)(v3 + 24);
      if ( *(_BYTE *)(v6 + 137) || (v23 = *(_QWORD *)(v6 + 8), v27 = Ulong, !*(_BYTE *)(v23 + 1001)) )
      {
        *v22 = Ulong;
        _InterlockedOr(v25, 0);
        ++*(_DWORD *)(v3 + 40);
        Interrupter_DeferToDpcOrWorkItem(a1);
      }
      else
      {
        Register_WriteSecureMmio(v6, (__int64)v22, 2u, &v27);
        ++*(_DWORD *)(v3 + 40);
        Interrupter_DeferToDpcOrWorkItem(a1);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( v4 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*(_QWORD **)(v3 + 8));
  return v5;
}
