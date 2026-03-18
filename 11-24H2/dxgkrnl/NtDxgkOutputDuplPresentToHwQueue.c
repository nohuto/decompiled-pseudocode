/*
 * XREFs of NtDxgkOutputDuplPresentToHwQueue @ 0x1402B90B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1401EB6FC (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1402B7698 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1402BA140 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1402BA484 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 */

__int64 __fastcall NtDxgkOutputDuplPresentToHwQueue(const void *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct _KTHREAD **v5; // r14
  size_t v6; // r8
  const void *v7; // rdx
  PVOID v8; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v17; // edx
  char *v18; // rsi
  struct _D3DKMT_MOVE_RECT *v19; // rbx
  const void *v20; // rdx
  unsigned int v21; // ecx
  char *v22; // r8
  unsigned int v23; // ebx
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+28h] [rbp-D0h]
  void *v27[9]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v29[16]; // [rsp+A0h] [rbp-58h] BYREF
  int v30; // [rsp+B0h] [rbp-48h]
  PVOID v31; // [rsp+B8h] [rbp-40h] BYREF
  _BYTE v32[16]; // [rsp+C0h] [rbp-38h] BYREF
  int v33; // [rsp+D0h] [rbp-28h]

  memset(v27, 0, 0x40uLL);
  Current = DXGPROCESS::GetCurrent(v2);
  v5 = (struct _KTHREAD **)Current;
  v27[8] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2961;
    v26 = PsGetCurrentProcess(v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v26,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Current + 102) & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2968;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Function can only be called from DWM process",
      2968LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  P = 0LL;
  v30 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v27, a1, 0x40uLL);
  if ( !LODWORD(v27[1]) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2980;
    if ( P != v29 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v30 = 0;
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P) )
  {
    if ( P != v29 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v30 = 0;
    return 3221225495LL;
  }
  v6 = 4LL * LODWORD(v27[1]);
  v7 = v27[2];
  v8 = P;
  if ( (char *)v27[2] + v6 < v27[2] || (char *)v27[2] + v6 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v8, v7, v6);
  v27[2] = P;
  v10 = 16LL * LODWORD(v27[3]);
  v11 = 0xFFFFFFFFLL;
  if ( v10 <= 0xFFFFFFFF )
    v11 = (unsigned int)v10;
  v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3008;
    if ( P != v29 && P )
      ExFreePoolWithTag(P, 0);
    return v12;
  }
  v13 = 24LL * LODWORD(v27[5]);
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = 24 * LODWORD(v27[5]);
  v15 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3015;
    goto LABEL_56;
  }
  v16 = v14 + v11;
  v17 = -1;
  if ( v14 + (unsigned int)v11 >= v14 )
    v17 = v14 + v11;
  v15 = v16 < v14 ? 0xC0000095 : 0;
  if ( v16 < v14 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3022;
LABEL_56:
    if ( P != v29 && P )
      ExFreePoolWithTag(P, 0);
    return v15;
  }
  v31 = 0LL;
  v33 = 0;
  if ( !v17 )
  {
    v27[4] = 0LL;
    v27[6] = 0LL;
LABEL_42:
    v23 = OutputDuplPresentToHwQueue((struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *)v27, v5);
    if ( v31 != v32 && v31 )
      ExFreePoolWithTag(v31, 0);
    v31 = 0LL;
    v33 = 0;
    if ( P != v29 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return v23;
  }
  v18 = (char *)PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&v31);
  if ( v18 )
  {
    v19 = (struct _D3DKMT_MOVE_RECT *)&v18[16 * LODWORD(v27[3])];
    if ( LODWORD(v27[3]) )
    {
      v20 = v27[4];
      if ( (char *)v27[4] + v11 < v27[4] || (char *)v27[4] + v11 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v18, v20, (unsigned int)v11);
      v27[4] = v18;
    }
    else
    {
      v27[4] = 0LL;
    }
    v21 = (unsigned int)v27[5];
    if ( LODWORD(v27[5]) )
    {
      if ( v14 )
      {
        v22 = (char *)v27[6] + v14;
        if ( (unsigned __int64)v22 > MmUserProbeAddress || v22 < v27[6] )
          v21 = (unsigned int)v27[5];
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v21, (const struct _D3DKMT_MOVE_RECT *)v27[6], v19);
      v27[6] = v19;
    }
    else
    {
      v27[6] = 0LL;
    }
    goto LABEL_42;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3034;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to alloc buffer for kernel copy of meta data.",
    3034LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v31 != v32 && v31 )
    ExFreePoolWithTag(v31, 0);
  v31 = 0LL;
  v33 = 0;
  if ( P != v29 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
