/*
 * XREFs of ?IsManipulationInMap@InteractionSourceManager@@AEAA_NPEAVCManipulation@@@Z @ 0x1801B9C48
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801B8D40 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall InteractionSourceManager::IsManipulationInMap(InteractionSourceManager *this, struct CManipulation *a2)
{
  __int64 (__fastcall *v4)(CMILRefCountImpl *); // rax
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  bool v13; // di
  struct CManipulation *v15; // [rsp+30h] [rbp+8h]

  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(a2);
    else
      v4(a2);
  }
  v15 = a2;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)&v15 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = v5 & *((_QWORD *)this + 7);
  v9 = *((_QWORD *)this + 4);
  v10 = 2 * v8;
  v11 = *(_QWORD *)(v9 + 8 * v10 + 8);
  if ( v11 == *((_QWORD *)this + 2) )
  {
LABEL_10:
    v11 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v9 + 8 * v10);
    while ( a2 != *(struct CManipulation **)(v11 + 16) )
    {
      if ( v11 == v12 )
        goto LABEL_10;
      v11 = *(_QWORD *)(v11 + 8);
    }
  }
  if ( !v11 )
    v11 = *((_QWORD *)this + 2);
  v13 = v11 != *((_QWORD *)this + 2);
  if ( a2 )
    (*(void (__fastcall **)(struct CManipulation *))(*(_QWORD *)a2 + 16LL))(a2);
  return v13;
}
