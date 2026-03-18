/*
 * XREFs of ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x140172E10
 * Callers:
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     NtGdiExtTextOutW @ 0x14025F050 (NtGdiExtTextOutW.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 */

_DWORD *__fastcall GrepExtTextOutW(
        _DWORD *a1,
        DC **a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int *a6,
        unsigned __int16 *a7,
        int a8,
        ULONG *a9,
        void *a10,
        unsigned int a11,
        int a12)
{
  int v13; // ebx
  __int128 v18; // [rsp+70h] [rbp-89h] BYREF
  __int64 v19; // [rsp+80h] [rbp-79h]
  int v20; // [rsp+88h] [rbp-71h]
  _QWORD v21[18]; // [rsp+90h] [rbp-69h] BYREF
  char v22; // [rsp+130h] [rbp+37h] BYREF
  int v23; // [rsp+138h] [rbp+3Fh] BYREF
  int v24; // [rsp+13Ch] [rbp+43h]

  v13 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x10000) == 0 )
  {
    v24 = *((unsigned __int16 *)*a2 + 6);
    v23 = a12;
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v21);
    v19 = 0LL;
    v18 = 0LL;
    v20 = 0;
    v21[0] = 0LL;
    memset(&v21[10], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v18, (struct XDCOBJ *)a2, 0) )
      v13 = *(_DWORD *)GrepExtTextOutWLocked(
                         (__int64)&v22,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         *(unsigned __int8 *)(*((_QWORD *)*a2 + 122) + 213LL),
                         a10,
                         a11,
                         (struct RFONTOBJ::Tag *)&v23);
    else
      v13 = XDCOBJ::bFullScreen((XDCOBJ *)a2);
    DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v18);
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v13);
  return a1;
}
