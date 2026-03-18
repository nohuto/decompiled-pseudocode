/*
 * XREFs of ?GetShouldSuppressVSyncInterrupt@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x140052380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetShouldSuppressVSyncInterrupt(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 8LL);
  if ( v2 )
    return *(_BYTE *)(v2 + 12);
  return v1;
}
