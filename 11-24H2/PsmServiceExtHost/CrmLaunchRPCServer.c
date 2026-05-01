/*
 * XREFs of CrmLaunchRPCServer @ 0x18007BAE0
 * Callers:
 *     CrmGlobalsStart @ 0x180078A68 (CrmGlobalsStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmLaunchRPCServer(RPC_BINDING_VECTOR **a1)
{
  DWORD LastError; // ebx
  int v3; // eax
  RPC_STATUS v4; // eax
  bool v5; // cc
  RPC_BINDING_VECTOR *v6; // rax
  RPC_BINDING_VECTOR *BindingVector; // [rsp+58h] [rbp+10h] BYREF
  HLOCAL hMem; // [rsp+60h] [rbp+18h] BYREF

  hMem = 0LL;
  BindingVector = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;SY)(A;;GRGWGX;;;LS)(A;;GR;;;NS)(A;;GR;;;IU)",
          1u,
          &hMem,
          0LL) )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      goto LABEL_15;
    }
    LOWORD(v3) = GetLastError();
    goto LABEL_5;
  }
  v3 = RpcServerRegisterIf3(&unk_1800BFF30, 0LL, 0LL, 41LL, 1234, 0, 0LL, hMem);
  LastError = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
LABEL_5:
      LastError = (unsigned __int16)v3 | 0xC0070000;
  }
  else
  {
    v4 = RpcServerInqBindings(&BindingVector);
    LastError = v4;
    v5 = v4 <= 0;
    if ( v4 || (v4 = RpcEpRegisterW(&unk_1800BFF30, BindingVector, 0LL, 0LL), LastError = v4, v5 = v4 <= 0, v4) )
    {
      if ( !v5 )
        LastError = (unsigned __int16)v4 | 0xC0070000;
      RpcServerUnregisterIf(&unk_1800BFF30, 0LL, 0);
    }
    else
    {
      v6 = BindingVector;
      BindingVector = 0LL;
      LastError = 0;
      *a1 = v6;
    }
  }
LABEL_15:
  if ( hMem )
    LocalFree(hMem);
  if ( BindingVector )
    RpcBindingVectorFree(&BindingVector);
  return LastError;
}
