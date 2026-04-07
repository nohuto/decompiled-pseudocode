/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x180024EB0
 * Callers:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800F6378 (memcpy_0.c)
 */

__int64 __fastcall DynArray<CVisual *,0>::AddMultipleAndSet(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned int v7; // ebx

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  if ( (int)v3 + (int)a3 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
    return 2147942934LL;
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    result = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, a3, a2);
    v7 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0xBEu, 0LL);
      return v7;
    }
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8 * v3), a2, 8LL * (unsigned int)a3);
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v5;
  }
  return result;
}
