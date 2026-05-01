/*
 * XREFs of ?GameDVRConfigChangedTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801FB250
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___::Run @ 0x1802A26F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180232248 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::GameDVRConfigChangedTask(BroadcastDVRComponent *this, __int64 a2)
{
  char v2; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  std::_Ref_count_base *v8; // rbp
  unsigned int v9; // r9d
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  char v15; // [rsp+20h] [rbp-38h]
  char v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h]

  v2 = a2;
  v4 = *((_QWORD *)this + 38);
  v17 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 40);
  v6 = 1LL;
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    v4 = v17;
  }
  v7 = *((_QWORD *)this + 39);
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 40);
  if ( v7 && *(_BYTE *)(v7 + 16) && v2 )
  {
    v9 = *(_DWORD *)(v7 + 56);
    v10 = (*(_BYTE *)(v7 + 18) != 0 ? 65 : 1) | 2;
    if ( (v9 & 8) == 0 )
      v10 = *(_BYTE *)(v7 + 18) != 0 ? 65 : 1;
    v11 = v10 | 4;
    if ( (v9 & 0x10) == 0 )
      v11 = v10;
    v12 = v11 | 8;
    if ( (v9 & 0x20) == 0 )
      v12 = v11;
    v13 = v12 | 0x10;
    if ( (v9 & 0x40) == 0 )
      v13 = v12;
    v14 = v9 >> 1;
    v16 = v14 & 1;
    if ( !*(_BYTE *)(v7 + 16) || (v14 & 1) != 0 )
      LOBYTE(v6) = 0;
    v15 = v6;
    BroadcastDVRComponent::SendShellNotificationToDVR2(this, 2LL, v7, v13, v15, &v16);
    if ( v16 )
      *(_DWORD *)(v7 + 56) |= 2u;
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2, v6);
}
