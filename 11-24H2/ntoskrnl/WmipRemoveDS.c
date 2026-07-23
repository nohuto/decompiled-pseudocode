/*
 * XREFs of WmipRemoveDS @ 0x140A9BBB4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14046A000 (WmipDeregisterRegEntry.c)
 * Callees:
 *     WmipGenerateRegistrationNotification @ 0x1409B1AE4 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipRemoveDS(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    WmipGenerateRegistrationNotification(*(_QWORD *)(a1 + 32), 2);
    *(_DWORD *)(v1 + 16) |= 1u;
    return WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v1);
  }
  return result;
}
