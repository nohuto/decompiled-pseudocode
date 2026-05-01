/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721_____lambda_2037807ba102184564a830884e8e7721___ @ 0x180307E20
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___ @ 0x180016C34 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721_____lambda_2037807ba102184564a830884e8e7721___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 32);
  *(_QWORD *)a1 = &off_18072D4C8;
  return a1;
}
