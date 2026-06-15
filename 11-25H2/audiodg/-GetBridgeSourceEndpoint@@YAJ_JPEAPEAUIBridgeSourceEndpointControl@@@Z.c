/*
 * XREFs of ?GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z @ 0x1400675A0
 * Callers:
 *     ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C750 (-CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDevi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetBridgeSourceEndpoint(__int64 a1, struct IBridgeSourceEndpointControl **a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // r12
  unsigned int v6; // esi
  int (__fastcall ***v7)(_QWORD, GUID *, struct IBridgeSourceEndpointControl **); // rbx
  __int64 v8; // rcx
  int v9; // eax
  int (__fastcall *v10)(_QWORD, GUID *, struct IBridgeSourceEndpointControl **); // rdi
  struct IBridgeSourceEndpointControl *v11; // rax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+20h] [rbp-10h] BYREF
  struct IBridgeSourceEndpointControl *v14; // [rsp+80h] [rbp+50h] BYREF
  int (__fastcall ***v15)(_QWORD, GUID *, struct IBridgeSourceEndpointControl **); // [rsp+88h] [rbp+58h] BYREF

  EnterCriticalSection(&g_lockBridgeEndpointRegistry);
  v13 = &g_lockBridgeEndpointRegistry;
  v4 = (_QWORD *)g_bridgeEndpointRegistry;
  v5 = (_QWORD *)xmmword_1400C4758;
  v6 = 0;
  while ( v4 != v5 )
  {
    if ( *v4 == a1 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      v7 = 0LL;
      v15 = 0LL;
      v8 = v4[1];
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
               v8,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               (__int64 *)&v15);
        v7 = v15;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 >= 0 && v7 )
      {
        v14 = 0LL;
        v10 = **v7;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
        if ( v10(v7, &GUID_ed9309d0_76d3_430a_a5b4_6ee21020fca5, &v14) >= 0 )
        {
          v11 = v14;
          v14 = 0LL;
          *a2 = v11;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
          goto LABEL_15;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    }
    v4 += 2;
  }
  v6 = -2147023728;
LABEL_15:
  CSAutoLock<1>::~CSAutoLock<1>(&v13);
  return v6;
}
