/*
 * XREFs of KiAttachProcess @ 0x1402CAFF0
 * Callers:
 *     KeAttachProcess @ 0x140477330 (KeAttachProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     KiInSwapSingleProcess @ 0x1402D5EF4 (KiInSwapSingleProcess.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r10
  char v7; // bp
  unsigned __int64 v8; // r14
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  int v13; // ebp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // r13
  unsigned __int64 GroupIndex; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 result; // rax
  _QWORD *v21; // rax
  __int64 **v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 CurrentIrql; // rcx
  unsigned int v25; // r15d
  unsigned __int64 v26; // rax

  v5 = (_QWORD *)(a1 + 152);
  v7 = a4;
  v8 = (unsigned __int8)a3;
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a1 + 184);
  *(_BYTE *)(a5 + 40) = *(_BYTE *)(a1 + 192);
  *(_BYTE *)(a5 + 41) = *(_BYTE *)(a1 + 193);
  *(_BYTE *)(a5 + 42) = *(_BYTE *)(a1 + 194);
  v10 = *(_QWORD **)(a1 + 152);
  if ( v10 == v5 )
  {
    *(_QWORD *)(a5 + 8) = a5;
    *(_QWORD *)a5 = a5;
    *(_BYTE *)(a5 + 41) = 0;
  }
  else
  {
    v21 = (_QWORD *)v5[1];
    *(_QWORD *)a5 = v10;
    *(_QWORD *)(a5 + 8) = v21;
    v10[1] = a5;
    *v21 = a5;
  }
  v11 = v5[2];
  v12 = (__int64 *)(a5 + 16);
  if ( (_QWORD *)v11 == v5 + 2 )
  {
    *(_QWORD *)(a5 + 24) = a5 + 16;
    *v12 = (__int64)v12;
    *(_BYTE *)(a5 + 42) = 0;
  }
  else
  {
    v22 = (__int64 **)v5[3];
    *v12 = v11;
    *(_QWORD *)(a5 + 24) = v22;
    *(_QWORD *)(v11 + 8) = v12;
    *v22 = v12;
  }
  v5[1] = v5;
  *v5 = v5;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( a5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 264), 8u) & 7) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    KiInSwapSingleProcess(a1, a2, (unsigned __int8)a3);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v25);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  v13 = v7 & 2;
  if ( !v13 )
    *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = *(_QWORD *)(a5 + 32);
  GroupIndex = CurrentPrcb->GroupIndex;
  v17 = 8LL * CurrentPrcb->Group;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a2 + 128) + v17 + 8), GroupIndex);
  v18 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v19 = v18 | 0x8000000000000000uLL;
    if ( (v18 & 2) == 0 )
      v19 = *(_QWORD *)(a2 + 40);
    __writegsqword(0xB000u, v19);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 352), v11, a3, a4);
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(v18);
  else
    __writecr3(v18);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v23 = __readcr4();
    if ( (v23 & 0x20080) != 0 )
    {
      __writecr4(v23 ^ 0x80);
      __writecr4(v23);
    }
    else
    {
      v26 = __readcr3();
      __writecr3(v26);
    }
  }
  result = *(_QWORD *)(v15 + 128);
  _interlockedbittestandreset64((volatile signed __int32 *)(result + v17 + 8), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  if ( !v13 )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
    __writecr8(v8);
  }
  return result;
}
