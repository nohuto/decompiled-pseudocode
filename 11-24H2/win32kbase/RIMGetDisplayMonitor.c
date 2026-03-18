/*
 * XREFs of RIMGetDisplayMonitor @ 0x14014B4DC
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetDisplayMonitor(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  int v5; // ebp
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+44h] [rbp+Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0;
  v7 = *a2;
  v16 = HIDWORD(v3);
  v10 = a1;
  while ( v6 < v7 )
  {
    v11 = *((_QWORD *)a2 + 1);
    a1 = 216LL * v6;
    if ( *(_DWORD *)(a1 + v11 + 116) == *(_DWORD *)(v10 + 116) && *(_DWORD *)(a1 + v11 + 120) == *(_DWORD *)(v10 + 120) )
    {
      v3 = *(_QWORD *)(a1 + v11 + 16);
      v5 = *(_DWORD *)(a1 + v11 + 24);
      v16 = HIDWORD(v3);
      break;
    }
    ++v6;
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 112LL); i; i = *(_QWORD *)(i + 56) )
  {
    v13 = *(_QWORD *)(i + 88);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 40) & 0x20000) == 0 )
      {
        v14 = *(_QWORD *)(v13 + 2568);
        if ( ((v14 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && (*(_DWORD *)(v14 + 160) & 0x800000) != 0
          && *(_DWORD *)(v14 + 248) == v5
          && *(_QWORD *)(v14 + 240) == __PAIR64__(v16, v3) )
        {
          *a3 = i;
          return 1;
        }
      }
    }
  }
  return v4;
}
