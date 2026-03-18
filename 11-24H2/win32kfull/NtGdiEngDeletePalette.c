/*
 * XREFs of NtGdiEngDeletePalette @ 0x140261AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140180CA0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401BACBC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall NtGdiEngDeletePalette(HPALETTE a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  struct W32_PUSH_LOCK *v6[15]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+10h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  if ( v7 && (*(_DWORD *)(v7 + 24) & 0x2000000) != 0 )
    v4 = EngDeletePaletteInternal((struct EPALOBJ *)&v7);
  else
    v4 = 0;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v6);
  return v4;
}
