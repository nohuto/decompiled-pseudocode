/*
 * XREFs of ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18002B43C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180029EF0 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x18002BA68 (-_Tidy@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextual.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18002BB1C (--1-$_Uninitialized_backout_al@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuff.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18002BB58 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18002BBA0 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$6 @ 0x1801D0E60 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$6.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$6 @ 0x1801D10CE (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$6.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  _QWORD **v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  char *v8; // rcx
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  char *v12; // rcx
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  char *v17; // r8
  char *v18; // rcx
  char *v19; // r8
  char *v20; // r8

  v2 = *((_QWORD *)this + 26);
  if ( v2 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (char *)*((_QWORD *)this + 21);
  if ( v3 )
  {
    v4 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 23) - (_QWORD)v3) >> 3));
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      v17 = (char *)*((_QWORD *)v3 - 1);
      v18 = (char *)(v3 - v17);
      if ( (unsigned __int64)(v18 - 8) > 0x1F )
        goto LABEL_27;
      v3 = v17;
    }
    operator delete(v3, v4);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 19);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      operator delete(v6, (const struct std::nothrow_t *)0x18);
      v6 = v7;
    }
    while ( v7 );
  }
  operator delete(*((void **)this + 19), (const struct std::nothrow_t *)0x18);
  v8 = (char *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    v4 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 14) - (_QWORD)v8) >> 3));
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      v20 = (char *)*((_QWORD *)v8 - 1);
      v18 = (char *)(v8 - v20);
      if ( (unsigned __int64)(v18 - 8) > 0x1F )
        goto LABEL_27;
      v8 = v20;
    }
    operator delete(v8, v4);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v9 = (_QWORD **)*((_QWORD *)this + 10);
  *v9[1] = 0LL;
  v10 = *v9;
  if ( v10 )
  {
    do
    {
      v11 = (_QWORD *)*v10;
      operator delete(v10, (const struct std::nothrow_t *)0x18);
      v10 = v11;
    }
    while ( v11 );
  }
  operator delete(*((void **)this + 10), (const struct std::nothrow_t *)0x18);
  v12 = (char *)*((_QWORD *)this + 4);
  if ( v12 )
  {
    v4 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 6) - (_QWORD)v12) >> 3));
    if ( (unsigned __int64)v4 < 0x1000 )
    {
LABEL_15:
      operator delete(v12, v4);
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 5) = 0LL;
      *((_QWORD *)this + 6) = 0LL;
      goto LABEL_16;
    }
    v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
    v19 = (char *)*((_QWORD *)v12 - 1);
    v18 = (char *)(v12 - v19);
    if ( (unsigned __int64)(v18 - 8) <= 0x1F )
    {
      v12 = v19;
      goto LABEL_15;
    }
LABEL_27:
    _o__invalid_parameter_noinfo_noreturn(v18, v4);
    __debugbreak();
    JUMPOUT(0x18002B66BLL);
  }
LABEL_16:
  v13 = (_QWORD **)*((_QWORD *)this + 2);
  *v13[1] = 0LL;
  v14 = *v13;
  if ( v14 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      operator delete(v14, (const struct std::nothrow_t *)0x18);
      v14 = v15;
    }
    while ( v15 );
  }
  operator delete(*((void **)this + 2), (const struct std::nothrow_t *)0x18);
  v16 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
}
