/*
 * XREFs of RtlpValidateKeyTrust @ 0x140833F14
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x140835044 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 */

__int64 __fastcall RtlpValidateKeyTrust(void *a1, __int16 a2)
{
  unsigned int v2; // ebx
  NTSTATUS v4; // eax
  int KeyInformation; // [rsp+48h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  KeyInformation = 0;
  ResultLength = 0;
  if ( (a2 & 0x100) == 0 )
  {
    v4 = ZwQueryKey(a1, KeyTrustInformation, &KeyInformation, 4u, &ResultLength);
    if ( v4 >= 0 )
    {
      if ( (KeyInformation & 1) != 0 )
        return v2;
    }
    else
    {
      v2 = v4;
      if ( v4 == -1073741431 )
        return v2;
    }
    __fastfail(9u);
  }
  return v2;
}
