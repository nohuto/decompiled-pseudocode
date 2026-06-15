/*
 * XREFs of ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14002F2E4
 * Callers:
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140003050 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14002F178 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::GetSpatialAudioStreamProcessor(
        CPipeInstance *this,
        struct ISpatialAudioStreamProcessor **a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // edi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]
  __int64 v12; // [rsp+50h] [rbp+18h]

  v12 = 0LL;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 9);
  while ( 1 )
  {
    do
    {
      if ( !v3 )
        return 2147943568LL;
      v5 = *(_QWORD *)(v3 + 16);
      v3 = *(_QWORD *)(v3 + 8);
      v6 = *(_QWORD **)(v4 + 16);
      v4 = *(_QWORD *)(v4 + 8);
      if ( !*v6 )
        ATL::AtlThrowImpl(-2147467259);
    }
    while ( *(_DWORD *)(v5 + 40) != 2 );
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL);
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v7)(v7, &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a, &v10) >= 0 )
      break;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v11 = 0LL;
  v12 = v7;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( !v7 )
    return 2147943568LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct ISpatialAudioStreamProcessor **))v7)(
         v7,
         &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
         a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
