/*
 * XREFs of DrvUniformSpaceToPixelSpacePoint @ 0x1400CADC0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 */

__int64 __fastcall DrvUniformSpaceToPixelSpacePoint(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // ebp
  _DWORD *v10; // rsi
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // r11
  float v15; // xmm3_4
  __int64 v16; // [rsp+50h] [rbp+18h]

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v6) + 88) + 1160LL) && v5 && (*(_DWORD *)(v5 + 16) & 2) != 0 )
  {
    v8 = 0;
    v9 = *(_DWORD *)(v5 + 20);
    LODWORD(v16) = *a1;
    HIDWORD(v16) = *a2;
    while ( v8 < v9 )
    {
      v10 = (_DWORD *)(56LL * v8 + v5);
      if ( (unsigned int)PtInRect(v10 + 19, v16) )
      {
        v4 = 1;
        v15 = (float)((float)((float)(*(_DWORD *)(v14 + v5 + 68) - *(_DWORD *)(v14 + v5 + 60))
                            / (float)(v10[22] - v10[20]))
                    * (float)(v12 - v10[20]))
            + 0.5;
        *a1 = *(_DWORD *)(v14 + v5 + 56)
            + (int)(float)((float)((float)((float)(*(_DWORD *)(v14 + v5 + 64) - *(_DWORD *)(v14 + v5 + 56))
                                         / (float)(v10[21] - v10[19]))
                                 * (float)(v13 - v10[19]))
                         + 0.5);
        *a2 = *(_DWORD *)(v14 + v5 + 60) + (int)v15;
        return v4;
      }
      v8 = v11 + 1;
    }
  }
  return v4;
}
