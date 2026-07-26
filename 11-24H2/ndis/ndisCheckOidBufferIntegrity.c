/*
 * XREFs of ndisCheckOidBufferIntegrity @ 0x14004A1E0
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisCheckOidBufferIntegrity(unsigned int *BugCheckParameter3, ULONG_PTR a2)
{
  __int64 result; // rax
  unsigned int v3; // r8d

  result = BugCheckParameter3[1];
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    if ( (_DWORD)result != 12 )
      return result;
    result = BugCheckParameter3[13];
    v3 = BugCheckParameter3[15];
  }
  else
  {
    result = BugCheckParameter3[12];
    v3 = BugCheckParameter3[13];
  }
  if ( v3 > (unsigned int)result )
    ndisBugCheckEx(0x1DuLL, a2, (ULONG_PTR)BugCheckParameter3, 0LL);
  return result;
}
