/*
 * XREFs of ??1CAPONode@@QEAA@XZ @ 0x14000C88C
 * Callers:
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B900 (--_GCAPONode@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPONode::~CAPONode(CAPONode *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v2 = (void *)*((_QWORD *)this + 35);
  if ( v2 )
    free(v2);
  v3 = (void *)*((_QWORD *)this + 31);
  if ( v3 )
    free(v3);
  v4 = (void *)*((_QWORD *)this + 27);
  if ( v4 )
    free(v4);
  v5 = (void *)*((_QWORD *)this + 23);
  if ( v5 )
    free(v5);
  v6 = (void *)*((_QWORD *)this + 19);
  if ( v6 )
    free(v6);
  v7 = (void *)*((_QWORD *)this + 15);
  if ( v7 )
    free(v7);
  v8 = (void *)*((_QWORD *)this + 11);
  if ( v8 )
    free(v8);
  v9 = (void *)*((_QWORD *)this + 7);
  if ( v9 )
    free(v9);
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 3);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 2);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 1);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
