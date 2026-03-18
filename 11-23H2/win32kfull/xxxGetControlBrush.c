/*
 * XREFs of xxxGetControlBrush @ 0x1C02233FC
 * Callers:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0014C78 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     NtUserGetControlBrush @ 0x1C01D0590 (NtUserGetControlBrush.c)
 * Callees:
 *     xxxGetControlColor @ 0x1C0007990 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(__int64 *a1, __int64 a2, unsigned int a3)
{
  struct tagWND *v6; // rdi
  __int64 ControlColor; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  if ( (((*(_BYTE *)(a1[5] + 31) & 0xC0) + 0x80) & 0xBF) != 0 )
    v6 = (struct tagWND *)a1[13];
  else
    v6 = (struct tagWND *)a1[15];
  if ( !v6 )
    v6 = (struct tagWND *)a1;
  ThreadLock(v6, &v12);
  ControlColor = xxxGetControlColor(v6, a1, a2, a3);
  ThreadUnlock1(v9, v8, v10);
  return ControlColor;
}
