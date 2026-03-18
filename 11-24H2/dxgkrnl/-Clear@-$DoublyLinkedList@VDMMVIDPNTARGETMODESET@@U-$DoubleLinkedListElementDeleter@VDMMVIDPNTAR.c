/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAXXZ @ 0x14000D15C
 * Callers:
 *     ??_G?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@UEAAPEAXI@Z @ 0x14000D110 (--_G-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::Clear(
        __int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 10));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          394LL,
          v5,
          v6,
          0LL,
          2,
          -1,
          L"this->GetNumElements() == 0",
          138,
          0,
          0,
          0,
          0);
    }
  }
}
