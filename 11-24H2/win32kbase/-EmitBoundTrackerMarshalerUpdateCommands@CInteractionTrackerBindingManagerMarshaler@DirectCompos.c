/*
 * XREFs of ?EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140130C9C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140130C40 (-EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitBoundTrackerMarshalerUpdateCommands(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // edi
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // si
  __int128 v11; // [rsp+20h] [rbp-28h]

  v2 = 0;
  v5 = 1;
  if ( *((_QWORD *)this + 12) )
  {
    v6 = 0LL;
    do
    {
      v7 = *((_QWORD *)this + 13) * v6;
      v8 = *((_QWORD *)this + 9);
      v11 = *(_OWORD *)(v7 + v8);
      if ( (unsigned int)*(_QWORD *)(v7 + v8 + 16) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(*(_QWORD *)v11 + 64LL))(v11, a2) & v5;
        v5 = (*(__int64 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**((_QWORD **)&v11 + 1) + 64LL))(
               *((_QWORD *)&v11 + 1),
               a2) & v9;
      }
      v6 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 12) );
  }
  return v5;
}
