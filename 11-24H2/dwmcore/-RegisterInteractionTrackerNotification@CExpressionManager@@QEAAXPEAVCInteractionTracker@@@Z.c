/*
 * XREFs of ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801F3F78
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801F3CCC (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1801AAD4C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CExpressionManager::RegisterInteractionTrackerNotification(
        CExpressionManager *this,
        struct CInteractionTracker *a2)
{
  char *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned int v6; // ecx
  int v7; // eax
  struct CInteractionTracker *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (char *)this + 256;
  v3 = 0LL;
  v4 = *(_QWORD *)v2;
  v5 = *((unsigned int *)v2 + 6);
  while ( (unsigned int)v3 < (unsigned int)v5 )
  {
    if ( a2 == *(struct CInteractionTracker **)(v4 + 8 * v3) )
      return;
    v3 = (unsigned int)(v3 + 1);
  }
  v6 = v5 + 1;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else if ( v6 > *((_DWORD *)v2 + 5) )
  {
    v7 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v2, 8u, v5, &v8);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC0u, 0LL);
  }
  else
  {
    *(_QWORD *)(v4 + 8 * v5) = a2;
    *((_DWORD *)v2 + 6) = v6;
  }
}
