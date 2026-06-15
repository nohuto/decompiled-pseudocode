/*
 * XREFs of wistd::__function::__func__lambda_39312e03464d6f3d152b1297946c6f9f__void___cdecl(enum__PO_STANDBY_AUDIO_POLICY_const_&)_::operator() @ 0x1800CC520
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_39312e03464d6f3d152b1297946c6f9f__void___cdecl_enum__PO_STANDBY_AUDIO_POLICY_const____::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 (__fastcall **v5)(); // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v7)(); // [rsp+58h] [rbp-10h]

  v2 = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 120LL))(*(_QWORD *)(a1 + 8));
  v6 = v2;
  v5 = off_180171438;
  v7 = &v5;
  return CSerialWorkQueue::QueueWorkItem(v3, (__int64 *)&v5);
}
