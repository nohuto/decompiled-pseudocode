/*
 * XREFs of KsepRegistryOpenKey @ 0x14095BE4C
 * Callers:
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073E7D4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepMatchInitBiosInfo @ 0x140C2BB00 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140C2C160 (KsepEngineReadFlags.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     KsepStringConcatenate @ 0x14095BF50 (KsepStringConcatenate.c)
 *     KsepStringDuplicate @ 0x14095CB04 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepRegistryOpenKey(__int64 a1, __int64 a2, HANDLE *a3)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  void *v12; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 262566;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A6u, 0LL);
  }
  if ( !a3 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 262567;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A7u, 0LL);
  }
  if ( a2 )
    v6 = KsepStringConcatenate(&v11, a1, a2, 1LL);
  else
    v6 = KsepStringDuplicate(&v11, a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      *a3 = KeyHandle;
      _InterlockedIncrement(&dword_140F0F318);
    }
  }
  if ( v12 )
    KsepPoolFreePaged(v12);
  return (unsigned int)v7;
}
