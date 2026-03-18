/*
 * XREFs of ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1402FCB9C
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402FD790 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1402FC85C (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(DXGDXGIKEYEDMUTEX *this, struct DXGCONTEXT *a2)
{
  __int64 v3; // rdx
  int v5; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 2);
    v5 = 0;
    IsFenceObjectSignaled(*((_DWORD *)this + 24), *(struct DXGPROCESS **)(v3 + 40), a2, &v5);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 704;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Should be called with a non-NULL DXGCONTEXT",
      704LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
