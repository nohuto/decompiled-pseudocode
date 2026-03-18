/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x140C4B4E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateMutant @ 0x14069C880 (ZwCreateMutant.c)
 */

int BcdInitializeBcdSyncMutant()
{
  signed __int64 v0; // rax
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF

  Handle = 0LL;
  LODWORD(v0) = ZwCreateMutant((__int64)&Handle, 2031617LL);
  if ( (int)v0 >= 0 )
  {
    v0 = _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)Handle, 0LL);
    if ( v0 )
      LODWORD(v0) = ZwClose(Handle);
  }
  return v0;
}
