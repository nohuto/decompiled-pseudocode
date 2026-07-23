/*
 * XREFs of KiInitializeAndStartInitialThread @ 0x1405C03D4
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     PsInitializeThreadRngState @ 0x14047A17C (PsInitializeThreadRngState.c)
 *     KiStartIdleThread @ 0x1405C07E0 (KiStartIdleThread.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 */

__int64 __fastcall KiInitializeAndStartInitialThread(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r9
  _DWORD *v10; // rcx
  _QWORD v12[4]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+40h] [rbp-48h]
  void *v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+5Ch] [rbp-2Ch]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v7 = 6;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v7 = 7;
    v8 = *(_QWORD *)(a1 + 1056);
    v9 = *(_QWORD *)(*(_QWORD *)(a4 + 240) + 3712LL) + 4112LL;
    *(_QWORD *)(a1 + 1048) = v9;
    *(_QWORD *)(a1 + 1056) = v8 & 0xFFFFFFFFFFFFFFFAuLL ^ (v8 ^ (v9 - 12288)) & 0xFFFFFFFFFFFFF002uLL | 2;
  }
  *(_QWORD *)(a1 + 576) = &KiBootProcessorIdleThreadAffinity;
  *(_QWORD *)(a1 + 552) = &KiBootProcessorIdleThreadUserAffinity;
  dword_140FCD194 = 0;
  KiBootProcessorIdleThreadAffinity = 2097153;
  memset_0(&unk_140FCD198, 0, 0x100uLL);
  v10 = *(_DWORD **)(a1 + 552);
  v10[1] = 0;
  *v10 = 2097153;
  memset_0(v10 + 2, 0, 0x100uLL);
  v17 = 0LL;
  v12[2] = 0LL;
  v12[3] = 0LL;
  v14 = &KiInitialProcess;
  KiInitialLockEntriesBuffer = a1;
  byte_140E1578C = 6;
  *(_QWORD *)(a1 + 1136) = &KiInitialLockEntriesBuffer;
  v13 = 0LL;
  v15 = 1;
  v12[0] = a2;
  v12[1] = KiIdleLoop;
  v16 = v7;
  KeInitThread(a1, v12);
  *(_QWORD *)(a1 + 1248) = KiIdleLoop;
  *(_QWORD *)(a1 + 1696) = &KiIdleThreadName;
  *(_QWORD *)(a1 + 1376) = KiIdleLoop;
  PsInitializeThreadRngState(a1);
  *(_QWORD *)(a1 + 1528) = a1 + 1520;
  *(_QWORD *)(a1 + 1520) = a1 + 1520;
  *(_QWORD *)(a1 + 1544) = a1 + 1536;
  *(_QWORD *)(a1 + 1536) = a1 + 1536;
  *(_QWORD *)(a1 + 1552) = 0LL;
  *(_BYTE *)(a1 + 1831) = -1;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x15u);
  return KiStartIdleThread(a1, a3, a2);
}
