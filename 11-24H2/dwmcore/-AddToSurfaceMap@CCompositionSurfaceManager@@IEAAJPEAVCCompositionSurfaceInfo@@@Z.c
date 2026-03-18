/*
 * XREFs of ?AddToSurfaceMap@CCompositionSurfaceManager@@IEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A49F4
 * Callers:
 *     ?Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x1801A496C (-Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionSurfaceManager::AddToSurfaceMap(
        CCompositionSurfaceManager *this,
        struct CCompositionSurfaceInfo *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v3 = 0;
  v5[1] = a2;
  v5[0] = v2;
  v6 = 0;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v5, 0x10u, &v6) )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x5Fu, 0LL);
  }
  return v3;
}
