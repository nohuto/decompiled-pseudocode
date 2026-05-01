/*
 * XREFs of RmpLaunchAllRpcServers @ 0x180073D2C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpLaunchRpcServer @ 0x18006C430 (RmpLaunchRpcServer.c)
 *     RmpShutdownRpcServer @ 0x180073E78 (RmpShutdownRpcServer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 RmpLaunchAllRpcServers()
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rsi
  const WCHAR *v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rax
  void *v6; // rdx
  void **v7; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-38h] BYREF
  void *v10[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]

  v0 = 0;
  v1 = 0LL;
  *(_OWORD *)v10 = 0LL;
  v2 = 4LL;
  v11 = 0LL;
  while ( (unsigned int)v1 < 4 )
  {
    v3 = RmpRpcSddlStrings[v1];
    SecurityDescriptor = 0LL;
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(v3, 1u, &SecurityDescriptor, 0LL) )
    {
      v10[v1] = 0LL;
LABEL_6:
      v0 = -1073741823;
      goto LABEL_16;
    }
    v0 = 0;
    v10[v1] = SecurityDescriptor;
    v1 = (unsigned int)(v1 + 1);
  }
  if ( RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v10[0]) )
    goto LABEL_6;
  for ( i = 0LL; (unsigned int)i < 0xB; i = (unsigned int)(i + 1) )
  {
    v5 = dword_1800E7178[6 * i];
    if ( (_DWORD)v5 == 4 )
      v6 = 0LL;
    else
      v6 = v10[v5];
    v0 = RmpLaunchRpcServer(
           *(&RmpRpcBindings)[3 * i],
           (__int64)v6,
           v10[0],
           (RPC_BINDING_VECTOR **)&unk_1800E7180 + 3 * i);
    if ( v0 < 0 )
    {
      RmpShutdownRpcServer();
      break;
    }
  }
LABEL_16:
  v7 = v10;
  do
  {
    if ( *v7 )
      LocalFree(*v7);
    ++v7;
    --v2;
  }
  while ( v2 );
  return (unsigned int)v0;
}
