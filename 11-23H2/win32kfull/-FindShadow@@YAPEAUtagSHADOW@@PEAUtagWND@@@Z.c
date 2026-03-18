/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00814C4
 * Callers:
 *     WindowHasShadow @ 0x1C0081490 (WindowHasShadow.c)
 *     UpdateWindowMonitor @ 0x1C00B0F70 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0220DA4 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C022110C (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C02211F0 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C022126C (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C022130C (zzzUpdateShadowAlpha.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  for ( result = gpshadowFirst;
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
