/*
 * XREFs of GreGetBrushColor @ 0x1C0150DB0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00604A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1;
  GreAcquireHmgrSemaphore((__int64)a1);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v5, a1);
  if ( v5[0] && (unsigned int)(*(_DWORD *)(v5[0] + 80LL) - 6) <= 1 )
    v2 = *(_DWORD *)(v5[0] + 76LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v5);
  GreReleaseHmgrSemaphore(v3);
  return v2;
}
