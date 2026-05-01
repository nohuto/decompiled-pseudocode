/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___ @ 0x18048BB4C
 * Callers:
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x18048C950 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = a2[2];
  v4 = *a2;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_BYTE *)(a1 + 40) = 0;
  *((_BYTE *)a2 + 24) = 1;
  *(_QWORD *)a1 = off_1807D6A90;
  return a1;
}
