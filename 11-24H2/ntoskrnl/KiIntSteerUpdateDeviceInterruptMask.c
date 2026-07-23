/*
 * XREFs of KiIntSteerUpdateDeviceInterruptMask @ 0x1402B49C8
 * Callers:
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

volatile signed __int32 *__fastcall KiIntSteerUpdateDeviceInterruptMask(__int64 a1, int a2)
{
  volatile signed __int32 *result; // rax
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (volatile signed __int32 *)&retaddr;
  LOWORD(v3) = *(_WORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
LABEL_2:
  v6 = (unsigned __int16)v3 + 1;
  while ( 1 )
  {
    if ( v5 )
    {
      _BitScanForward64(&v7, v5);
      v5 &= ~(1LL << v7);
      result = (volatile signed __int32 *)KeGetPrcb(*((_DWORD *)qword_140F22998
                                                    + 64 * (unsigned __int16)v3
                                                    + (unsigned __int8)v7));
      if ( a2 )
      {
        if ( a2 == 1 && (*((_DWORD *)result + 2918))-- == 1 )
        {
          v9 = *((unsigned __int8 *)result + 209);
          result = (volatile signed __int32 *)*((_QWORD *)result + 24);
          _interlockedbittestandset64(result + 28, v9);
        }
      }
      else if ( ++*((_DWORD *)result + 2918) == 1 )
      {
        v10 = *((unsigned __int8 *)result + 209);
        result = (volatile signed __int32 *)*((_QWORD *)result + 24);
        _interlockedbittestandreset64(result + 28, v10);
      }
      goto LABEL_2;
    }
    v3 = (unsigned __int16)(v3 + 1);
    if ( (unsigned int)v3 >= v6 )
      return result;
    v5 = *(_QWORD *)(8 * v3 + 8);
  }
}
