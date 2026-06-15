/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140032380
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140011698 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140058064 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z.c)
 *     ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14006E3A0 (-GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4,
        struct IAudioProcessingObject **a5)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  const struct CConnectionInstance *v12; // r12
  struct IAudioProcessingObject *v13; // rbx
  struct IAudioProcessingObject *v14; // rax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioProcessingObject *v16; // [rsp+70h] [rbp+18h]

  v8 = *((_QWORD *)this + 3);
  v9 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v11 = *(_QWORD *)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    if ( !*(_QWORD *)v11 )
      ATL::AtlThrowImpl(-2147467259);
    v12 = *(const struct CConnectionInstance **)(*(_QWORD *)v11 + 16LL);
    if ( *(_DWORD *)(v10 + 40) == 2 )
    {
      v13 = *(struct IAudioProcessingObject **)(*(_QWORD *)(v10 + 32) + 40LL);
      v16 = v13;
      if ( v13 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->AddRef)(v13);
      v15 = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, const struct _GUID *, __int64 *))v13->lpVtbl->QueryInterface)(
             v13,
             a2,
             &v15) >= 0 )
      {
        if ( a3 )
          *a3 = (const struct CProcessNode *)v10;
        if ( a4 )
          *a4 = v12;
        if ( a5 )
        {
          v14 = v13;
          v13 = 0LL;
          v16 = 0LL;
          *a5 = v14;
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v13 )
          ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
        return;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v13 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
    }
  }
}
