/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x140040A0C
 * Callers:
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x14008CE40 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@UEAAPEAXI@Z @ 0x14008D570 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRESEN.c)
 *     ??_E?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x14008D630 (--_E-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAXXZ @ 0x14008DA10 (-Clear@-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

int __fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx

  v2 = (_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    if ( v3 != (_QWORD *)-56LL )
      (*(void (__fastcall **)(_QWORD *, __int64))v3[7])(v3 + 7, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    LODWORD(v3) = DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"this->GetNumElements() == 0",
                    394LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
  }
  return (int)v3;
}
