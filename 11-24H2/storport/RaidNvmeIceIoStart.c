/*
 * XREFs of RaidNvmeIceIoStart @ 0x140072D4C
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400A8EE0 (StorEtwNVMeICEInterfaceEvent.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidNvmeIceIoStart(
        __int64 a1,
        ULONG_PTR a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v9; // r14
  unsigned int v13; // ebx
  ULONG_PTR v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, ULONG_PTR); // rax
  unsigned int v21; // eax
  __int128 *v22; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v9 = a6;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
    || a1 && a3 && a4 && (a5 || a6 || a7) )
  {
    if ( *(_BYTE *)(a1 + 2) == 40 )
      v15 = *(_QWORD *)(a1 + 96);
    else
      v15 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v15 + 800) == -1 )
      return 0;
    *(_DWORD *)(v15 + 812) = a3;
    *(_DWORD *)(v15 + 816) = a4;
    *(_QWORD *)(v15 + 856) = a5;
    if ( a4 != 2 )
      v9 = 0LL;
    if ( a4 <= 2 )
      v7 = 0LL;
    *(_QWORD *)(v15 + 864) = v9;
    *(_QWORD *)(v15 + 872) = v7;
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a2 )
      {
        v16 = *(_QWORD *)(v15 + 160);
        v22 = 0LL;
        v23 = 0LL;
        IoGetAdapterCryptoEngineExtension(v16, &v22);
        v17 = *(_QWORD *)(v15 + 224);
        v23 = *v22;
        if ( !is_mul_ok(a2, *(unsigned int *)(v17 + 932))
          || (*(int (__fastcall **)(_QWORD, __int128 *, ULONG_PTR))(*((_QWORD *)v22 + 1) + 96LL))(
               *(_QWORD *)(*((_QWORD *)v22 + 1) + 104LL),
               &v23,
               a2 * *(unsigned int *)(v17 + 932)) < 0 )
        {
          KeBugCheckEx(0x176u, 2uLL, 5uLL, v15, a2);
        }
        *(_QWORD *)(v15 + 832) = v23;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v15 + 224) + 3600LL);
      v19 = *(_QWORD *)(v18 + 48);
    }
    else
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v15 + 216) + 6192LL);
      v19 = *(_QWORD *)(v18 + 40);
    }
    v20 = *(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v19 + 56);
    if ( !v20 )
    {
      return 0;
    }
    else
    {
      v21 = v20(*(_QWORD *)(v19 + 8), v15 + 808);
      v13 = v21;
      if ( v21 == -1056964596 )
      {
        StorEtwNVMeICEInterfaceEvent(
          *(_QWORD *)(v15 + 216),
          v18,
          -1056964596,
          (unsigned int)L"NVMe ICE IOStart returned a transient error.",
          3);
      }
      else if ( v21 )
      {
        StorEtwNVMeICEInterfaceEvent(*(_QWORD *)(v15 + 216), v18, v21, (unsigned int)L"NVMe ICE IOStart failed.", 2);
        KeBugCheckEx(0x176u, 2uLL, 2uLL, v15, v13);
      }
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v13;
}
