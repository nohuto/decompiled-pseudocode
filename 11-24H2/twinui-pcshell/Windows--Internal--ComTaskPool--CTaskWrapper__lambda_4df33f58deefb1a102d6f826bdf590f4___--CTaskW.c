/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4___::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4_____lambda_4df33f58deefb1a102d6f826bdf590f4___ @ 0x1804F3AF4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4df33f58deefb1a102d6f826bdf590f4___ @ 0x1804F658C (Windows--Internal--ComTaskPool--QueueTask__lambda_4df33f58deefb1a102d6f826bdf590f4___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4___::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4_____lambda_4df33f58deefb1a102d6f826bdf590f4___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = a2[1];
  LOBYTE(v4) = *((_BYTE *)a2 + 16);
  v5 = a2 + 3;
  *(_BYTE *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v5 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = &off_18074D900;
  return a1;
}
