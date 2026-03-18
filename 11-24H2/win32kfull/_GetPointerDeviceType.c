/*
 * XREFs of _GetPointerDeviceType @ 0x14018F428
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1401F588C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1402071D8 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402A4D94 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x14018F4FC (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // edx

  LOBYTE(a2) = 19;
  v2 = HMValidateHandleNoSecure(a1, a2);
  v4 = -1;
  if ( v2 && (*(_DWORD *)(v2 + 184) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v2 + 456), 0xFFFFFFFFLL, v3);
  return v4;
}
