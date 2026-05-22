/*
 * XREFs of ?GetInfo@GestureSession@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801ABBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GestureSession::GetInfo(__int64 a1, int a2)
{
  __int64 v3; // rax
  int v5; // edi
  _DWORD *v6; // rsi
  int v7; // ebx

  if ( a2 > 6 )
  {
    if ( a2 == 7 )
    {
      v3 = 248LL;
    }
    else
    {
      if ( a2 == 8 )
      {
LABEL_19:
        v3 = 32LL;
        goto LABEL_21;
      }
      if ( a2 != 9 && a2 != 10 && (unsigned int)(a2 - 11) >= 2 )
        return (unsigned int)-2147024809;
      v3 = 480LL;
    }
LABEL_21:
    v6 = (_DWORD *)(v3 + a1);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + a1) + 40LL))(v3 + a1);
    if ( v5 >= 0 )
    {
      v7 = ~v6[2];
      *(_DWORD *)(a1 + 16) &= (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6) | v7;
    }
    return (unsigned int)v5;
  }
  switch ( a2 )
  {
    case 6:
      v3 = 416LL;
      goto LABEL_21;
    case 0:
      return 1LL;
    case 1:
    case 2:
    case 3:
    case 4:
      goto LABEL_19;
    case 5:
      v3 = 168LL;
      goto LABEL_21;
  }
  return (unsigned int)-2147024809;
}
