/*
 * XREFs of ?Release@ContextualProcessorBuffer@@UEAAKXZ @ 0x18004BDE0
 * Callers:
 *     ?Release@ContextualProcessorBuffer@@W7EAAKXZ @ 0x18019BE10 (-Release@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?Release@ContextualProcessorBuffer@@WBA@EAAKXZ @ 0x18019BE20 (-Release@ContextualProcessorBuffer@@WBA@EAAKXZ.c)
 *     ?Release@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x18019BE30 (-Release@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContextualProcessorBuffer::Release(ContextualProcessorBuffer *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = (char *)this + 24;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 24);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
