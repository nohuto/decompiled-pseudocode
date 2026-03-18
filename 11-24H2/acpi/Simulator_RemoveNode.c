/*
 * XREFs of Simulator_RemoveNode @ 0x14006B51C
 * Callers:
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x140003200 (FreeNameSpaceObjects.c)
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  const UNICODE_STRING *v1; // rdx
  int NameSpaceObject; // ebx
  __int64 *v3; // rbx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(const UNICODE_STRING **)(a1 + 16);
  v6 = 0LL;
  DestinationString = 0LL;
  if ( RtlUnicodeStringToAnsiString(&DestinationString, v1, 1u) )
    return 3221225473LL;
  NameSpaceObject = GetNameSpaceObject(DestinationString.Buffer, 0LL, (__int64)&v6, 0);
  RtlFreeAnsiString(&DestinationString);
  if ( NameSpaceObject )
    return 3221225473LL;
  v3 = v6;
  if ( !v6 )
    return 3221225473LL;
  DereferenceObjectEx((__int64)v6);
  if ( (gdwfAMLI & 4) != 0 )
    AMLIDereferenceHandleEx((__int64)(v3 + 15));
  else
    FreeNameSpaceObjects(v3);
  return 0LL;
}
