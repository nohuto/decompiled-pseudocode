/*
 * XREFs of NotifyExternalTranslationInterfaceChange @ 0x14009D7A0
 * Callers:
 *     <none>
 * Callees:
 *     DeleteExternalTranslatorInterface @ 0x14009D528 (DeleteExternalTranslatorInterface.c)
 */

__int64 __fastcall NotifyExternalTranslationInterfaceChange(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v1 )
    v1 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v1 )
    DeleteExternalTranslatorInterface();
  return 0LL;
}
