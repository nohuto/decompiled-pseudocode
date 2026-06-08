/*
 * XREFs of PerfControlCppcRequestMsr @ 0x140001E30
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRawEx @ 0x140002010 (ReadIoMemRawEx.c)
 */

void __fastcall PerfControlCppcRequestMsr(__int64 a1, _QWORD *a2, char a3, char a4)
{
  _QWORD *v4; // r11
  __int64 IoMemRaw; // rax
  unsigned __int8 *v7; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // r8
  __int64 v13; // r11
  unsigned __int8 v14; // r9
  unsigned int v15; // r9d
  int v16; // edx
  _WORD *v17; // r9
  unsigned __int8 v18; // dl
  _BYTE *v19; // rax
  signed __int32 v20[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = a2;
  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 137) || a4 )
    {
      IoMemRaw = ReadIoMemRawEx(a1 + 152);
      *(_BYTE *)(a1 + 137) = 1;
    }
    else
    {
      IoMemRaw = *(_QWORD *)(a1 + 176);
      v7 = (unsigned __int8 *)(a1 + 152);
    }
    v8 = *(_QWORD *)(a1 + 184);
    v9 = *v4 & v8;
    v10 = IoMemRaw & ~v8;
    v11 = *v7;
    v12 = v9 | v10;
    if ( (_BYTE)v11 )
    {
      if ( (_BYTE)v11 != 10 )
      {
        v13 = *(_QWORD *)(v7 + 4);
        v14 = v7[3];
        if ( v11 == 1 )
        {
          switch ( v14 )
          {
            case 8u:
              __outbyte(v13, v12);
              break;
            case 0x10u:
              __outword(v13, v12);
              break;
            case 0x20u:
              __outdword(v13, v12);
              break;
          }
        }
        else if ( v11 == 127 && v14 == 64 )
        {
          __writemsr(v13, v12);
        }
        goto LABEL_8;
      }
      v15 = v7[1] + v7[2];
      if ( v15 > 8 )
      {
        if ( v15 <= 0x10 )
        {
          v16 = 16;
        }
        else
        {
          v16 = 64;
          if ( v15 <= 0x20 )
            v16 = 32;
        }
      }
      else
      {
        v16 = 8;
      }
      v17 = (_WORD *)(*(_QWORD *)(v7 + 4) + *(_QWORD *)(*((_QWORD *)v7 + 2) + 88LL));
      switch ( v16 )
      {
        case 16:
          *v17 = v12;
          break;
        case 8:
          *(_BYTE *)v17 = v12;
          break;
        case 32:
          *(_DWORD *)v17 = v12;
          break;
        default:
          *(_QWORD *)v17 = v12;
          break;
      }
    }
    else
    {
      v18 = v7[3];
      v19 = (_BYTE *)*((_QWORD *)v7 + 2);
      switch ( v18 )
      {
        case 8u:
          *v19 = v12;
          break;
        case 0x10u:
          *(_WORD *)v19 = v12;
          break;
        case 0x20u:
          *(_DWORD *)v19 = v12;
          break;
        case 0x40u:
          *(_QWORD *)v19 = v12;
          break;
        default:
          goto LABEL_8;
      }
    }
    _InterlockedOr(v20, 0);
LABEL_8:
    *(_QWORD *)(a1 + 176) = v12;
  }
}
