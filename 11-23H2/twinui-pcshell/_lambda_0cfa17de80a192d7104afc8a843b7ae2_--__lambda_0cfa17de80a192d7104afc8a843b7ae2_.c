/*
 * XREFs of _lambda_0cfa17de80a192d7104afc8a843b7ae2_::__lambda_0cfa17de80a192d7104afc8a843b7ae2_ @ 0x180206618
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::_CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___ @ 0x1802067F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___--_CTask.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DAA36 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_0cfa17de80a192d7104afc8a843b7ae2_::__lambda_0cfa17de80a192d7104afc8a843b7ae2_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5));
  v2 = (std::_Ref_count_base *)a1[4];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
}
