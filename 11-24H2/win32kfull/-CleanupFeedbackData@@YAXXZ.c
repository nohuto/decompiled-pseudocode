/*
 * XREFs of ?CleanupFeedbackData@@YAXXZ @ 0x1401F3218
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F2C60 (EditionDriverUninitialize.c)
 * Callees:
 *     ?Uninitialize@CPointerFeedback@@SAXXZ @ 0x1401F32A0 (-Uninitialize@CPointerFeedback@@SAXXZ.c)
 */

void __fastcall CleanupFeedbackData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36368) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 36368);
    if ( *(_QWORD *)(v5 + 72) )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36368);
      Win32FreePool(*(void **)(v6 + 72));
      *(_QWORD *)(v6 + 72) = 0LL;
      *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 36368) + 72LL) = 0LL;
    }
  }
  CPointerFeedback::Uninitialize();
}
