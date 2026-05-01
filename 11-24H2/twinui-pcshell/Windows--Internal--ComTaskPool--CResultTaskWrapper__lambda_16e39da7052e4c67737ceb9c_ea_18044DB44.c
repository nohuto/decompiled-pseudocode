/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9_____lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x18044DB44
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x18021372C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9_____lambda_16e39da7052e4c67737ceb9c18ac8be9___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // xmm0_8
  __int64 result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a3 + 32);
  *(_QWORD *)a1 = &off_1807416D0;
  result = a1;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 56) = a2;
  return result;
}
