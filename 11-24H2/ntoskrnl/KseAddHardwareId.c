/*
 * XREFs of KseAddHardwareId @ 0x14095A8A0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x14048E6F8 (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404A03F0 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x14095B438 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x14095B51C (KsepCacheUnlock.c)
 *     KsepStringFree @ 0x14095B694 (KsepStringFree.c)
 *     KsepStringDuplicate @ 0x14095CB04 (KsepStringDuplicate.c)
 *     KsepCacheInsert @ 0x140AA046C (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  unsigned __int64 *v1; // rsi
  char *v4; // rdi
  int v5; // ebx
  char *Paged; // rax
  __int64 v7; // rax
  UNICODE_STRING v8[2]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]

  v1 = (unsigned __int64 *)qword_140E66B30;
  v10 = 0;
  memset(v8, 0, sizeof(v8));
  DestinationString = 0LL;
  if ( dword_140E66AE4 != 2 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = -1073741823;
    KsepHistoryErrors[2 * v7] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0LL, (__int64)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  KsepCacheLock(v1);
  v4 = (char *)KsepCacheLookup(v1, v8);
  if ( !v4 )
  {
    Paged = (char *)KsepPoolAllocatePaged(0x38uLL);
    v4 = Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 40, SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_6;
    }
    KsepCacheInsert(v1, v4);
  }
  v5 = 0;
LABEL_6:
  KsepCacheUnlock((ULONG_PTR)v1);
  if ( v5 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree(v4 + 40);
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v5;
}
