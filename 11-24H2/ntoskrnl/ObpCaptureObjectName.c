/*
 * XREFs of ObpCaptureObjectName @ 0x1408A5650
 * Callers:
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureObjectName(char a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  const void *v6; // rcx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // di
  size_t v9; // r14
  unsigned int v10; // esi
  _DWORD *Pool2; // rbx
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // rdi
  _GENERAL_LOOKASIDE *L; // rdi
  unsigned int v16; // [rsp+24h] [rbp-64h]
  unsigned __int16 v17; // [rsp+2Ch] [rbp-5Ch]
  const void *Src_8; // [rsp+50h] [rbp-38h]

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)a3 = 0;
  v16 = 0;
  if ( a1 && KeGetCurrentThread()->PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    v6 = *(const void **)(v5 + 8);
    Src_8 = v6;
    if ( (unsigned __int16)*(_DWORD *)v5 && ((unsigned __int8)v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(_DWORD *)v5;
  }
  else
  {
    Src_8 = *(const void **)(a2 + 8);
    v7 = *(_WORD *)a2;
  }
  if ( v7 )
  {
    v8 = v7;
    v17 = v7;
    if ( (v7 & 1) != 0 || v7 == 65534 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      if ( (unsigned int)v7 + 2 < v7 )
        return (unsigned int)-1073741670;
      v9 = v7;
      v10 = v7 + 2;
      if ( a4 && v10 <= 0xF8 )
      {
        LOWORD(v10) = 248;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[5].P;
        ++P->TotalAllocates;
        Pool2 = RtlpInterlockedPopEntrySList(&P->ListHead);
        if ( !Pool2 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[5].L;
          ++L->TotalAllocates;
          Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
          if ( !Pool2 )
          {
            ++L->AllocateMisses;
            Pool2 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
          }
        }
        if ( Pool2 )
          *Pool2 = CurrentPrcb->Number;
        v8 = v17;
      }
      else
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v10, 0x6D4E624Fu);
      }
      *(_WORD *)a3 = v8;
      *(_WORD *)(a3 + 2) = v10;
      *(_QWORD *)(a3 + 8) = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Src_8, v9);
        *((_WORD *)Pool2 + (v9 >> 1)) = 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v16;
}
