/*
 * XREFs of MiPageAvailable @ 0x140442ECC
 * Callers:
 *     MiConvertFaultStatus @ 0x1402163C0 (MiConvertFaultStatus.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageAvailable(__int64 a1, __int16 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rcx
  int v8; // eax

  v2 = *(_QWORD *)(a1 + 18688);
  v3 = 0;
  v5 = v2 - 1;
  if ( !v2 )
    v5 = 0LL;
  if ( v5 >= 0x9F )
    return 1;
  if ( (a2 & 0x200) != 0 )
    return 1;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) == 8 )
    return 1;
  v8 = *(_DWORD *)(a1 + 4);
  if ( v5 >= 0x20 || (v8 & 4) == 0 )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v5 < 0x21 )
      return ((unsigned __int8)v8 >> 4) & 1;
    return 1;
  }
  return v3;
}
