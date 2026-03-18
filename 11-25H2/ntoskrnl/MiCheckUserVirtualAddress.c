/*
 * XREFs of MiCheckUserVirtualAddress @ 0x1402437D0
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x140243150 (MiCheckProtoAccess.c)
 *     MiCheckVirtualAddress @ 0x140243540 (MiCheckVirtualAddress.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiIsVadLargePrivate @ 0x1402A82E0 (MiIsVadLargePrivate.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rdi
  __int64 ProtoPteAddress; // rdx
  char v11; // al
  int v12; // ecx
  _QWORD *v13; // r8
  __int64 result; // rax
  int v15; // eax
  int IsVadLargePrivate; // eax
  int v17; // r9d
  __int64 LockedVadEvent; // rax
  __int64 v19; // rax
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140E2D828;
      *a4 = 1;
      return result;
    }
    if ( v7 == qword_140E2D838 && v7 )
    {
      result = qword_140E2D830;
      *a4 = 1;
      return result;
    }
  }
  if ( !MmVadEventBlockFixEnabled && (*(_DWORD *)(a2 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a2 + 64) & 0x10) != 0 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a2, 32LL);
    if ( LockedVadEvent )
    {
      if ( *(struct _KTHREAD **)(LockedVadEvent + 8) != KeGetCurrentThread() )
        goto LABEL_39;
    }
  }
  v8 = *(_DWORD *)(a2 + 48);
  if ( (v8 & 4) != 0 )
    goto LABEL_39;
  if ( MmVadEventBlockFixEnabled && (v8 & 0x70) == 0x20 && (*(_DWORD *)(a2 + 64) & 0x10) != 0 )
  {
    MiLockVadCore(a2, 1LL);
    v19 = MiLocateLockedVadEvent(a2, 32LL);
    if ( v19 && *(struct _KTHREAD **)(v19 + 8) != KeGetCurrentThread() )
    {
      _InterlockedAnd((volatile signed __int32 *)(a2 + 48), 0x7FFFFFFCu);
      goto LABEL_39;
    }
    _InterlockedAnd((volatile signed __int32 *)(a2 + 48), 0x7FFFFFFCu);
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
  {
    v15 = *(_DWORD *)(a2 + 48) & 0x70;
    if ( v15 == 16 || v15 == 48 )
    {
      v17 = 24;
    }
    else
    {
      IsVadLargePrivate = MiIsVadLargePrivate(a2);
      v17 = 24;
      if ( !IsVadLargePrivate && (*(_DWORD *)(a2 + 48) & 0x2000000) != 0 )
        v17 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
    }
    *a4 = v17;
    return 0LL;
  }
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 && (*(_BYTE *)(a2 + 48) & 0x70) != 0x50 )
  {
LABEL_39:
    *a4 = 24;
    return 0LL;
  }
  v9 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v9, 12LL, v20);
  if ( ProtoPteAddress )
  {
    v11 = *(_DWORD *)(a2 + 48) & 0x70;
    v12 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
    *a4 = v12;
    if ( v11 == 32 && v12 == 7 )
      *a4 = 256;
  }
  else
  {
    *a4 = 24;
  }
  v13 = *(_QWORD **)(a2 + 120);
  if ( (__int64)v13 < 0
    && v9 - (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) > (unsigned __int64)(*v13 - 1LL) >> 12 )
  {
    *a4 = 24;
  }
  return ProtoPteAddress;
}
