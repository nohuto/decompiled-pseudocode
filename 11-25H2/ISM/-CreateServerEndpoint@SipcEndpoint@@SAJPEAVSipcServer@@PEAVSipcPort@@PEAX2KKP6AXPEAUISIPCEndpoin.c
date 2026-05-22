/*
 * XREFs of ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@52@ZP6AX3W4SIPC_ENDPOINT_STATUS@@2@Z2PEAPEAV1@@Z @ 0x18010CA98
 * Callers:
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@2PEAX@ZP6AX0W4SIPC_ENDPOINT_STATUS@@3@Z3PEAPEAU2@@Z @ 0x18010B410 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_.c)
 * Callees:
 *     ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x180096BF4 (-Attach@SipcWin32Handle@@QEAAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SipcEndpoint@@AEAA@PEAVSipcEndpointOwner@@W4SipcEndpointKind@@KKP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@4PEAX@ZP6AX2W4SIPC_ENDPOINT_STATUS@@5@Z5@Z @ 0x18010ACB8 (--0SipcEndpoint@@AEAA@PEAVSipcEndpointOwner@@W4SipcEndpointKind@@KKP6AXPEAUISIPCEndpoint@@W4SIPC.c)
 */

__int64 __fastcall SipcEndpoint::CreateServerEndpoint(
        struct SipcServer *a1,
        struct SipcPort *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        void (__high *a7)(struct ISIPCEndpoint *, enum SIPC_BUFFER_STATUS, const struct SIPC_BUFFER_INFO *, const struct SIPC_BUFFER_INFO *, void *),
        void (__high *a8)(struct ISIPCEndpoint *, enum SIPC_ENDPOINT_STATUS, void *),
        void *a9,
        struct SipcEndpoint **a10)
{
  void *v14; // r10
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 result; // rax

  *a10 = 0LL;
  v14 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v14 )
    return 2147942414LL;
  v15 = SipcEndpoint::SipcEndpoint(
          (__int64)v14,
          (void (__fastcall ***)(_QWORD))(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL)),
          (__int64)a1 + 16,
          a5,
          a6,
          (__int64)a7,
          (__int64)a8,
          (__int64)a9);
  v16 = v15;
  if ( !v15 )
    return 2147942414LL;
  *(_QWORD *)(v15 + 16) = a2;
  SipcWin32Handle::Attach((void **)(v15 + 24), a4);
  SipcWin32Handle::Attach((void **)(v16 + 32), a3);
  *(_BYTE *)(v16 + 60) = 1;
  result = 0LL;
  *a10 = (struct SipcEndpoint *)v16;
  return result;
}
