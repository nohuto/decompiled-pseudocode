/*
 * XREFs of GreGetRegionData @ 0x1C005AA00
 * Callers:
 *     EngGetRgnData @ 0x1C000EEB0 (EngGetRgnData.c)
 *     NtGdiGetRegionData @ 0x1C005A8F0 (NtGdiGetRegionData.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C005AAF0 (-vDownload@RGNOBJ@@QEAAXPEAX@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreGetRegionData(HRGN a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  int v6; // r8d
  int v7; // edx
  _DWORD *i; // r10
  int v9; // edx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  ULONG v13; // ecx
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, a1, 1, 0);
  v5 = v14[0];
  if ( !v14[0] )
  {
    v13 = 6;
    goto LABEL_12;
  }
  v6 = *(_DWORD *)(v14[0] + 52LL);
  v7 = 0;
  for ( i = *(_DWORD **)(v14[0] + 32LL); v6; --v6 )
  {
    v7 += *i >> 1;
    i = (_DWORD *)((char *)i + (unsigned int)(4 * *i + 16));
  }
  v9 = 16 * v7;
  v10 = v9 + 32;
  if ( a3 )
  {
    if ( v10 <= a2 )
    {
      *(_DWORD *)a3 = 32;
      v11 = ((unsigned __int64)v10 - 32) >> 4;
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = v11;
      *(_DWORD *)(a3 + 12) = v9;
      if ( (_DWORD)v11 )
      {
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 56);
      }
      else
      {
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 20) = 0;
        *(_DWORD *)(a3 + 24) = 0;
        *(_DWORD *)(a3 + 28) = 0;
      }
      RGNOBJ::vDownload((RGNOBJ *)v14, (void *)(a3 + 32));
      goto LABEL_9;
    }
    v13 = 87;
LABEL_12:
    EngSetLastError(v13);
    v10 = 0;
  }
LABEL_9:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v14);
  return v10;
}
