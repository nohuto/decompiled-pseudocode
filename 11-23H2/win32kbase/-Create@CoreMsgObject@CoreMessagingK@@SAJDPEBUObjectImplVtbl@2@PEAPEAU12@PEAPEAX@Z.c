/*
 * XREFs of ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C00696F0
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0069028 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00B0FD8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

NTSTATUS __fastcall CoreMessagingK::CoreMsgObject::Create(
        char a1,
        __int64 (**a2)(void),
        struct CoreMessagingK::CoreMsgObject **a3,
        void **a4)
{
  __int64 (*v5)(void); // rax
  unsigned int v9; // esi
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  __int128 v20; // [rsp+70h] [rbp-10h]

  *a4 = 0LL;
  v5 = *a2;
  v15[1] = 0;
  v19 = 0;
  *a3 = 0LL;
  v16 = 0LL;
  v15[0] = 48;
  v9 = v5() + 8;
  v17 = 0LL;
  v18 = a1 == 0 ? 0x200 : 0;
  v20 = 0LL;
  result = ObCreateObject(0LL, ExCoreMessagingObjectType, v15);
  if ( result >= 0 )
  {
    memset(0LL, 0, v9);
    MEMORY[0] = *(_DWORD *)SGDGetUserSessionState(v12, v11, v13, v14);
    MEMORY[8] = a2;
    result = ObInsertObject(0LL, 0LL, 0x10000000u, 0, 0LL, a4);
    if ( result >= 0 )
    {
      *a3 = 0LL;
      return 0;
    }
  }
  return result;
}
