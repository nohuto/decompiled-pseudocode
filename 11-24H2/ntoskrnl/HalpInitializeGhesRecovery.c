/*
 * XREFs of HalpInitializeGhesRecovery @ 0x140552D0C
 * Callers:
 *     HalpInitializeMce @ 0x140B4DC24 (HalpInitializeMce.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpInitializeGhesRecovery())()
{
  _OWORD *v0; // rax
  __int64 v1; // rcx
  __int64 (__fastcall *result)(); // rax

  v0 = &unk_140F8FEE0;
  v1 = 32LL;
  do
  {
    v0 = (_OWORD *)((char *)v0 + 6232);
    *(v0 - 391) = 0LL;
    *(v0 - 390) = 0LL;
    *((_QWORD *)v0 - 778) = 0LL;
    *((_QWORD *)v0 - 780) = HalpErrorDeferredHandler;
    *((_DWORD *)v0 - 1566) = 0;
    --v1;
  }
  while ( v1 );
  result = HalpRequestGenericErrorRecovery;
  off_140E00C18[0] = HalpRequestGenericErrorRecovery;
  return result;
}
