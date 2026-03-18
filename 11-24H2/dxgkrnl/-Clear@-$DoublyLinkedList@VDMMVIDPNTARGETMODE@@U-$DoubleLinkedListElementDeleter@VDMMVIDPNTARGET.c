/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAXXZ @ 0x1400216DC
 * Callers:
 *     ??1DMMVIDPNTARGETMODESET@@UEAA@XZ @ 0x140021644 (--1DMMVIDPNTARGETMODESET@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@UEAAPEAXI@Z @ 0x14008FF00 (--_G-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMOD.c)
 *     ??_E?$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x14008FF90 (--_E-$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ @ 0x140090000 (-Clear@-$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::Clear(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = (__int64 *)(a1 + 16);
  while ( 1 )
  {
    result = *v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( *(__int64 **)(result + 8) != v2 || (v4 = *(_QWORD *)result, *(_QWORD *)(*(_QWORD *)result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    if ( result != -56 )
      (**(void (__fastcall ***)(__int64, __int64))(result + 56))(result + 56, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
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
  return result;
}
