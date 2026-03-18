/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@E$00@@QEAAPEAEI@Z @ 0x1400A4DBC
 * Callers:
 *     ?VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_ADAPTER_INFO@@@Z @ 0x1400414C8 (-VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_A.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned char,1>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 1 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, a2);
  }
  else
  {
    if ( !(0xFFFFFFFFFFFFFFFFuLL / a2) )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 3) = a2;
  return result;
}
