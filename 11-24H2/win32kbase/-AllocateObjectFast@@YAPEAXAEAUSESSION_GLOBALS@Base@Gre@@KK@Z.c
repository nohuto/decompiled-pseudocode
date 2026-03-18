/*
 * XREFs of ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C19A0
 * Callers:
 *     AllocateObject @ 0x140148260 (AllocateObject.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 * Callees:
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall AllocateObjectFast(struct Gre::Base::SESSION_GLOBALS *a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  BOOL v4; // edi
  __int64 v5; // rsi
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  v3 = *((_DWORD *)a1 + 446);
  v4 = v3 && a3 == v3;
  v5 = a2 + 160;
  if ( !v4 )
    v5 = a2;
  if ( *((_DWORD *)a1 + a3 + 510) < (unsigned int)v5 )
  {
    v8 = PALLOCMEM((unsigned int)v5, (a3 << 24) + 808478791);
    v7 = v8;
    if ( v8 )
    {
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 - 160 + (unsigned int)v5), 0LL);
      return v7;
    }
  }
  else
  {
    v6 = Win32AllocateFromPagedLookasideListImpl(*((char **)a1 + a3 + 224));
    v7 = (__int64)v6;
    if ( v6 )
    {
      memset(v6, 0, (unsigned int)v5);
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + v7 - 160), 0LL);
      *(_WORD *)(v7 + 14) = 128;
      return v7;
    }
  }
  EngSetLastError(8u);
  return 0LL;
}
