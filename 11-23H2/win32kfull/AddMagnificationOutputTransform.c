/*
 * XREFs of AddMagnificationOutputTransform @ 0x1C0082700
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     MagInputTransform @ 0x1C0155642 (MagInputTransform.c)
 *     MagnificationInverseTransformPoint @ 0x1C01F6318 (MagnificationInverseTransformPoint.c)
 */

__int64 __fastcall AddMagnificationOutputTransform(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  while ( _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL) )
    UserSleep(1LL);
  v4 = *(_QWORD *)(grpdeskRitInput + 232LL);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 16) & 2) != 0 )
    {
      v6 = MagInputTransform();
      if ( v6 )
      {
        if ( (unsigned int)PtInRect(v6, *a1) )
        {
          MagnificationInverseTransformPoint(v7, a1);
          v2 = 1;
        }
      }
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return v2;
}
