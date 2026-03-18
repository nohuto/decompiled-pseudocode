/*
 * XREFs of EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1401ECFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1401D05B4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall EditionFinalizeKoreanImeCompStrOnMouseClick(__int64 a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx

  v2 = *(struct tagWND **)(a1 + 80);
  v3 = a2;
  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19928) & 4) != 0 && !v3 && (GetActiveHKL() & 0x3FF) == 0x12 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)v2 + 17) + 8LL);
    if ( (*(_BYTE *)(v4 + 10) & 1) == 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(1023LL, v4) + 18944) )
        FinalizeKoreanImeCompStrOnMouseClick(v2, v5);
    }
  }
}
