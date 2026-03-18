/*
 * XREFs of ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1400FC360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::RestoreFromPurge(VIDMM_APERTURE_SEGMENT *this)
{
  char *v1; // rsi
  char *v3; // rbx
  char *v4; // r10
  int v5; // ecx
  BOOL v6; // ecx
  VIDMM_APERTURE_SEGMENT *v7; // rbx
  char *v8; // r10
  int v9; // ecx
  BOOL v10; // ecx

  v1 = (char *)this + 8;
  v3 = (char *)*((_QWORD *)this + 1);
  while ( v3 != v1 )
  {
    v4 = v3 - 264;
    v3 = *(char **)v3;
    v5 = **((_DWORD **)v4 + 49);
    if ( (v5 & 0x10000000) == 0 && (*((_DWORD *)v4 + 7) & 0x800) == 0 )
    {
      v6 = (v5 & 4) != 0 && (v5 & 0x800000) == 0;
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, char *, _QWORD, __int64, __int64, _QWORD, _DWORD, BOOL))(*(_QWORD *)this + 200LL))(
        this,
        v4,
        *(_QWORD *)(*(_QWORD *)v4 + 16LL) >> 12,
        *(_QWORD *)(*(_QWORD *)v4 + 72LL) / 4096LL,
        *(_QWORD *)(*(_QWORD *)v4 + 72LL) / 4096LL,
        *((_QWORD *)v4 + 7),
        0,
        v6);
    }
  }
  v7 = (VIDMM_APERTURE_SEGMENT *)*((_QWORD *)this + 27);
  while ( v7 != (VIDMM_APERTURE_SEGMENT *)((char *)this + 216) )
  {
    v8 = (char *)v7 - 264;
    v7 = *(VIDMM_APERTURE_SEGMENT **)v7;
    v9 = **((_DWORD **)v8 + 49);
    if ( (v9 & 0x10000000) == 0 )
    {
      v10 = (v9 & 4) != 0 && (v9 & 0x800000) == 0;
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, char *, _QWORD, __int64, __int64, _QWORD, _DWORD, BOOL))(*(_QWORD *)this + 200LL))(
        this,
        v8,
        *(_QWORD *)(*(_QWORD *)v8 + 16LL) >> 12,
        *(_QWORD *)(*(_QWORD *)v8 + 72LL) / 4096LL,
        *(_QWORD *)(*(_QWORD *)v8 + 72LL) / 4096LL,
        *((_QWORD *)v8 + 7),
        0,
        v10);
    }
  }
}
