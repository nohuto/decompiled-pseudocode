/*
 * XREFs of ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x14034FD54
 * Callers:
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x14034FA60 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall RotateCursorShapeWorker(struct CURSOR_INFO *a1, const struct CURSOR_INFO *a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r13d
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  int v10; // r9d
  int v11; // r11d
  int v12; // r10d
  __int64 v13; // rax
  _DWORD *v14; // r15
  int v15; // eax
  unsigned int v16; // r9d
  int v17; // r9d
  char v18; // bp
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  int v21; // r9d
  _BYTE *v22; // rdx
  unsigned int v23; // [rsp+80h] [rbp+8h]

  v2 = *((_DWORD *)a1 + 2);
  v3 = *(_DWORD *)a1;
  v23 = v2;
  v6 = 0;
  if ( !v2 )
    return;
  do
  {
    v7 = 0;
    if ( !v3 )
      goto LABEL_15;
    v8 = 0LL;
    do
    {
      v9 = *((_QWORD *)a2 + 3);
      v10 = *((_DWORD *)a2 + 2);
      v11 = *(_DWORD *)a2;
      v12 = *((_DWORD *)a1 + 8);
      v13 = v6 * *((_DWORD *)a2 + 4);
      if ( !*((_DWORD *)a1 + 9) )
      {
        v14 = (_DWORD *)(v9 + v13 + 4 * v7);
        switch ( v12 )
        {
          case 1:
            goto LABEL_30;
          case 2:
            v15 = v6;
            v17 = v11 - v7;
            break;
          case 3:
            v15 = v11 - v7 - 1;
            v17 = v10 - v6;
            break;
          case 4:
            v15 = v10 - v6 - 1;
            v16 = v7;
LABEL_12:
            *(_DWORD *)((unsigned int)(4 * v15) + (unsigned __int64)(*((_DWORD *)a1 + 5) * v16) + *((_QWORD *)a1 + 3)) = *v14;
            goto LABEL_13;
          default:
LABEL_30:
            if ( v12 != 1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 387;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"Orientation == D3DKMDT_VPPR_IDENTITY",
                387LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v15 = v7;
            v16 = v6;
            goto LABEL_12;
        }
        v16 = v17 - 1;
        goto LABEL_12;
      }
      v18 = (*(_BYTE *)((v8 >> 3) + v13 + v9) >> (7 - (v7 & 7))) & 1;
      switch ( v12 )
      {
        case 1:
LABEL_27:
          if ( v12 != 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 387;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"Orientation == D3DKMDT_VPPR_IDENTITY",
              387LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v19 = v7;
          v20 = v6;
          goto LABEL_24;
        case 2:
          v19 = v6;
          v21 = v11 - v7;
LABEL_23:
          v20 = v21 - 1;
          goto LABEL_24;
        case 3:
          v19 = v11 - v7 - 1;
          v21 = v10 - v6;
          goto LABEL_23;
      }
      if ( v12 != 4 )
        goto LABEL_27;
      v19 = v10 - v6 - 1;
      v20 = v7;
LABEL_24:
      v22 = (_BYTE *)(*((_QWORD *)a1 + 3) + ((unsigned __int64)v19 >> 3) + *((_DWORD *)a1 + 5) * v20);
      *v22 = (v18 << (7 - (v19 & 7))) | *v22 & ~(1 << (7 - (v19 & 7)));
LABEL_13:
      ++v7;
      ++v8;
    }
    while ( v7 < v3 );
    v2 = v23;
LABEL_15:
    ++v6;
  }
  while ( v6 < v2 );
}
