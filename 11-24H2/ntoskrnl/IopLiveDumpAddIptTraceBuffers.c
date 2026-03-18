/*
 * XREFs of IopLiveDumpAddIptTraceBuffers @ 0x140597E30
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopLiveDumpAddIptTraceBuffers(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v9[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+42h] [rbp-Eh]
  __int16 v12; // [rsp+46h] [rbp-Ah]
  unsigned int v13; // [rsp+70h] [rbp+20h] BYREF

  v8 = 0LL;
  v11 = 0;
  v3 = 0;
  v12 = 0;
  v13 = 0;
  if ( IptInterface )
  {
    v9[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
    v9[0] = (unsigned __int16 *)&KeActiveProcessors;
    v10 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v9) )
    {
      if ( (int)guard_dispatch_icall_no_overrides(v13, &v8, v4, v5) >= 0 )
      {
        v6 = MmAddRangeToCrashDump(a2, v8, *((_QWORD *)&v8 + 1));
        if ( v6 < 0 )
        {
          if ( v6 == -1073741789 )
            return 0LL;
          v3 = v6;
        }
      }
    }
  }
  return v3;
}
