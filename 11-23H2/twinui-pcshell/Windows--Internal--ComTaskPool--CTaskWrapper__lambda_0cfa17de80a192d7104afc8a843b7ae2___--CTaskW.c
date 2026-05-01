/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2_____lambda_0cfa17de80a192d7104afc8a843b7ae2___ @ 0x180203664
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0cfa17de80a192d7104afc8a843b7ae2___ @ 0x1802052D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0cfa17de80a192d7104afc8a843b7ae2___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802DA3D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA3D0.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2_____lambda_0cfa17de80a192d7104afc8a843b7ae2___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 56,
    a2 + 40);
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  *(_DWORD *)(a1 + 376) = *(_DWORD *)(a2 + 360);
  *(_QWORD *)a1 = off_1807C6750;
  return a1;
}
