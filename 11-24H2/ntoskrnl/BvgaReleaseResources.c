/*
 * XREFs of BvgaReleaseResources @ 0x1405907E0
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x1404FA650 (InbvIsBootDriverInstalled.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall BvgaReleaseResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rsi
  PVOID *v6; // rdi

  v4 = 1LL;
  v5 = &ResourceSize;
  v6 = (PVOID *)ResourceList;
  do
  {
    if ( *v6 && (!InbvIsBootDriverInstalled(a1, a2, a3, a4) || v4 != 3 && v4 != 5) )
    {
      ExFreePoolWithTag(*v6, 0);
      *v6 = 0LL;
      *v5 = 0;
    }
    ++v4;
    ++v6;
    ++v5;
  }
  while ( v4 < 7 );
}
