/*
 * XREFs of PopBatteryInitialize @ 0x140A6AF9C
 * Callers:
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 *     IoSynchronousCallDriver @ 0x140374C50 (IoSynchronousCallDriver.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopBatteryInitialize(__int64 a1)
{
  unsigned int v1; // eax
  IRP *v3; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  int v6; // eax
  const char *v7; // rcx
  __int128 v8; // xmm1
  bool v9; // zf
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __m256i v12; // [rsp+70h] [rbp+17h] BYREF
  int v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh] BYREF
  char v15; // [rsp+9Ch] [rbp+43h]

  v1 = *(_DWORD *)(a1 + 108);
  v3 = *(IRP **)(a1 + 56);
  v13 = 0;
  memset(&v12.m256i_u64[1], 0, 24);
  v12.m256i_i64[0] = v1;
  IoReuseIrp(v3, -1073741637);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2703428;
  CurrentStackLocation[-1].Parameters.Create.Options = 12;
  CurrentStackLocation[-1].Parameters.Read.Length = 36;
  v3->AssociatedIrp.MasterIrp = (struct _IRP *)&v12;
  result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( result >= 0 )
  {
    v6 = v13;
    v7 = "non-rechargeable";
    v8 = *(_OWORD *)&v12.m256i_u64[2];
    v15 = 0;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)v12.m256i_i8;
    *(_OWORD *)(a1 + 128) = v8;
    *(_DWORD *)(a1 + 144) = v6;
    v9 = *(_BYTE *)(a1 + 116) == 0;
    v14 = *(_DWORD *)(a1 + 120);
    if ( !v9 )
      v7 = "rechargeable";
    DbgPrintEx(
      0x92u,
      2u,
      "\n"
      "Battery Information [%p]\n"
      "|-- Tag                 = %u\n"
      "|-- Capabilities        = 0x%08x\n"
      "|-- Technology          = %s\n"
      "|-- Chemistry           = %s\n"
      "|-- DesignedCapacity    = %u\n"
      "|-- FullChargedCapacity = %u\n"
      "|-- DefaultAlert1       = %u\n"
      "|-- DefaultAlert2       = %u\n"
      "|-- CriticalBias        = %u\n"
      "|-- CycleCount          = %u\n",
      a1,
      *(_DWORD *)(a1 + 108),
      *(_DWORD *)(a1 + 112),
      v7,
      &v14,
      *(_DWORD *)(a1 + 124),
      *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 132),
      *(_DWORD *)(a1 + 136),
      *(_DWORD *)(a1 + 140),
      *(_DWORD *)(a1 + 144));
    *(_DWORD *)(a1 + 104) = 3;
    v10 = (_QWORD *)(a1 + 64);
    v11 = (_QWORD *)qword_140F0AE78;
    if ( *(__int64 **)qword_140F0AE78 != &qword_140F0AE70 )
      __fastfail(3u);
    v10[1] = qword_140F0AE78;
    *v10 = &qword_140F0AE70;
    *v11 = v10;
    ++dword_140F0AE54;
    ++dword_140F0AECC;
    result = 0;
    qword_140F0AE78 = (__int64)v10;
    byte_140F0AE58 = 1;
  }
  return result;
}
