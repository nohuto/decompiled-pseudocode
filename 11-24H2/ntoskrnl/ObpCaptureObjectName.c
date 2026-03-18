/*
 * XREFs of ObpCaptureObjectName @ 0x14089CFB0
 * Callers:
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v15; // r9
  unsigned int v17; // [rsp+24h] [rbp-64h]
  unsigned __int16 v18; // [rsp+2Ch] [rbp-5Ch]
  const void *Src_8; // [rsp+50h] [rbp-38h]

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)a3 = 0;
  v17 = 0;
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
    v18 = v7;
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
            Pool2 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag, v15);
          }
        }
        if ( Pool2 )
          *Pool2 = CurrentPrcb->Number;
        v8 = v18;
      }
      else
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
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
  return v17;
}
