/*
 * XREFs of wistd::__function::__func__lambda_cc54e5dd528306179db4038c2fc6bf4d__void___cdecl(enum__PO_STANDBY_AUDIO_POLICY_const_&)_::operator() @ 0x1800CBC20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_cc54e5dd528306179db4038c2fc6bf4d__void___cdecl_enum__PO_STANDBY_AUDIO_POLICY_const____::operator()(
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
  v5 = off_18017B2D8;
  v7 = &v5;
  return CSerialWorkQueue::QueueWorkItem(v3, (__int64 *)&v5);
}
