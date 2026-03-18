/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402EE41C
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402EDCB0 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1401A15FC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1402647F0 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(InkDevice *this, unsigned int a2)
{
  __int64 v3; // rdx
  int PointerInfoByPointerId; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 UserSessionState; // rbx
  struct tagPOINTER_INFO *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  PointerInfoByPointerId = GetPointerInfoByPointerId(a2, &v12);
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v3) = 19;
    v5 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), v3) + 456);
    if ( *(_DWORD *)(v5 + 24) != 5 )
      return (unsigned int)-1073741811;
    v6 = *(_QWORD *)(v5 + 16);
    v7 = *(_DWORD *)(v6 + 1968);
    if ( v7 != 0x80000000 && v7 != 11 && v7 != 13 )
      return (unsigned int)-1073741811;
    v8 = *(_QWORD *)(v6 + 440);
    if ( *(unsigned __int16 *)(v8 + 112) != *((_DWORD *)this + 34)
      || *(unsigned __int16 *)(v8 + 110) != *((_DWORD *)this + 33) )
    {
      return (unsigned int)-1073741823;
    }
    v9 = *(_QWORD **)(v5 + 400);
    if ( v9 && *v9 )
    {
      UserSessionState = W32GetUserSessionState(v5, v8);
      if ( !*(_BYTE *)(UserSessionState + 19408) )
      {
        if ( (unsigned int)dword_140398C98 > 5 && tlgKeywordOn((__int64)&dword_140398C98, 0x400000000000LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (__int64)&dword_140398C98,
            byte_1403698A6);
        *(_BYTE *)(UserSessionState + 19408) = 1;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)PointerInfoByPointerId;
}
