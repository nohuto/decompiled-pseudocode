/*
 * XREFs of MmCreateTeb @ 0x1408DE4D4
 * Callers:
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 */

__int64 __fastcall MmCreateTeb(ULONG_PTR BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  int v7; // edi
  __int64 v8; // r13
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int16 v16; // ax
  char v17; // al
  _OWORD v19[3]; // [rsp+38h] [rbp-60h] BYREF

  memset(v19, 0, sizeof(v19));
  v7 = 4;
  v8 = 0LL;
  v9 = *(__int64 **)(BugCheckParameter1 + 784);
  if ( v9 )
    v8 = *v9;
  if ( v8 )
  {
    if ( !v9
      || ((v16 = *(_WORD *)(BugCheckParameter1 + 1772), v16 == 332) || v16 == 452 ? (v17 = 1) : (v17 = 0), v7 = 5, !v17) )
    {
      v7 = 6;
    }
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v19);
  v11 = 6264LL;
  if ( v7 != 4 )
  {
    if ( v7 == 5 )
      v11 = 12344LL;
    else
      v11 = 14456LL;
  }
  v12 = MiAllocateFromSubAllocatedRegion(v10, (v11 + 4095) & 0xFFFFF000LL);
  if ( v12 < 0 )
  {
    KiUnstackDetachProcess((__int64)v19, 0, v13, v14);
    return (unsigned int)v12;
  }
  MEMORY[0x20] = 7680;
  MEMORY[0x30] = 0LL;
  MEMORY[0x48] = a3[1];
  MEMORY[0x40] = *a3;
  MEMORY[0x2E8] = 65534;
  MEMORY[0x7E0] = a3[1];
  MEMORY[0x7D8] = *a3;
  MEMORY[0x125A] = 522;
  MEMORY[0x1260] = 4712LL;
  MEMORY[0x60] = *(_QWORD *)(BugCheckParameter1 + 736);
  MEMORY[8] = *(_QWORD *)(a2 + 16);
  MEMORY[0x10] = *(_QWORD *)(a2 + 24);
  MEMORY[0x1478] = *(_QWORD *)(a2 + 32);
  if ( v7 == 5 )
  {
    MEMORY[0x2010] = 7680;
    MEMORY[0x2018] = 0x2000;
    MEMORY[0x2024] = *((_DWORD *)a3 + 2);
    MEMORY[0x2020] = *(_DWORD *)a3;
    MEMORY[0x21D0] = 65534;
    MEMORY[0x26B8] = *((_DWORD *)a3 + 2);
    MEMORY[0x26B4] = *(_DWORD *)a3;
    MEMORY[0x2BFA] = 522;
    MEMORY[0x2BFC] = 11264;
    MEMORY[0x2000] = -1;
    MEMORY[0x2030] = v8;
    MEMORY[0x2F70] = 0;
    MEMORY[0x2F18] = MEMORY[0x1690];
    MEMORY[0x2004] = *(_DWORD *)(a2 + 40);
    MEMORY[0x2008] = *(_DWORD *)(a2 + 48);
    MEMORY[0x2E0C] = *(_DWORD *)(a2 + 56);
    MEMORY[0x180C] = 0x2000;
    MEMORY[0x2FDC] = -8192;
  }
  else
  {
    if ( v7 != 6 )
      goto LABEL_11;
    MEMORY[0x2020] = 7680;
    MEMORY[0x2030] = 0x2000LL;
    MEMORY[0x2048] = a3[1];
    MEMORY[0x2040] = *a3;
    MEMORY[0x22E8] = 65534;
    MEMORY[0x27E0] = a3[1];
    MEMORY[0x27D8] = *a3;
    MEMORY[0x325A] = 522;
    MEMORY[0x3260] = 12904LL;
    MEMORY[0x2060] = v8;
    MEMORY[0x3740] = 0;
    MEMORY[0x3690] = MEMORY[0x1690];
    MEMORY[0x2008] = *(_QWORD *)(a2 + 40);
    MEMORY[0x2010] = *(_QWORD *)(a2 + 48);
    MEMORY[0x3478] = *(_QWORD *)(a2 + 56);
    MEMORY[0x180C] = 0x2000;
    MEMORY[0x380C] = -8192;
  }
  MEMORY[0] = 0x2000LL;
LABEL_11:
  KiUnstackDetachProcess((__int64)v19, 0, 7680LL, 65534LL);
  *a5 = 0LL;
  return (unsigned int)v12;
}
