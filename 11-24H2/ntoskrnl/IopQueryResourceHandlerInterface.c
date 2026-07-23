/*
 * XREFs of IopQueryResourceHandlerInterface @ 0x140A659A4
 * Callers:
 *     IoTranslateBusAddress @ 0x1405A1EA0 (IoTranslateBusAddress.c)
 *     IopDuplicateDetection @ 0x140722BDC (IopDuplicateDetection.c)
 *     IopSetupArbiterAndTranslators @ 0x140A65728 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryResourceHandlerInterface(int a1, __int64 a2, unsigned __int8 a3, unsigned __int16 **a4)
{
  __int64 v4; // rax
  __int64 v6; // r12
  int v9; // ecx
  GUID v10; // xmm0
  unsigned __int16 v11; // bx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v13; // rsi
  int v15; // ecx
  int v16; // ebx
  int v17; // edi
  __int16 v18; // [rsp+30h] [rbp-39h] BYREF
  GUID *v19; // [rsp+38h] [rbp-31h]
  unsigned __int16 v20; // [rsp+40h] [rbp-29h]
  __int16 v21; // [rsp+42h] [rbp-27h]
  unsigned __int16 *v22; // [rsp+48h] [rbp-21h]
  __int64 v23; // [rsp+50h] [rbp-19h]
  GUID v24; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a2 + 312);
  v6 = a3;
  v24 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 40) + 432LL) == *(_QWORD *)(a2 + 8) || (*(_DWORD *)(a2 + 48) & 0x1000) == 0 )
    return 3221225659LL;
  v9 = a1 - 1;
  if ( v9 )
  {
    v15 = v9 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        return 3221225485LL;
      v10 = GUID_LEGACY_DEVICE_DETECTION_STANDARD;
      v11 = 40;
    }
    else
    {
      v10 = GUID_ARBITER_INTERFACE_STANDARD;
      v11 = 48;
    }
  }
  else
  {
    v10 = GUID_TRANSLATOR_INTERFACE_STANDARD;
    v11 = 52;
  }
  v24 = v10;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, v11, 0x20207050u);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = v11;
  memset_0(&v18, 0, 0x48uLL);
  v18 = 2075;
  v19 = &v24;
  v20 = v11;
  v13[1] = 0;
  v21 = 0;
  v22 = v13;
  v23 = v6;
  v16 = IopSynchronousCall((_QWORD *)a2, (__int64)&v18, -1073741637, 0LL, 0LL);
  if ( v16 < 0 )
    goto LABEL_23;
  v17 = a1 - 1;
  if ( v17 )
  {
    if ( (unsigned int)(v17 - 1) >= 2 )
    {
      v16 = -1073741811;
LABEL_23:
      ExFreePoolWithTag(v13, 0);
      return (unsigned int)v16;
    }
    if ( !*((_QWORD *)v13 + 4) )
    {
      v16 = -1073741823;
      goto LABEL_23;
    }
  }
  else if ( !*((_QWORD *)v13 + 4) || !*((_QWORD *)v13 + 5) )
  {
    v16 = -1073741823;
    goto LABEL_23;
  }
  *a4 = v13;
  return (unsigned int)v16;
}
