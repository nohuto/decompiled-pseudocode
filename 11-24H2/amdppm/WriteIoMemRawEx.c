/*
 * XREFs of WriteIoMemRawEx @ 0x140001D10
 * Callers:
 *     WriteGenAddrEx @ 0x140001BD0 (WriteGenAddrEx.c)
 *     PerfControlCpcSingleRegister @ 0x140006A20 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall WriteIoMemRawEx(unsigned __int8 *a1, unsigned __int64 a2)
{
  int v2; // eax
  __int64 v5; // rcx
  unsigned __int8 v6; // dl
  unsigned __int64 result; // rax
  unsigned int v8; // ecx
  bool v9; // cc
  __int64 v10; // rcx
  unsigned __int8 v11; // cl
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = *a1;
  if ( !(_BYTE)v2 )
  {
    result = *((_QWORD *)a1 + 2);
    v11 = a1[3];
    switch ( v11 )
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
LABEL_11:
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    return result;
  }
  if ( (_BYTE)v2 == 10 )
  {
    v8 = a1[1] + a1[2];
    result = *((_QWORD *)a1 + 2);
    if ( v8 > 8 )
    {
      if ( v8 <= 0x10 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(result + 88)) = a2;
        _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
        return result;
      }
      v9 = v8 <= 0x20;
      v10 = *(_QWORD *)(result + 88);
      if ( v9 )
        *(_DWORD *)(*(_QWORD *)(a1 + 4) + v10) = a2;
      else
        *(_QWORD *)(*(_QWORD *)(a1 + 4) + v10) = a2;
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(result + 88)) = a2;
    }
    goto LABEL_11;
  }
  v5 = *(_QWORD *)(a1 + 4);
  v6 = a1[3];
  result = (unsigned int)(v2 - 1);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 126 && v6 == 64 )
    {
      result = a2;
      __writemsr(v5, a2);
    }
  }
  else
  {
    switch ( v6 )
    {
      case 8u:
        result = (unsigned __int8)a2;
        __outbyte(v5, a2);
        break;
      case 0x10u:
        result = (unsigned __int16)a2;
        __outword(v5, a2);
        break;
      case 0x20u:
        result = (unsigned int)a2;
        __outdword(v5, a2);
        break;
    }
  }
  return result;
}
