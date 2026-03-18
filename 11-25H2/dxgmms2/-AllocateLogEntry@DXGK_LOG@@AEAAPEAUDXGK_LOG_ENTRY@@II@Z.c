/*
 * XREFs of ?AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z @ 0x140034850
 * Callers:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z @ 0x140034850 (-AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z.c)
 * Callees:
 *     ?AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z @ 0x140034850 (-AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z.c)
 */

struct DXGK_LOG_ENTRY *__fastcall DXGK_LOG::AllocateLogEntry(DXGK_LOG *this, char a2, unsigned int a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // rdi
  struct DXGK_LOG_ENTRY *result; // rax
  struct DXGK_LOG_ENTRY *LogEntry; // rax

  v5 = *((_DWORD *)this + 2);
  if ( a3 > v5 )
  {
    LogEntry = DXGK_LOG::AllocateLogEntry(this, a2, 0x18u);
    *((_DWORD *)LogEntry + 4) |= 0x40u;
    return 0LL;
  }
  else
  {
    v6 = v5 - 1;
    v7 = *((_DWORD *)this + 3);
    v8 = v7 + a3;
    if ( a3 + ((v5 - 1) & v7) > v5 )
    {
      v7 = v8 & ~v6;
      v8 = v7 + a3;
    }
    v9 = *(_QWORD *)this + (v7 & v6);
    *(_DWORD *)(v9 + 8) = *((_DWORD *)this + 4);
    *(_DWORD *)(v9 + 16) = a2 & 0x3F;
    *(_DWORD *)(v9 + 12) = a3;
    KeQuerySystemTimePrecise(v9);
    result = (struct DXGK_LOG_ENTRY *)v9;
    *((_DWORD *)this + 4) = v7;
    *((_DWORD *)this + 3) = v8;
  }
  return result;
}
