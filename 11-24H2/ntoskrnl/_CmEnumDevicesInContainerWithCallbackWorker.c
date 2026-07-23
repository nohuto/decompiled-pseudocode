/*
 * XREFs of _CmEnumDevicesInContainerWithCallbackWorker @ 0x14081A4A8
 * Callers:
 *     _CmEnumDevicesInContainerWithCallback @ 0x14081A358 (_CmEnumDevicesInContainerWithCallback.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpCtxRegEnumKey @ 0x14097D774 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegEnumValue @ 0x14097E5DC (_PnpCtxRegEnumValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmEnumDevicesInContainerWithCallbackWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  void *Pool2; // rdi
  int v7; // r15d
  int v8; // esi
  int v10; // ebx
  int v11; // edx
  HANDLE v12; // rcx
  unsigned int v13; // r14d
  int v14; // eax
  __int64 v15; // rcx
  unsigned int i; // esi
  int v17; // eax
  unsigned int v18; // eax
  _BYTE v20[8]; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v21; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-8h] BYREF

  v23 = 0LL;
  Pool2 = 0LL;
  v21 = 0LL;
  v7 = 0;
  v8 = a3;
  if ( (_WORD)a6 )
    return (unsigned int)-1073741811;
  if ( a3 )
    goto LABEL_6;
  v10 = PnpOpenObjectRegKey(a1, a2, 5, 1, 0, (__int64)&v23);
  if ( v10 < 0 )
    goto LABEL_35;
  v11 = (int)v23;
  if ( !v23 )
LABEL_6:
    v11 = v8;
  v10 = PnpCtxRegOpenKey(a1, v11, (unsigned int)L"BaseContainers", 0, 8, (__int64)&v21);
  if ( v10 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x52504E50u);
    if ( Pool2 )
    {
      v13 = 0;
      while ( 1 )
      {
        Handle = 0LL;
        a6 = 200;
        v14 = PnpCtxRegEnumKey(v12, v21, v13, Pool2, &a6);
        v10 = v14;
        if ( v14 == -2147483622 )
          break;
        if ( v14 != -1073741789 )
        {
          if ( v14 < 0 )
            goto LABEL_35;
          v10 = PnpCtxRegOpenKey(a1, (_DWORD)v21, (_DWORD)Pool2, 0, 1, (__int64)&Handle);
          if ( v10 < 0 )
            goto LABEL_35;
          for ( i = 0; ; ++i )
          {
            do
            {
              a6 = 200;
              v17 = PnpCtxRegEnumValue(v15, Handle, i, Pool2, &a6, v20, 0LL, 0LL);
              v10 = v17;
              if ( v17 == -2147483622 )
              {
                v10 = 0;
                goto LABEL_27;
              }
            }
            while ( v17 == -1073741789 );
            if ( v17 < 0 )
              goto LABEL_27;
            v7 = guard_dispatch_icall_no_overrides(a1, Pool2);
            if ( v7 )
              break;
          }
          if ( v7 != 1 && v7 != 2 )
          {
            if ( v7 == 3 )
              v10 = -1073741248;
            else
              v10 = -1073741595;
          }
LABEL_27:
          v12 = Handle;
          if ( Handle )
            ZwClose(Handle);
          if ( v10 < 0 )
            goto LABEL_35;
          if ( v7 == 2 )
            goto LABEL_37;
          v18 = v13 + 1;
          v13 = 0;
          if ( v7 != 1 )
            v13 = v18;
        }
      }
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    goto LABEL_37;
  }
LABEL_35:
  if ( v10 == -1073741444 )
    v10 = -1073741772;
LABEL_37:
  if ( v21 )
    ZwClose(v21);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)v10;
}
