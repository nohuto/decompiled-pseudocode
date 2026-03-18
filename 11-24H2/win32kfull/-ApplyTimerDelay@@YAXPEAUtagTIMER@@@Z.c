/*
 * XREFs of ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x14016E020
 * Callers:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyTimerDelay(struct tagTIMER *a1)
{
  int v1; // r8d
  int v2; // eax

  v1 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 464LL) + 1028LL);
  if ( v1 )
  {
    v2 = 0x7FFFFFFF;
    if ( (unsigned int)(v1 + *((_DWORD *)a1 + 13)) < 0x7FFFFFFF )
      v2 = v1 + *((_DWORD *)a1 + 13);
    *((_DWORD *)a1 + 13) = v2;
  }
}
