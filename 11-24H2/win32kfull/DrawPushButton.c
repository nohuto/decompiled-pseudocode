/*
 * XREFs of DrawPushButton @ 0x140037B70
 * Callers:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 * Callees:
 *     DrawEdge @ 0x140037D18 (DrawEdge.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  HBRUSH v13; // rbx
  int result; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  RECT v19; // [rsp+20h] [rbp-28h] BYREF

  v19 = *a2;
  DrawEdge(a1);
  v8 = 0;
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928);
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(v12 + 6996) < 8u
      || (v12 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19928), *(_DWORD *)(v12 + 4648) == 0xFFFFFF) )
    {
      v15 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19928);
      v13 = *(HBRUSH *)(v15 + 4944);
      W32GetUserSessionState(v15, v16);
      GreSetBkColor(a1);
      W32GetUserSessionState(v18, v17);
      GreSetTextColor(a1);
      v8 = 1;
    }
    else
    {
      v13 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19928) + 4856LL);
    }
  }
  else
  {
    v13 = *(HBRUSH *)(v12 + 4816);
  }
  result = FillRect(a1, &v19, v13);
  if ( v8 )
  {
    GreSetBkColor(a1);
    result = GreSetTextColor(a1);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v19;
  return result;
}
