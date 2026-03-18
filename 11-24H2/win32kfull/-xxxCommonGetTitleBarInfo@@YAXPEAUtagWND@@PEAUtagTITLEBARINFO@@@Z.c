/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x140074CFC
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x14010AFD8 (xxxGetTitleBarInfoEx.c)
 *     NtUserGetTitleBarInfo @ 0x140242EA0 (NtUserGetTitleBarInfo.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     xxxMNCanClose @ 0x1400708B0 (xxxMNCanClose.c)
 *     GetWindowBordersForDpi @ 0x140074F80 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1400B43E8 (_HasCaptionIcon.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2, int a3, int a4)
{
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int WindowDpiLastNotify; // esi
  int WindowBordersForDpi; // eax
  __int64 v11; // rcx
  char v12; // cl
  char v13; // cl
  char *v14; // rcx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax

  v6 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v6;
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v7 + 31) & 0x20) != 0 || (*(_BYTE *)(v7 + 16) & 8) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 288) & 0xF;
      if ( v8 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v7 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v7 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v8
             && (v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v17 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
      }
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v7 + 88);
      WindowBordersForDpi = GetWindowBordersForDpi(
                              *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL),
                              *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL),
                              a3,
                              a4,
                              WindowDpiLastNotify);
      *((_DWORD *)a2 + 1) += WindowBordersForDpi;
      *((_DWORD *)a2 + 3) -= WindowBordersForDpi;
      v11 = 22LL;
      *((_DWORD *)a2 + 2) += WindowBordersForDpi;
      *((_DWORD *)a2 + 4) -= WindowBordersForDpi;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
        v11 = 2LL;
      *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(v11, WindowDpiLastNotify);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v15 = *((_DWORD *)a2 + 4);
        v16 = *((_DWORD *)a2 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v16 - v15 + 1;
        else
          *((_DWORD *)a2 + 1) += v15 - v16 - 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
      {
        if ( !(unsigned int)xxxMNCanClose((__int64)a1) )
          *((_DWORD *)a2 + 10) |= 1u;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
          *((_DWORD *)a2 + 10) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 10) |= 0x8000u;
      }
      v12 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL);
      if ( (v12 & 8) != 0 )
      {
        if ( (v12 & 1) == 0 )
        {
          v18 = *((_DWORD *)a2 + 8);
          if ( (v12 & 2) != 0 )
            v19 = v18 | 1;
          else
            v19 = v18 | 0x8000;
          *((_DWORD *)a2 + 8) = v19;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v13 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL);
      if ( (v13 & 8) != 0 )
      {
        if ( (v13 & 2) == 0 )
        {
          v20 = *((_DWORD *)a2 + 7);
          if ( (v13 & 1) != 0 )
            v21 = v20 | 1;
          else
            v21 = v20 | 0x8000;
          *((_DWORD *)a2 + 7) = v21;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v14 = (char *)*((_QWORD *)a1 + 5);
      if ( (v14[25] & 4) == 0 || (v14[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v14[21] < 0 )
      {
        *((_DWORD *)a2 + 9) |= 8u;
      }
      *((_DWORD *)a2 + 6) = 0x8000;
    }
    else
    {
      *((_DWORD *)a2 + 5) = v6 | 0x10000;
      *(_OWORD *)((char *)a2 + 4) = 0LL;
    }
  }
  else
  {
    *((_DWORD *)a2 + 5) = v6 | 0x8000;
  }
}
