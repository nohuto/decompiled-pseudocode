/*
 * XREFs of MiCheckUserVirtualAddress @ 0x140309FA0
 * Callers:
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x140309950 (MiCheckProtoAccess.c)
 *     MiCheckVirtualAddress @ 0x140309D30 (MiCheckVirtualAddress.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiVadExtentCommitted @ 0x14043EDF0 (MiVadExtentCommitted.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v7; // rax
  __int64 result; // rax
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  BOOL IsVadLargePrivate; // eax
  int v13; // r10d
  char v14; // al
  int v15; // ecx
  int v16; // r10d
  __int64 v17; // r11
  char v18[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140E2DBA8;
      *a4 = 1;
      return result;
    }
    if ( v7 == qword_140E2DBB8 && v7 )
    {
      result = qword_140E2DBB0;
      *a4 = 1;
      return result;
    }
  }
  v9 = *(_DWORD *)(a2 + 48);
  if ( (v9 & 4) != 0 )
    goto LABEL_20;
  if ( (v9 & 0x70) == 0x20 && (*(_DWORD *)(a2 + 64) & 0x10) != 0 )
  {
    MiLockVadCore(a2, 1LL);
    v10 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v10 )
    {
      while ( (*(_DWORD *)(v10 + 80) & 0x20) == 0 )
      {
        v10 = *(_QWORD *)v10;
        if ( !v10 )
          goto LABEL_13;
      }
      if ( *(struct _KTHREAD **)(v10 + 8) != KeGetCurrentThread() )
      {
        _InterlockedAnd((volatile signed __int32 *)(a2 + 48), 0x7FFFFFFCu);
LABEL_20:
        *a4 = 24;
        return 0LL;
      }
    }
LABEL_13:
    _InterlockedAnd((volatile signed __int32 *)(a2 + 48), 0x7FFFFFFCu);
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
  {
    v11 = *(_DWORD *)(a2 + 48) & 0x70;
    if ( v11 == 16 || v11 == 48 )
    {
      result = 0LL;
      *a4 = 24;
    }
    else
    {
      IsVadLargePrivate = MiIsVadLargePrivate(a2);
      v13 = 24;
      if ( !IsVadLargePrivate && (*(_DWORD *)(a2 + 48) & 0x2000000) != 0 )
        v13 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
      *a4 = v13;
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 64) & 1) != 0 && (*(_BYTE *)(a2 + 48) & 0x70) != 0x50 )
      goto LABEL_20;
    if ( MiGetProtoPteAddress(a2, a1 >> 12, 12LL, v18) )
    {
      v14 = *(_DWORD *)(a2 + 48) & 0x70;
      v15 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
      *a4 = v15;
      if ( v14 == 32 && v15 == 7 )
        *a4 = 256;
    }
    else
    {
      *a4 = 24;
    }
    if ( !(unsigned int)MiVadExtentCommitted(a2, a1) )
      *a4 = v16;
    return v17;
  }
  return result;
}
