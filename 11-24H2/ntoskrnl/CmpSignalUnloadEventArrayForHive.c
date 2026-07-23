/*
 * XREFs of CmpSignalUnloadEventArrayForHive @ 0x140965600
 * Callers:
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmpSignalUnloadEventArrayForHive(__int64 a1)
{
  PVOID *v1; // rdi
  __int64 v2; // rbp
  unsigned int v4; // eax

  v1 = (PVOID *)(a1 + 2928);
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 2920) )
  {
    do
    {
      KeSetEvent(*((PRKEVENT *)*v1 + v2), 0, 0);
      ObfDereferenceObject(*((PVOID *)*v1 + v2));
      v4 = *(_DWORD *)(a1 + 2920);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
    if ( v4 )
      ExFreePoolWithTag(*v1, 0);
  }
}
