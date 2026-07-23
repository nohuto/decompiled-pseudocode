/*
 * XREFs of PspSetupUserShadowStack @ 0x140914B74
 * Callers:
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140914D48 (PspReserveAndCommitUserShadowStack.c)
 */

__int64 __fastcall PspSetupUserShadowStack(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *ExtendedFeature; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // [rsp+30h] [rbp-31h] BYREF
  __int64 v23; // [rsp+38h] [rbp-29h] BYREF
  _OWORD v24[3]; // [rsp+40h] [rbp-21h] BYREF

  v23 = 0LL;
  v5 = a3[4];
  v9 = a3[2];
  memset(v24, 0, sizeof(v24));
  if ( v9 < v5 )
    return 3221225621LL;
  v11 = v9 - v5;
  v12 = a3[3];
  if ( v9 < v12 )
    return 3221225621LL;
  v13 = v9 - v12;
  if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 || v13 < 0x1000 || (v13 & 0xFFF) != 0 || v13 > v11 )
    return 3221225485LL;
  v14 = (v13 / 5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = v14 + 0x2000;
  if ( v11 >= v14 + 0x2000 )
    v15 = v11;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v24);
  v22 = 0LL;
  v16 = PspReserveAndCommitUserShadowStack(v15, v14, a5, (unsigned int)&v22, (__int64)&v23);
  if ( v16 < 0 )
  {
    v20 = v22;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a2 + 1232), 0xBu, 0LL);
      if ( ExtendedFeature )
      {
        *(_QWORD *)(*(int *)(a2 + 1248) + a2 + 1232) |= 0x800uLL;
        ExtendedFeature[1] = v23;
        *ExtendedFeature = 1LL;
      }
    }
    a3[8] = v22;
    *a4 |= 8u;
    v20 = 0LL;
  }
  if ( v20 )
  {
    v23 = 0LL;
    v22 = v20;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v22, &v23, 0x8000u, 0, 0x40000000);
  }
  KiUnstackDetachProcess((__int64)v24, 0, v17, v18);
  return (unsigned int)v16;
}
