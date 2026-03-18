/*
 * XREFs of ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z @ 0x1802D9F10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInStandby@CHolographicManager@@QEAA_NXZ @ 0x1802D8BF8 (-IsInStandby@CHolographicManager@@QEAA_NXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::WaitForVBlank(CHolographicInteropTarget *this, void *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  CHolographicInteropTaskQueue *v4; // rcx

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    if ( !CHolographicManager::IsInStandby(*((CHolographicManager **)this + 3))
      && (v4 = *(CHolographicInteropTaskQueue **)(v2 + 48)) != 0LL
      && CHolographicInteropTaskQueue::PostMessageW(v4, 0x12u, 0LL, *(void **)(v2 + 232), 0LL, 0LL, 0LL) )
    {
      WaitForSingleObject(*(HANDLE *)(v2 + 232), 0x64u);
    }
    else
    {
      return 142213121;
    }
  }
  return v3;
}
