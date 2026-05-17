/*
 * XREFs of LdrpFindDelayloadedMethod @ 0x180160588
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x18011AE70 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x180160628 (LdrpFindDelayloadedMethodInDescriptor.c)
 */

__int64 __fastcall LdrpFindDelayloadedMethod(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 DelayloadedMethodInDescriptor; // rsi
  __int64 v7; // r12
  unsigned int v8; // edi
  unsigned int i; // ebx
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  DelayloadedMethodInDescriptor = 0LL;
  *a3 = 0LL;
  v7 = RtlImageDirectoryEntryToData(a1, 1, 0xDu, &v11);
  if ( v7 )
  {
    v8 = v11 >> 5;
    for ( i = 0; i < v8; ++i )
    {
      DelayloadedMethodInDescriptor = LdrpFindDelayloadedMethodInDescriptor(a1, v7 + 32LL * i, a2);
      if ( DelayloadedMethodInDescriptor )
      {
        *a3 = v7 + 32LL * i;
        return DelayloadedMethodInDescriptor;
      }
    }
  }
  return DelayloadedMethodInDescriptor;
}
