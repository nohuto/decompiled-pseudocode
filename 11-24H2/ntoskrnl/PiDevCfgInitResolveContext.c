/*
 * XREFs of PiDevCfgInitResolveContext @ 0x14094C71C
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14094CA3C (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x140736F4C (PiDrvDbResolveKeyFilePaths.c)
 *     PiDevCfgFreeResolveContext @ 0x14094C634 (PiDevCfgFreeResolveContext.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgInitResolveContext(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v5; // eax
  int v6; // ebx
  __int64 Pool2; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  int v11; // eax
  _DWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v14; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  Handle = 0LL;
  v13[1] = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 16) = 0LL;
  v14 = L"Variables";
  ObjectAttributes.RootDirectory = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  v13[0] = 1310738;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey((PHANDLE)(a3 + 16), 0x20019u, &ObjectAttributes);
  v6 = v5;
  if ( v5 != -1073741772 )
  {
    if ( v5 < 0 )
      goto LABEL_13;
    Pool2 = ExAllocatePool2(0x100uLL, 0x7F0uLL, 0x63647050u);
    *(_QWORD *)(a3 + 24) = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_13;
    }
    v8 = 0LL;
    v9 = 127LL;
    do
    {
      v10 = (_QWORD *)(v8 + *(_QWORD *)(a3 + 24));
      v8 += 16LL;
      v10[1] = v10;
      *v10 = v10;
      --v9;
    }
    while ( v9 );
  }
  v13[0] = 3014700;
  v14 = L"Setup\\ResolveFilePaths";
  v11 = IopOpenRegistryKeyEx(&Handle, a2, v13, 131097LL);
  v6 = v11;
  if ( v11 == -1073741772 || v11 == -1073741444 )
    goto LABEL_12;
  if ( v11 < 0 )
    goto LABEL_13;
  v6 = PiDrvDbResolveKeyFilePaths(a2);
  if ( v6 < 0 )
LABEL_12:
    v6 = 0;
  else
    PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, Handle, 0LL);
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  if ( v6 < 0 )
    PiDevCfgFreeResolveContext(a3);
  return (unsigned int)v6;
}
