/*
 * XREFs of VslCallEnclave @ 0x140A04094
 * Callers:
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KeAlertThreadByThreadId @ 0x1404B3500 (KeAlertThreadByThreadId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslCallEnclave(
        __int64 a1,
        int *a2,
        __int64 *a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __int64 CurrentThread; // rsi
  int v12; // ebx
  __int64 MemoryDescriptorList; // [rsp+40h] [rbp-F8h] BYREF
  __int16 MemoryDescriptorList_8; // [rsp+48h] [rbp-F0h]
  __int16 MemoryDescriptorList_10; // [rsp+4Ah] [rbp-EEh]
  __int128 MemoryDescriptorList_12; // [rsp+4Ch] [rbp-ECh]
  int MemoryDescriptorList_28; // [rsp+5Ch] [rbp-DCh]
  unsigned __int64 MemoryDescriptorList_32; // [rsp+60h] [rbp-D8h]
  int MemoryDescriptorList_40; // [rsp+68h] [rbp-D0h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+6Ch] [rbp-CCh]
  _BYTE v24[4]; // [rsp+80h] [rbp-B8h] BYREF
  int v25; // [rsp+84h] [rbp-B4h]
  int v26; // [rsp+88h] [rbp-B0h]
  int v27; // [rsp+8Ch] [rbp-ACh]
  __int64 v28; // [rsp+90h] [rbp-A8h]
  __int64 v29; // [rsp+98h] [rbp-A0h]
  __int64 v30; // [rsp+A0h] [rbp-98h]
  __int64 v31; // [rsp+A8h] [rbp-90h]
  __int64 v32; // [rsp+B0h] [rbp-88h]
  int v33; // [rsp+B8h] [rbp-80h]
  char v34; // [rsp+BCh] [rbp-7Ch]
  char v35; // [rsp+BDh] [rbp-7Bh]

  memset_0(v24, 0, 0x68uLL);
  MemoryDescriptorList_12 = 0LL;
  MemoryDescriptorList_28 = 0;
  *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList = 0LL;
  MemoryDescriptorList_8 = 8 * (((unsigned __int16)((CurrentThread & 0xFFF) + 6039) >> 12) + 6);
  MemoryDescriptorList_10 = 0;
  MemoryDescriptorList_32 = CurrentThread & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)MemoryDescriptorList_44 = CurrentThread & 0xFFF;
  MemoryDescriptorList_40 = 1944;
  MmProbeAndLockPages((PMDL)&MemoryDescriptorList, 0, IoWriteAccess);
  v26 = a4;
  v27 = *(_DWORD *)(a1 + 40);
  v28 = *a3;
  v29 = *a5;
  v30 = *(_QWORD *)&MemoryDescriptorList_44[4];
  v34 = 0;
  v31 = *a6;
  v32 = *a7;
  v12 = VslpEnterIumSecureMode(1u, 0, *a2, (__int64)v24);
  if ( v12 < 0 )
  {
    *a9 = 0;
  }
  else
  {
    *a2 = v25;
    *a3 = v28;
    *a5 = v29;
    *a8 = v33;
    *a6 = v31;
    *a7 = v32;
    *a9 = v35;
  }
  MmUnlockPages((PMDL)&MemoryDescriptorList);
  if ( v34 )
    KeAlertThreadByThreadId(CurrentThread);
  return (unsigned int)v12;
}
