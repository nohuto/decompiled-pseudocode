/*
 * XREFs of ??1ContextualProcessorResponse@@QEAA@XZ @ 0x180016918
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001B6B0 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x180021F00 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     _ContextualProcessorBuffer::ResetBuffer_::_1_::dtor$6 @ 0x1801C8FC0 (_ContextualProcessorBuffer--ResetBuffer_--_1_--dtor$6.c)
 *     _ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision_::_1_::dtor$6 @ 0x1801C9430 (_ContextualProcessorBuffer--EventStreamEndedAndProcessFinalDecision_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorResponse::~ContextualProcessorResponse(ContextualProcessorResponse *this)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  _QWORD **v4; // rcx
  _QWORD *v5; // rcx
  char *v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  char *v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rbx
  char *v17; // r8
  char *v18; // rcx
  char *v19; // r8
  char *v20; // r8

  v2 = (char *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 24) - (_QWORD)v2) >> 3));
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v20 = (char *)*((_QWORD *)v2 - 1);
      v18 = (char *)(v2 - v20);
      if ( (unsigned __int64)(v18 - 8) > 0x1F )
        goto LABEL_29;
      v2 = v20;
    }
    operator delete(v2, v3);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  v4 = (_QWORD **)*((_QWORD *)this + 20);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( v5 )
  {
    do
    {
      v15 = (_QWORD *)*v5;
      operator delete(v5, (const struct std::nothrow_t *)0x18);
      v5 = v15;
    }
    while ( v15 );
  }
  operator delete(*((void **)this + 20), (const struct std::nothrow_t *)0x18);
  v6 = (char *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    v3 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 16) - (_QWORD)v6) >> 3));
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v19 = (char *)*((_QWORD *)v6 - 1);
      v18 = (char *)(v6 - v19);
      if ( (unsigned __int64)(v18 - 8) > 0x1F )
        goto LABEL_29;
      v6 = v19;
    }
    operator delete(v6, v3);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v7 = (_QWORD **)*((_QWORD *)this + 12);
  *v7[1] = 0LL;
  v8 = *v7;
  if ( *v7 )
  {
    do
    {
      v16 = (_QWORD *)*v8;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8 + 3);
      operator delete(v8, (const struct std::nothrow_t *)0x20);
      v8 = v16;
    }
    while ( v16 );
  }
  operator delete(*((void **)this + 12), (const struct std::nothrow_t *)0x20);
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (char *)*((_QWORD *)this + 5);
  if ( v10 )
  {
    v3 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 7) - (_QWORD)v10) >> 3));
    if ( (unsigned __int64)v3 < 0x1000 )
    {
LABEL_13:
      operator delete(v10, v3);
      *((_QWORD *)this + 5) = 0LL;
      *((_QWORD *)this + 6) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
      goto LABEL_14;
    }
    v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
    v17 = (char *)*((_QWORD *)v10 - 1);
    v18 = (char *)(v10 - v17);
    if ( (unsigned __int64)(v18 - 8) <= 0x1F )
    {
      v10 = v17;
      goto LABEL_13;
    }
LABEL_29:
    _o__invalid_parameter_noinfo_noreturn(v18, v3);
    __debugbreak();
    JUMPOUT(0x180016B69LL);
  }
LABEL_14:
  v11 = (_QWORD **)*((_QWORD *)this + 3);
  *v11[1] = 0LL;
  v12 = *v11;
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      operator delete(v12, (const struct std::nothrow_t *)0x18);
      v12 = v13;
    }
    while ( v13 );
  }
  operator delete(*((void **)this + 3), (const struct std::nothrow_t *)0x18);
  v14 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
