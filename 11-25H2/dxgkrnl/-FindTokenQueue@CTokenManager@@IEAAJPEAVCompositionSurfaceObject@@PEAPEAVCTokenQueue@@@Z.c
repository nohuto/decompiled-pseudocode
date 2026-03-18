/*
 * XREFs of ?FindTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAVCTokenQueue@@@Z @ 0x14003BD24
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14000DDC4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::FindTokenQueue(
        CTokenManager *this,
        struct CompositionSurfaceObject *a2,
        struct CTokenQueue **a3)
{
  PVOID v4; // rax
  struct CTokenQueue *v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a2;
  Buffer[1] = 0LL;
  v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), Buffer);
  v5 = 0LL;
  if ( v4 )
    v5 = (struct CTokenQueue *)*((_QWORD *)v4 + 1);
  *a3 = v5;
  return v4 == 0LL ? 0xC0000225 : 0;
}
