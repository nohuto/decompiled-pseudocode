/*
 * XREFs of GreGetRgnBox @ 0x1C0099280
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C0009760 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C016A9B0 (EngGetRgnBox.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  _DWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a1, 1, 0);
  if ( a2 )
  {
    v4 = v8[0];
    if ( v8[0] )
    {
      v5 = (_DWORD *)(v8[0] + 52LL);
      *(_OWORD *)a2 = *(_OWORD *)(v8[0] + 56LL);
      if ( *v5 == 1 )
      {
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        v3 = 1;
      }
      else
      {
        v6 = v4 + 48;
        if ( !v4 )
          v6 = 24LL;
        LOBYTE(v3) = *(_DWORD *)v6 > 0x38u;
        v3 += 2;
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
  return v3;
}
