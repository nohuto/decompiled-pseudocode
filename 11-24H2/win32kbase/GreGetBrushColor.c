/*
 * XREFs of GreGetBrushColor @ 0x1401C3FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140085760 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140085B74 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

__int64 __fastcall GreGetBrushColor(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v5; // [rsp+68h] [rbp+10h] BYREF

  v2 = -1;
  SEMOBJ<20>::SEMOBJ<20>(&v5);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v4, a1);
  if ( v4[0] && (unsigned int)(*(_DWORD *)(v4[0] + 80LL) - 6) <= 1 )
    v2 = *(_DWORD *)(v4[0] + 76LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v4);
  SEMOBJ<20>::vUnlock(&v5);
  return v2;
}
