/*
 * XREFs of MiCallImageNotify @ 0x140ABD9B4
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406F74AC (MiDriverLoadSucceeded.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     PsCallImageNotifyRoutines @ 0x140922440 (PsCallImageNotifyRoutines.c)
 */

void __fastcall MiCallImageNotify(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // r8
  ULONG_PTR v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  v12 = 0LL;
  v2 = *(_QWORD *)(a1 + 112);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v4 = (__int64 *)MiSectionControlArea(v2);
  v5 = *v4;
  BYTE8(v9) = 3;
  v6 = *(unsigned __int8 *)(v5 + 15);
  DWORD2(v10) = 0;
  DWORD2(v11) = 0;
  DWORD2(v9) = DWORD2(v9) ^ (WORD4(v9) ^ (unsigned __int16)((_WORD)v6 << 12)) & 0xF000 ^ ((v6 << 12) ^ DWORD2(v9) ^ (WORD4(v9) ^ (unsigned __int16)((_WORD)v6 << 12)) & 0xF000) & 0x70000 | 0x100;
  *(_QWORD *)&v11 = *(unsigned int *)(v7 + 64);
  *(_QWORD *)&v10 = *(_QWORD *)(v7 + 48);
  v8 = MiReferenceControlAreaFile((__int64)v4);
  PsCallImageNotifyRoutines(a2, 0LL, &v9, v8);
  MiDereferenceControlAreaFile((__int64)v4, v8);
}
