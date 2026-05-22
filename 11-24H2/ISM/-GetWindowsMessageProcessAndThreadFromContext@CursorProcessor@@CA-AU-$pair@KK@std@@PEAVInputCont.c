/*
 * XREFs of ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x180147E00
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x1801478CC (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x18005349C (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_DWORD *__fastcall CursorProcessor::GetWindowsMessageProcessAndThreadFromContext(_DWORD *a1, __int64 a2)
{
  int ProcessId; // ebp
  int v4; // r15d
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rsi
  __int64 *v8; // r12
  char *Attached; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  char v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h]

  ProcessId = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 176) + 104LL);
  v7 = *(__int64 **)(v6 - 24);
  v8 = *(__int64 **)(v6 - 16);
  while ( v7 != v8 )
  {
    Attached = (char *)InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>(*v7, &v15);
    v10 = 0LL;
    if ( &v14 != Attached )
    {
      v10 = *(_QWORD *)Attached;
      *(_QWORD *)Attached = 0LL;
    }
    v11 = v5;
    v5 = v10;
    v16 = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 8LL))(v11 + 16);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 8LL))(v12 + 16);
    }
    if ( v10 )
    {
      ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(v10 + 32)
                                                                                                + 16LL));
      v4 = *(_DWORD *)(v10 + 64);
      break;
    }
    ++v7;
  }
  *a1 = ProcessId;
  a1[1] = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 8LL))(v5 + 16);
  return a1;
}
