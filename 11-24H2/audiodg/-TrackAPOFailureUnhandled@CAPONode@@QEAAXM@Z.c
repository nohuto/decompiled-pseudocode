/*
 * XREFs of ?TrackAPOFailureUnhandled@CAPONode@@QEAAXM@Z @ 0x14006BBF0
 * Callers:
 *     ?TrackAPOFailureUnhandled@CAudioProcessor@@UEAAJM@Z @ 0x14007F890 (-TrackAPOFailureUnhandled@CAudioProcessor@@UEAAJM@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAPONode::TrackAPOFailureUnhandled(CAPONode *this, float a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  v3 = 0LL;
  if ( (**v2)(v2, &GUID_1c5c2642_7b14_48c8_94d0_f2a41d7ea9bc, &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v3);
}
