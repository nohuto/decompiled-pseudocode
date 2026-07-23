/*
 * XREFs of PiProcessSetDeviceProblem @ 0x140721D58
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpLogDeviceRequiresReboot @ 0x140720F0C (PnpLogDeviceRequiresReboot.c)
 *     PipIsProblemReadonly @ 0x140722134 (PipIsProblemReadonly.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessSetDeviceProblem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // edx
  unsigned int v10; // ebp
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  P = 0LL;
  v5 = *(_DWORD **)(a1 + 40);
  v6 = *(_QWORD *)(v3 + 312);
  v7 = *(_QWORD *)(v6 + 40);
  if ( (unsigned int)(*(_DWORD *)(v7 + 300) - 789) <= 1 )
  {
    v8 = -1073741738;
  }
  else
  {
    v8 = 0;
    PiPnpRtlBeginOperation(&P, v6, a3);
    v9 = v5[5];
    v10 = (v9 >> 18) & 1 | 4;
    if ( (v9 & 0x100) == 0 )
      v10 = (v5[5] >> 18) & 1;
    v11 = (v5[5] >> 1) & 0x4000 | 0x2000;
    if ( (v9 & 0x400) == 0 )
      v11 = (v5[5] >> 1) & 0x4000;
    v12 = v11;
    if ( v5[6] == 14 )
    {
      v13 = *(_DWORD *)(v7 + 300);
      if ( v13 != 772 && v13 != 771 && v13 != 788 )
      {
        v12 = v11 & 0xFFFFDFFF;
        PnpLogDeviceRequiresReboot(v7);
      }
      v10 |= 4u;
    }
    if ( !v12 )
      goto LABEL_19;
    v14 = *(_DWORD *)(v7 + 300);
    if ( ((v14 - 771) & 0xFFFFFFEE) == 0 && v14 != 787 )
    {
      if ( (v12 & 0x4000) != 0
        || (v15 = (unsigned int)v5[6], (unsigned int)v15 < 0x3A) && !(unsigned int)PipIsProblemReadonly(v7, v15) )
      {
        PipSetDevNodeProblem(v7, (unsigned int)v5[6], (unsigned int)v5[8]);
LABEL_19:
        PipSetDevNodeFlags(v7, v12);
        PipSetDevNodeUserFlags(v7, v10);
        goto LABEL_22;
      }
    }
    v8 = -1073741584;
  }
LABEL_22:
  if ( (v5[7] & 1) != 0 )
  {
    ExFreePoolWithTag(v5, 0x55706E50u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( P )
    PiPnpRtlEndOperation(P);
  return v8;
}
