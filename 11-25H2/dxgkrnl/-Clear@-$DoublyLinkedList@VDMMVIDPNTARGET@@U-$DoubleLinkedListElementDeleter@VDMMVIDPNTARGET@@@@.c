/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAAXXZ @ 0x1400107BC
 * Callers:
 *     ??1DMMVIDPNTARGETSET@@UEAA@XZ @ 0x140010758 (--1DMMVIDPNTARGETSET@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@UEAAPEAXI@Z @ 0x14008F060 (--_E-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@U.c)
 *     ??_E?$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x14008F0F0 (--_E-$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x14008F2A0 (-Clear@-$Set@VDMMVIDPNTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::Clear(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d

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
    if ( result != -72 )
      (**(void (__fastcall ***)(__int64, __int64))(result + 72))(result + 72, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 394,
                 v5,
                 v6,
                 0,
                 2,
                 -1,
                 (__int64)L"this->GetNumElements() == 0",
                 138,
                 0,
                 0,
                 0,
                 0);
    }
  }
  return result;
}
