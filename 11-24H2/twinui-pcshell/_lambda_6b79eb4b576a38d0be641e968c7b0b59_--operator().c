/*
 * XREFs of _lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator() @ 0x18008BC3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___::Run @ 0x1802C26C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18008A0FC (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x18008C8AC (McTemplateU0dddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator()(_DWORD *a1)
{
  _UNKNOWN **v1; // rax
  _DWORD *v2; // rsi
  _DWORD *v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, _DWORD **); // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  _DWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = &retaddr;
  v2 = a1;
  v3 = a1 + 3;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    LODWORD(v1) = McTemplateU0dddd_EventWriteTransfer(
                    (_DWORD)a1,
                    (unsigned int)&ImmersiveShell_AppManager_ModeChange_Start,
                    a1[2],
                    0,
                    *v3,
                    0);
  v4 = 0;
  if ( v2[4] )
  {
    do
    {
      v11 = 0LL;
      v5 = *(_QWORD *)v2;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _DWORD **))(**(_QWORD **)v2 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
      LODWORD(v1) = v6(v5, v4, &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84, &v11);
      if ( (int)v1 >= 0 )
      {
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0q_EventWriteTransfer(v7, &ImmersiveShell_AppManager_ModeChanged_Start, v4);
        LODWORD(v1) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, (unsigned int)v2[3]);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          LODWORD(v1) = McTemplateU0q_EventWriteTransfer(v8, &ImmersiveShell_AppManager_ModeChanged_Stop, v4);
      }
      a1 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        LODWORD(v1) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
      }
      ++v4;
    }
    while ( v4 < v2[4] );
    v3 = v2 + 3;
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    LODWORD(v1) = McTemplateU0dddd_EventWriteTransfer(
                    (_DWORD)a1,
                    (unsigned int)&ImmersiveShell_AppManager_ModeChange_Stop,
                    v2[2],
                    0,
                    *v3,
                    0);
  return (int)v1;
}
