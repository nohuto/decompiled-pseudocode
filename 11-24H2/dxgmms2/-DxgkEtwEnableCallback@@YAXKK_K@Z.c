/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14010E580
 * Callers:
 *     McGenControlCallbackV2 @ 0x140042560 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_140081010 & 0x461C8ED7) != 0 && (qword_140081018 & 0xFFFFFFFFB9E37128uLL) == 0;
  bTracingEnabled = v0;
}
