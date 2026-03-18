/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x1404586F0
 * Callers:
 *     IoPropagateIrpExtension @ 0x1404586D0 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402D5250 (IopAllocateIrpExtension.c)
 *     IopSetDiskIoAttributionExtension @ 0x14035D794 (IopSetDiskIoAttributionExtension.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140593CA4 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v9; // rax
  char v10; // cl
  __int64 IrpExtension; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 0LL;
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 200);
      v10 = *(_BYTE *)(a2 + 71);
      if ( v9 )
      {
        if ( v10 >= 0 )
        {
          *(_WORD *)(v9 + 2) |= 4u;
          *(_DWORD *)(v9 + 4) = v4;
          return 0LL;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 71) = v10 | 0x80;
      }
      *(_DWORD *)(a2 + 200) = v4;
    }
    return 0LL;
  }
  if ( (a4 & 2) != 0 && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 0);
    if ( !IrpExtension )
      return 3221225626LL;
    *(_OWORD *)(IrpExtension + 24) = *(_OWORD *)(v4 + 24);
  }
  if ( (a4 & 1) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v12 && (*(_BYTE *)(v12 + 2) & 4) != 0 )
    {
      v13 = *(_QWORD *)(a2 + 200);
      v14 = *(_BYTE *)(a2 + 71);
      if ( v13 )
      {
        if ( v14 >= 0 )
          *(_WORD *)(v13 + 2) |= 4u;
        else
          v13 = a2 + 196;
      }
      else
      {
        v13 = a2 + 196;
        *(_BYTE *)(a2 + 71) = v14 | 0x80;
      }
      *(_DWORD *)(v13 + 4) = *(_DWORD *)(v4 + 4);
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v15 && (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
    {
      v16 = IopAllocateIrpExtension(a2, 5);
      if ( !v16 )
        return 3221225626LL;
      *(_QWORD *)(v16 + 48) = a3 + *(_QWORD *)(v4 + 48);
      v17 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)(v16 + 40) = v17;
      v18 = *(_QWORD *)(v4 + 40);
      if ( *(_QWORD *)(v18 + 8) )
        guard_dispatch_icall_no_overrides(v18, v17);
    }
  }
  v19 = 1LL;
  if ( (a4 & 8) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v20 && (*(_BYTE *)(v20 + 2) & 0x40) != 0 )
      IopSetDiskIoAttributionExtension(a2, *(_QWORD *)(v4 + 16), (__int64)KeGetCurrentThread(), 1);
  }
  if ( (a4 & 0x10) == 0 || (v21 = *(_QWORD *)(a1 + 200), *(char *)(a1 + 71) < 0) || !v21 || *(char *)(v21 + 2) >= 0 )
  {
LABEL_51:
    if ( (a4 & 0x20) == 0 )
      return 0LL;
    v27 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || !v27 || !_bittest16((const signed __int16 *)(v27 + 2), 8u) )
      return 0LL;
    v28 = IopAllocateIrpExtension(a2, 8);
    if ( v28 )
    {
      *(_QWORD *)(v28 + 56) = *(_QWORD *)(v4 + 56);
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v25 = *(_QWORD *)(v4 + 48);
    if ( v25 )
    {
      v19 = (unsigned int)(*(_DWORD *)(v25 + 16) << 9);
      if ( !(_DWORD)v19 )
        return 3221225485LL;
    }
    if ( a3 % v19 )
      return 3221225485LL;
    v26 = IopAllocateIrpExtension(a2, 7);
    if ( !v26 )
      return 3221225626LL;
    *(_OWORD *)(v26 + 40) = *(_OWORD *)(v4 + 40);
    *(_QWORD *)(v26 + 40) += a3 / v19;
    goto LABEL_51;
  }
  v29 = 0LL;
  v22 = *(_QWORD *)(v4 + 48);
  v29 = *(_OWORD *)(v4 + 40);
  if ( !v22 || (result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v22 + 104), &v29), (int)result >= 0) )
  {
    v24 = IopAllocateIrpExtension(a2, 7);
    if ( !v24 )
      return 3221225626LL;
    *(_OWORD *)(v24 + 40) = v29;
    goto LABEL_51;
  }
  return result;
}
