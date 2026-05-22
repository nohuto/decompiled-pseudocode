/*
 * XREFs of ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x18002B4A8
 * Callers:
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18002BB7C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 *     ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18007A4B8 (--1-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextualProc.c)
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18002AE7C (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Tidy(__int64 a1)
{
  ContextualProcessorBuffer::ContextualProcessorMetadata *v1; // rbx
  ContextualProcessorBuffer::ContextualProcessorMetadata *v3; // rsi
  ContextualProcessorBuffer::ContextualProcessorMetadata *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  ContextualProcessorBuffer::ContextualProcessorMetadata *v6; // r8
  char *v7; // rcx

  v1 = *(ContextualProcessorBuffer::ContextualProcessorMetadata **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(a1 + 8);
    while ( v1 != v3 )
    {
      ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(v1);
      v1 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)v1 + 224);
    }
    v4 = *(ContextualProcessorBuffer::ContextualProcessorMetadata **)a1;
    v5 = (const struct std::nothrow_t *)(32 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5));
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v6 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)*((_QWORD *)v4 - 1);
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v7 = (char *)(v4 - v6);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v5);
        __debugbreak();
        JUMPOUT(0x18002B553LL);
      }
      v4 = v6;
    }
    operator delete(v4, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
