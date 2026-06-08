/*
 * XREFs of WriteIoMemRawEx @ 0x140001790
 * Callers:
 *     WriteGenAddrEx @ 0x14000170C (WriteGenAddrEx.c)
 *     PerfControlCpcSingleRegister @ 0x1400091F0 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall WriteIoMemRawEx(unsigned __int8 *a1, unsigned __int64 a2)
{
  int v2; // eax
  __int64 v4; // rcx
  unsigned __int8 v5; // r9
  unsigned __int64 result; // rax
  unsigned int v7; // ecx
  bool v8; // cc
  __int64 v9; // rcx
  unsigned __int8 v10; // cl
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = *a1;
  if ( !(_BYTE)v2 )
  {
    result = *((_QWORD *)a1 + 2);
    v10 = a1[3];
    switch ( v10 )
    {
      case 8u:
        *(_BYTE *)result = a2;
        break;
      case 0x10u:
        *(_WORD *)result = a2;
        break;
      case 0x20u:
        *(_DWORD *)result = a2;
        break;
      case 0x40u:
        *(_QWORD *)result = a2;
        break;
      default:
        return result;
    }
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    return result;
  }
  if ( (_BYTE)v2 == 10 )
  {
    v7 = a1[1] + a1[2];
    result = *((_QWORD *)a1 + 2);
    if ( v7 <= 8 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(result + 88)) = a2;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      return result;
    }
    if ( v7 <= 0x10 )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(result + 88)) = a2;
    }
    else
    {
      v8 = v7 <= 0x20;
      v9 = *(_QWORD *)(result + 88);
      if ( !v8 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 4) + v9) = a2;
        _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
        return result;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 4) + v9) = a2;
    }
    goto LABEL_14;
  }
  v4 = *(_QWORD *)(a1 + 4);
  v5 = a1[3];
  result = (unsigned int)(v2 - 1);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 126 && v5 == 64 )
    {
      result = a2;
      __writemsr(v4, a2);
    }
  }
  else
  {
    switch ( v5 )
    {
      case 0x10u:
        result = (unsigned __int16)a2;
        __outword(v4, a2);
        break;
      case 8u:
        result = (unsigned __int8)a2;
        __outbyte(v4, a2);
        break;
      case 0x20u:
        result = (unsigned int)a2;
        __outdword(v4, a2);
        break;
    }
  }
  return result;
}
