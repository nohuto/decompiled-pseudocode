/*
 * XREFs of ??0CMessageConversationHost@@IEAA@PEAUIMessageSession@@@Z @ 0x1802B8ADC
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z @ 0x1800FC74C (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::CMessageConversationHost(
        CMessageConversationHost *this,
        struct IMessageSession *a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CMessageConversationHost *)((char *)this + 8);
  *(_DWORD *)v3 = 0;
  *(_QWORD *)this = &CMessageConversationHost::`vftable';
  CMILRefCountImpl::AddReference(v3);
  *((_QWORD *)this + 2) = a2;
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
