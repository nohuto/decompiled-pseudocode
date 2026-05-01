/*
 * XREFs of _lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator() @ 0x1801B1160
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___::Run @ 0x1801B1150 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___--Run.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180024F70 (McTemplateU0q_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x1803A7F94 (McTemplateU0dddd_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator()(_DWORD *a1)
{
  _DWORD *v2; // r15
  unsigned int i; // esi
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 + 3;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dddd_EventWriteTransfer((_DWORD)a1, (unsigned int)"y", a1[2], 0, *v2, 0);
  for ( i = 0; i < a1[4]; ++i )
  {
    v8 = 0LL;
    v4 = *(_QWORD *)a1;
    v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)a1 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    if ( v5(v4, i, &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84, &v8) >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q_EventWriteTransfer(v6, (__int64)&ImmersiveShell_AppManager_ModeChanged_Start, i);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, (unsigned int)*v2);
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q_EventWriteTransfer(v7, (__int64)&ImmersiveShell_AppManager_ModeChanged_Stop, i);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dddd_EventWriteTransfer(
      (_DWORD)a1,
      (unsigned int)&ImmersiveShell_AppManager_ModeChange_Stop,
      a1[2],
      0,
      *v2,
      0);
}
