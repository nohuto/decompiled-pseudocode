/*
 * XREFs of PnpTrackQueryRemoveDevices @ 0x140AB4720
 * Callers:
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipClearDevNodeUserFlags @ 0x14098E9D4 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeUserFlags @ 0x140AC3794 (PipSetDevNodeUserFlags.c)
 */

void __fastcall PnpTrackQueryRemoveDevices(_QWORD *a1, char a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    v5 = (_DWORD *)*a1;
    if ( (unsigned int)v4 >= *(_DWORD *)*a1 || !v5 )
      break;
    _mm_lfence();
    v6 = 3 * v4;
    v4 = (unsigned int)(v4 + 1);
    v7 = *(_QWORD *)&v5[2 * v6 + 4];
    if ( v7 )
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
    else
      v8 = 0LL;
    if ( a2 )
      PipSetDevNodeUserFlags(v8, 256LL);
    else
      PipClearDevNodeUserFlags(v8, 256);
  }
}
