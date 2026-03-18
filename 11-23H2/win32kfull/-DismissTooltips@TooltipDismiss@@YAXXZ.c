/*
 * XREFs of ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1C022CC7C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0035DAC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 */

void __fastcall TooltipDismiss::DismissTooltips(TooltipDismiss *this)
{
  struct tagTOOLTIPENTRY *i; // rbx
  struct tagWND *v2; // rax
  struct tagTOOLTIPENTRY *v3; // rbx
  struct tagTOOLTIPENTRY *v4; // rcx

  for ( i = gTooltipRegisteredList; i; i = (struct tagTOOLTIPENTRY *)*((_QWORD *)i + 1) )
  {
    v2 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)i, 1);
    if ( v2 )
      PostMessage(v2, 0x345u, 0LL, 0LL);
  }
  v3 = gTooltipRegisteredList;
  while ( v3 )
  {
    v4 = v3;
    v3 = (struct tagTOOLTIPENTRY *)*((_QWORD *)v3 + 1);
    Win32FreePool(v4);
  }
  gTooltipRegisteredList = 0LL;
}
