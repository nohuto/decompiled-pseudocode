/*
 * XREFs of EtwpTraceContextRegisters @ 0x14064B6B8
 * Callers:
 *     EtwpContextRegisterTracingDispatcher @ 0x1404C7B30 (EtwpContextRegisterTracingDispatcher.c)
 *     EtwpContextRegisterTracingApc @ 0x14064ADC0 (EtwpContextRegisterTracingApc.c)
 * Callees:
 *     IoGetStackLimits @ 0x1402372D0 (IoGetStackLimits.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsGetUserContextThread @ 0x14091FADC (PsGetUserContextThread.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceContextRegisters(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  char v8; // di
  void *v9; // rsp
  char *Pool2; // rbx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  char P; // [rsp+10h] [rbp-4D0h] BYREF
  unsigned __int64 HighLimit; // [rsp+4E0h] [rbp+0h] BYREF
  unsigned __int64 LowLimit; // [rsp+4E8h] [rbp+8h] BYREF
  __int128 v16; // [rsp+4F0h] [rbp+10h] BYREF
  _QWORD v17[18]; // [rsp+500h] [rbp+20h] BYREF

  v16 = 0LL;
  memset_0(v17, 0, sizeof(v17));
  if ( (*(_DWORD *)(a1 + 1280) & 1) != 0 && (*(_DWORD *)(a1 + 1280) & 2) != 0 )
  {
    HighLimit = 0LL;
    LowLimit = 0LL;
    IoGetStackLimits(&LowLimit, &HighLimit);
    if ( (unsigned __int64)&HighLimit - LowLimit <= 0x9A0 )
    {
      v8 = 1;
      Pool2 = (char *)ExAllocatePool2(0x100uLL, 0x4D0uLL, 0x50777445u);
    }
    else
    {
      v8 = 0;
      v9 = alloca(1232LL);
      Pool2 = &P;
    }
    if ( Pool2 )
    {
      *((_DWORD *)Pool2 + 12) = 1048579;
      if ( (int)PsGetUserContextThread(a3, Pool2) >= 0 )
      {
        v11 = *(_DWORD *)a1;
        v12 = *(_QWORD *)(a1 + 1360);
        v17[0] = *a2;
        v17[1] = *((_QWORD *)Pool2 + 31);
        v17[2] = *((_QWORD *)Pool2 + 15);
        v17[3] = *((_QWORD *)Pool2 + 16);
        v17[4] = *((_QWORD *)Pool2 + 17);
        v17[5] = *((_QWORD *)Pool2 + 18);
        v17[6] = *((_QWORD *)Pool2 + 19);
        v17[7] = *((_QWORD *)Pool2 + 20);
        v17[8] = *((_QWORD *)Pool2 + 21);
        v17[9] = *((_QWORD *)Pool2 + 22);
        v17[10] = *((_QWORD *)Pool2 + 23);
        v17[11] = *((_QWORD *)Pool2 + 24);
        v17[12] = *((_QWORD *)Pool2 + 25);
        v17[13] = *((_QWORD *)Pool2 + 26);
        v17[14] = *((_QWORD *)Pool2 + 27);
        v17[15] = *((_QWORD *)Pool2 + 28);
        v17[16] = *((_QWORD *)Pool2 + 29);
        v17[17] = *((_QWORD *)Pool2 + 30);
        *(_QWORD *)&v16 = v17;
        *((_QWORD *)&v16 + 1) = 144LL;
        EtwpLogKernelEvent((__int64)&v16, v12, v11, 1u, 3962, a4 & 0xFFFFE600 | 2);
      }
      if ( v8 )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
}
