/*
 * XREFs of IopRegistryOpenDeepestPath @ 0x140A78FB4
 * Callers:
 *     IopRegistryInitializeCallbacks @ 0x140717618 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x140A78E70 (IopRegistryCallback.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 */

__int64 __fastcall IopRegistryOpenDeepestPath(__int128 *a1, HANDLE *a2, bool *a3)
{
  __int128 v3; // xmm0
  NTSTATUS v7; // r8d
  unsigned __int16 i; // dx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  v3 = *a1;
  KeyHandle = 0LL;
  v10 = v3;
LABEL_2:
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x10u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    *a2 = KeyHandle;
    *a3 = (_WORD)v10 == *(_WORD *)a1;
  }
  else
  {
    for ( i = v10; i; LOWORD(v10) = i )
    {
      if ( *(_WORD *)(*((_QWORD *)&v10 + 1) + 2 * ((unsigned __int64)i >> 1) - 2) == 92 )
      {
        LOWORD(v10) = i - 2;
        if ( i != 2 )
          goto LABEL_2;
        return (unsigned int)v7;
      }
      i -= 2;
    }
  }
  return (unsigned int)v7;
}
