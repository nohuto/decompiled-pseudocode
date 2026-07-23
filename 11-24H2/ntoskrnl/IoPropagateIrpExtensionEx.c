/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x14025DFA0
 * Callers:
 *     IoPropagateIrpExtension @ 0x14025DF80 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14025CCA4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateIrpExtension @ 0x140435420 (IopAllocateIrpExtension.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140594334 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 IrpExtension; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 0LL;
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( (a4 & 1) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = v4;
    return 0LL;
  }
  v9 = 1LL;
  if ( (a4 & 2) != 0 && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 0LL);
    if ( !IrpExtension )
      return 3221225626LL;
    *(_OWORD *)(IrpExtension + 24) = *(_OWORD *)(v4 + 24);
  }
  if ( (a4 & 1) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v10 && (*(_BYTE *)(v10 + 2) & 4) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = *(_DWORD *)(v4 + 4);
  }
  if ( (a4 & 4) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v11 && (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
    {
      v16 = IopAllocateIrpExtension(a2, 5LL);
      if ( !v16 )
        return 3221225626LL;
      *(_QWORD *)(v16 + 48) = a3 + *(_QWORD *)(v4 + 48);
      v20 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)(v16 + 40) = v20;
      v21 = *(_QWORD *)(v4 + 40);
      if ( *(_QWORD *)(v21 + 8) )
        guard_dispatch_icall_no_overrides(v21, v20, a3, v17);
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v12 && (*(_BYTE *)(v12 + 2) & 0x40) != 0 )
      IopSetDiskIoAttributionExtension(a2, *(_QWORD *)(v4 + 16), (__int64)KeGetCurrentThread(), 1);
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_23;
  v13 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v13 || *(char *)(v13 + 2) >= 0 )
    goto LABEL_23;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v25 = *(_QWORD *)(v4 + 48);
    if ( v25 )
    {
      v9 = (unsigned int)(*(_DWORD *)(v25 + 16) << 9);
      if ( !(_DWORD)v9 )
        return 3221225485LL;
    }
    if ( a3 % v9 )
      return 3221225485LL;
    v26 = IopAllocateIrpExtension(a2, 7LL);
    if ( !v26 )
      return 3221225626LL;
    *(_OWORD *)(v26 + 40) = *(_OWORD *)(v4 + 40);
    *(_QWORD *)(v26 + 40) += a3 / v9;
LABEL_23:
    if ( (a4 & 0x20) == 0 )
      return 0LL;
    v14 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || !v14 || !_bittest16((const signed __int16 *)(v14 + 2), 8u) )
      return 0LL;
    v18 = IopAllocateIrpExtension(a2, 8LL);
    if ( v18 )
    {
      *(_QWORD *)(v18 + 56) = *(_QWORD *)(v4 + 56);
      return 0LL;
    }
    return 3221225626LL;
  }
  v27 = 0LL;
  v23 = *(_QWORD *)(v4 + 48);
  v27 = *(_OWORD *)(v4 + 40);
  if ( !v23 || (result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v23 + 104), &v27, a3, v22), (int)result >= 0) )
  {
    v24 = IopAllocateIrpExtension(a2, 7LL);
    if ( !v24 )
      return 3221225626LL;
    *(_OWORD *)(v24 + 40) = v27;
    goto LABEL_23;
  }
  return result;
}
