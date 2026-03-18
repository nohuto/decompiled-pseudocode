/*
 * XREFs of IopLiveDumpAddIptTraceBuffers @ 0x140594720
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopLiveDumpAddIptTraceBuffers(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned __int16 *v6[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v7; // [rsp+40h] [rbp-10h]
  int v8; // [rsp+42h] [rbp-Eh]
  __int16 v9; // [rsp+46h] [rbp-Ah]
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF

  v8 = 0;
  v3 = 0;
  v9 = 0;
  v10 = 0;
  if ( IptInterface )
  {
    v6[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
    v6[0] = (unsigned __int16 *)&KeActiveProcessors;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v6) )
    {
      if ( (int)guard_dispatch_icall_no_overrides(v10) >= 0 )
      {
        v4 = MmAddRangeToCrashDump(a2, 0LL, 0LL);
        if ( v4 < 0 )
        {
          if ( v4 == -1073741789 )
            return 0LL;
          v3 = v4;
        }
      }
    }
  }
  return v3;
}
