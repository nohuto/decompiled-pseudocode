/*
 * XREFs of Interrupter_WdfEvtInterruptIsr @ 0x1400386B0
 * Callers:
 *     <none>
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     Controller_GetFrameNumber @ 0x140012BF0 (Controller_GetFrameNumber.c)
 *     Register_WriteSecureMmio @ 0x14001CBB4 (Register_WriteSecureMmio.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1400226A0 (Interrupter_DeferToDpcOrWorkItem.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002F834 (McTemplateK0pq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptIsr(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v4; // r13
  unsigned __int8 v5; // si
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbp
  int FrameNumber; // r12d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned int *v18; // rdx
  unsigned int Ulong; // ecx
  unsigned int *v20; // rdx
  __int64 v21; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+20h] [rbp-48h]
  unsigned int v25; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+18h] BYREF
  int v27; // [rsp+88h] [rbp+20h] BYREF

  v25 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v4 = 0;
  v5 = 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  if ( KeGetCurrentIrql() < 2u )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v3 + 8));
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v8 = *(_QWORD *)(v3 + 8);
    LODWORD(v24) = *(_DWORD *)(v3 + 32);
    McTemplateK0pq_EtwWriteTransfer((unsigned int)v24, &USBXHCI_ETW_EVENT_INTERRUPT_V2, v7, *(_QWORD *)(v8 + 8), v24);
  }
  v9 = *(_QWORD *)(v3 + 8);
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v9 + 1064) )
  {
    v10 = MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)(*(_QWORD *)(v9 + 1152) + 15000000LL) )
    {
      FrameNumber = Controller_GetFrameNumber(v9, 0, &v26, &v27);
      if ( !v26 )
      {
        if ( v27 )
        {
          ++*(_DWORD *)(v9 + 1212);
        }
        else
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v13 = FrameNumber - *(_DWORD *)(v9 + 1176);
          v14 = v10 - *(_QWORD *)(v9 + 1160);
          if ( FrameNumber == *(_DWORD *)(v9 + 1176) || !v14 || v13 > 0x1DCD6500 || v14 > 0x1DCD6500 )
            goto LABEL_17;
          v15 = 10000 * v13;
          v16 = (unsigned int)v15;
          v17 = v15 - v14;
          if ( v16 <= v14 )
            v17 = v14 - v16;
          if ( v17 > 0x5F5E100 )
          {
LABEL_17:
            ++*(_DWORD *)(v9 + 1208);
          }
          else
          {
            *(_QWORD *)(v9 + 1192) = PerformanceCounter.QuadPart - *(_QWORD *)(v9 + 1128);
            *(_QWORD *)(v9 + 1200) = (unsigned int)(8 * (FrameNumber - *(_DWORD *)(v9 + 1136)) - *(_DWORD *)(v9 + 1144));
          }
          *(LARGE_INTEGER *)(v9 + 1168) = PerformanceCounter;
          *(_QWORD *)(v9 + 1160) = v10;
          *(_DWORD *)(v9 + 1176) = FrameNumber;
        }
        *(_QWORD *)(v9 + 1152) = v10;
      }
    }
  }
  if ( v25 || (*(_DWORD *)(v3 + 112) & 1) != 0 )
  {
    ++*(_DWORD *)(v3 + 40);
    Interrupter_DeferToDpcOrWorkItem(a1);
  }
  else
  {
    v18 = *(unsigned int **)(v3 + 24);
    if ( *(_BYTE *)(v6 + 137) )
      Ulong = *v18;
    else
      Ulong = XilRegister_ReadUlong(v6, v18);
    if ( (Ulong & 1) != 0 )
    {
      v20 = *(unsigned int **)(v3 + 24);
      if ( *(_BYTE *)(v6 + 137) || (v21 = *(_QWORD *)(v6 + 8), v25 = Ulong, !*(_BYTE *)(v21 + 1001)) )
      {
        *v20 = Ulong;
        _InterlockedOr(v23, 0);
        ++*(_DWORD *)(v3 + 40);
        Interrupter_DeferToDpcOrWorkItem(a1);
      }
      else
      {
        Register_WriteSecureMmio(v6, (__int64)v20, 2u, &v25);
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
